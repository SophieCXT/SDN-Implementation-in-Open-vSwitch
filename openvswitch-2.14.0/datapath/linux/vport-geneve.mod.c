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
	{ 0xef3c24c0, __VMLINUX_SYMBOL_STR(ovs_geneve_fill_metadata_dst) },
	{ 0x6534fdef, __VMLINUX_SYMBOL_STR(rpl_geneve_xmit) },
	{ 0x1df31c27, __VMLINUX_SYMBOL_STR(ovs_netdev_tunnel_destroy) },
	{ 0x222d8321, __VMLINUX_SYMBOL_STR(ovs_vport_ops_unregister) },
	{ 0x1051aaaa, __VMLINUX_SYMBOL_STR(__ovs_vport_ops_register) },
	{ 0xb37ed750, __VMLINUX_SYMBOL_STR(ovs_vport_free) },
	{ 0x72eed997, __VMLINUX_SYMBOL_STR(rpl_rtnl_delete_link) },
	{ 0xf3f7ae5c, __VMLINUX_SYMBOL_STR(ovs_netdev_link) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x89bb2745, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0x5808ed7c, __VMLINUX_SYMBOL_STR(rpl_geneve_dev_create_fb) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xfab4f1af, __VMLINUX_SYMBOL_STR(ovs_vport_alloc) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xeb532aab, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch";


MODULE_INFO(srcversion, "65D8D226BA02214DE6A7F79");
