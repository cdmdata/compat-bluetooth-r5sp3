#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x4761e8a3, "module_layout" },
	{ 0x2759216b, "default_llseek" },
	{ 0xa1a79b6d, "debugfs_create_file" },
	{ 0x887c2815, "debugfs_create_dir" },
	{ 0x7a2a837d, "strict_strtol" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xcf82ea3, "debugfs_remove" },
	{ 0x4768309c, "hci_register_dev" },
	{ 0xecfbedc1, "hci_alloc_dev" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0x5f754e5a, "memset" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x36a15265, "skb_queue_head" },
	{ 0xe7084ce7, "skb_put" },
	{ 0xda5c96f9, "__alloc_skb" },
	{ 0x3fddd533, "skb_queue_tail" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x59d1dae4, "skb_push" },
	{ 0x7b0e6ccf, "skb_realloc_headroom" },
	{ 0x91098e39, "skb_dequeue" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0xa8cde9a7, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0xfe634f58, "add_wait_queue" },
	{ 0x4c11f58f, "kfree_skb" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0xfb77f877, "wake_up_process" },
	{ 0x18b0b772, "kthread_create" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0x4b599289, "bt_printk" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0xe35b81db, "hci_free_dev" },
	{ 0x3bed02e, "hci_unregister_dev" },
	{ 0x2cb6663f, "kthread_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x5b1b65c7, "skb_queue_purge" },
	{ 0xb9e52429, "__wake_up" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "201B8F7507F72940245D4EB");
