#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x4761e8a3, "module_layout" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcc232028, "tty_set_termios" },
	{ 0x933740ca, "cancel_work_sync" },
	{ 0x8949858b, "schedule_work" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0xf42dcb32, "skb_trim" },
	{ 0xd65f41fe, "hci_recv_frame" },
	{ 0x9d669763, "memcpy" },
	{ 0x71c90087, "memcmp" },
	{ 0xd8f795ca, "del_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x9a6221c5, "mod_timer" },
	{ 0x36a15265, "skb_queue_head" },
	{ 0x215ebd78, "bitrev16" },
	{ 0xda5c96f9, "__alloc_skb" },
	{ 0xe7084ce7, "skb_put" },
	{ 0x5b1b65c7, "skb_queue_purge" },
	{ 0x5bd37ec, "hci_recv_stream_fragment" },
	{ 0x3fddd533, "skb_queue_tail" },
	{ 0x59d1dae4, "skb_push" },
	{ 0x91098e39, "skb_dequeue" },
	{ 0x9214ed8a, "param_get_bool" },
	{ 0x9f2d613e, "param_set_bool" },
	{ 0xe649f8b3, "skb_pull" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0x3bed02e, "hci_unregister_dev" },
	{ 0xc8c65b44, "tty_driver_flush_buffer" },
	{ 0x23d74109, "tty_ldisc_flush" },
	{ 0x4c11f58f, "kfree_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x934244d0, "n_tty_ioctl_helper" },
	{ 0xe35b81db, "hci_free_dev" },
	{ 0x4768309c, "hci_register_dev" },
	{ 0xecfbedc1, "hci_alloc_dev" },
	{ 0x73262104, "tty_unthrottle" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x75504950, "tty_register_ldisc" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x4b599289, "bt_printk" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,bluetooth";


MODULE_INFO(srcversion, "1D531AE3B7910738BA1DB30");
