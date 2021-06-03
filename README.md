# Configurable Rule Replacement Policies in SDN: Implementation in Open vSwitch


**cite** contains a attack resilience analysis implementation for our [paper](https://nsrg.cse.psu.edu/files/2020/12/Tian21INFOCOM-Attack-Resilience-of-Cache-Policies.pdf).  If you find this code useful in your research, please consider citing:

    @INPROCEEDINGS{Xie21INFOCOM,
      author = { Tian Xie and Ting He and Patrick McDaniel and Namitha Nambiar},
      title = {Attack Resilience of Cache Replacement Policies},
      booktitle = {IEEE INFOCOM},
      year = {2021},
      month = {May}
    }

This code was tested on an Ubuntu 16.04 system using Mininet, openvswitch-2.14.0.

### Structure of Code Design
We have plenty of files in this part, details are explained as following:
- upgrade_ovs_in_mininet.sh: uninstall the default version of open-vswitch(ovs) in mininet and install the ovs version with the cache replacement policies implemented according to our [paper](https://nsrg.cse.psu.edu/files/2020/12/Tian21INFOCOM-Attack-Resilience-of-Cache-Policies.pdf).
- Under folder `openvswitch-2.14.0`:
  - openvswitch-2.8.1/ofproto/ofproto.c: contains replacement policies implementation.
  - openvswitch-2.8.1/ofproto/ofproto-provider.h: create `uint8_t eviction_algorithm ` for id of replacement policies, indicating the current replacement policy.
  - openvswitch-2.14.0/utilities/ovs-ofctl.c: implementing the control knob for switching replacement policy of the flow table inside of the switch.
  - openvswitch-2.14.0/lib/ofp-table.c: implement the CLI for the control knob of switching replacement policy.

### Environment Set Up
- Ubuntu 16.04.07 VM
> https://www.linuxvmimages.com/images/ubuntu-1604/ 

- Install mininet via package
```
sudo apt-get install mininet

# test
sudo mn
mininet> exit

```

- clone repository
```
sudo apt-get install git
git config --global user.name "user_name"
git config --global user.email "email_id"
git clone https://github.com/SophieCXT/Configurable-Rule-Replacement-Policies-in-SDN-Implementation-in-Open-vSwitch.git
```

- install the ovs we implemented: installation of openvswitch-2.14.0 with the flow table cache replacement policies we implemented.
```
sudo ./upgrade_ovs_in_mininet.sh
```

Then, please go to [Attack Resilience of Cache Replacement Policies: Code and Data for Experiments in Mininet](https://github.com/SophieCXT/Code-and-Data-for-Experiments-in-Mininet) for further Experiment Procedure.
 
Friendly method/references:

To solve: merged with libjpeg 2.0, which removed support for autotools. Now cmake is the only option. 
>https://github.com/mozilla/mozjpeg/issues/314
 ```
# debugging
# line 81: aclocal-1.16: command not found
# make: *** [aclocal.m4] Error 127
cd openvswitch2.14.0
sudo apt-get -f install
sudo apt install libtool-bin automake texinfo
sudo apt-get install autotools-dev
autoreconf -f -i

make clean
cd ..
sudo ./u tab(shellfile.sh)
```
 
# Citation
**cite** contains a attack resilience analysis implementation for our [paper](https://nsrg.cse.psu.edu/files/2020/12/Tian21INFOCOM-Attack-Resilience-of-Cache-Policies.pdf).  If you find this code useful in your research, please consider citing:

    @INPROCEEDINGS{Xie21INFOCOM,
      author = { Tian Xie and Ting He and Patrick McDaniel and Namitha Nambiar},
      title = {Attack Resilience of Cache Replacement Policies},
      booktitle = {IEEE INFOCOM},
      year = {2021},
      month = {May}
    }

This code was tested on an Ubuntu 16.04 system using Mininet, openvswitch-2.14.0.
