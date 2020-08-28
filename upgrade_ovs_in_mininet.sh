#!/bin/sh -ev
# Reference: https://github.com/mininet/mininet/wiki/Installing-new-version-of-Open-vSwitch
# How to test: ovs-vsctl -V

# Check permission
test $(id -u) -ne 0 && echo "This script must be run as root" && exit 0

# Uninstall ovs installed from source
cd openvswitch-2.9.5/
#make uninstall
#make clean

# Install def ovs using package manager
apt --force-yes --yes install openvswitch-switch

#Remove old version ovs
#aptitude remove openvswitch-common openvswitch-datapath-dkms openvswitch-controller openvswitch-pki openvswitch-switch -y
sudo dpkg -r --force-depends openvswitch-switch

#Install new version ovs from source
#wget http://openvswitch.org/releases/openvswitch-2.8.1.tar.gz
#tar zxvf openvswitch-2.8.1.tar.gz
#cd openvswitch-2.8.1
./configure --prefix=/usr --with-linux=/lib/modules/`uname -r`/build
make
make install
make modules_install
rmmod openvswitch
depmod -a

# Say goodbye to openvswitch-controller
#/etc/init.d/openvswitch-controller stop
#update-rc.d openvswitch-controller disable

#Start new version ovs
/etc/init.d/openvswitch-switch start

#Clean ovs
#rm -rf /tmp/openvswitch-2.3.0*

