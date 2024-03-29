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
	{ 0xa4a2c0dd, "sock_no_mmap" },
	{ 0x141b068e, "sock_no_recvmsg" },
	{ 0xd80b8535, "sock_no_sendmsg" },
	{ 0xc616ceec, "sock_no_getsockopt" },
	{ 0x574c9243, "sock_no_setsockopt" },
	{ 0x3c49a28c, "sock_no_shutdown" },
	{ 0x76e7e196, "sock_no_listen" },
	{ 0xd7692e6a, "sock_no_poll" },
	{ 0xaeed94d6, "sock_no_getname" },
	{ 0x6cc8464b, "sock_no_accept" },
	{ 0x928642db, "sock_no_socketpair" },
	{ 0x599fb113, "sock_no_connect" },
	{ 0x965e1374, "sock_no_bind" },
	{ 0x82bb1692, "sk_free" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0xa391d85d, "sockfd_lookup" },
	{ 0x7dceceac, "capable" },
	{ 0x8dfbbc61, "sock_init_data" },
	{ 0x7285117, "sk_alloc" },
	{ 0xfed9327c, "bt_sock_register" },
	{ 0x40e0b8e9, "proto_register" },
	{ 0x4b7c3b2a, "proto_unregister" },
	{ 0xf19294db, "bt_sock_unregister" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xbf503b6d, "fput" },
	{ 0xa8cde9a7, "remove_wait_queue" },
	{ 0x36a15265, "skb_queue_head" },
	{ 0x4c11f58f, "kfree_skb" },
	{ 0x91098e39, "skb_dequeue" },
	{ 0x9f178380, "hid_input_report" },
	{ 0xe649f8b3, "skb_pull" },
	{ 0x6abe7cd7, "__pskb_pull_tail" },
	{ 0xfe634f58, "add_wait_queue" },
	{ 0xa607431e, "set_user_nice" },
	{ 0x2b2556ac, "kernel_sendmsg" },
	{ 0x4dec6038, "memscan" },
	{ 0xb7f5454, "input_event" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0xcb2b0513, "hid_destroy_device" },
	{ 0x840924d, "input_unregister_device" },
	{ 0xd8f795ca, "del_timer" },
	{ 0xadb3d81e, "up_write" },
	{ 0x1a64c2c0, "hid_add_device" },
	{ 0x1000e51, "schedule" },
	{ 0x18b0b772, "kthread_create" },
	{ 0xbc4f023a, "hci_conn_hold_device" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xb06ee018, "input_free_device" },
	{ 0x3ba06313, "input_register_device" },
	{ 0x313341a3, "_set_bit_le" },
	{ 0xaaa0cde1, "dev_set_drvdata" },
	{ 0x746b523e, "input_allocate_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xc2066af0, "batostr" },
	{ 0xfa7fba71, "hid_allocate_device" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0xb1b22911, "down_write" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0xe9c68501, "hci_conn_put_device" },
	{ 0x7d11c268, "jiffies" },
	{ 0x9a6221c5, "mod_timer" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0x5f754e5a, "memset" },
	{ 0x48a0f939, "mutex_lock_interruptible" },
	{ 0x1fc8818c, "module_put" },
	{ 0x60d2ec26, "hci_get_route" },
	{ 0x8aa9298b, "hid_output_report" },
	{ 0xac487e08, "dev_get_drvdata" },
	{ 0xa6d79eaf, "hid_parse_report" },
	{ 0xb9e52429, "__wake_up" },
	{ 0x3fddd533, "skb_queue_tail" },
	{ 0x9d669763, "memcpy" },
	{ 0xe7084ce7, "skb_put" },
	{ 0xda5c96f9, "__alloc_skb" },
	{ 0xfb77f877, "wake_up_process" },
	{ 0x5b1b65c7, "skb_queue_purge" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xab455eb0, "up_read" },
	{ 0xc6d533e1, "down_read" },
	{ 0x328a05f1, "strncpy" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x71c90087, "memcmp" },
	{ 0x858b6007, "__hid_register_driver" },
	{ 0x4b599289, "bt_printk" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xbe21c8b9, "hid_unregister_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "B184CC7DC4AF004BD2F4185");
