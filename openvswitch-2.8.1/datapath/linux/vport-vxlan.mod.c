#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7377b0b2, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3e562189, __VMLINUX_SYMBOL_STR(ovs_vxlan_fill_metadata_dst) },
	{ 0xbf57fd35, __VMLINUX_SYMBOL_STR(rpl_vxlan_xmit) },
	{ 0x229d1a71, __VMLINUX_SYMBOL_STR(ovs_netdev_tunnel_destroy) },
	{ 0x1880e36, __VMLINUX_SYMBOL_STR(ovs_vport_ops_unregister) },
	{ 0x85465676, __VMLINUX_SYMBOL_STR(__ovs_vport_ops_register) },
	{ 0x6b232356, __VMLINUX_SYMBOL_STR(ovs_netdev_link) },
	{ 0xdf71316a, __VMLINUX_SYMBOL_STR(rpl_rtnl_delete_link) },
	{ 0xb53ea885, __VMLINUX_SYMBOL_STR(ovs_vport_free) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x89bb2745, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0x97f3e632, __VMLINUX_SYMBOL_STR(rpl_vxlan_dev_create) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x12e8b27a, __VMLINUX_SYMBOL_STR(ovs_vport_alloc) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xeb532aab, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch";


MODULE_INFO(srcversion, "38F3D6E5DD61453B72077F1");
