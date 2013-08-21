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
	{ 0xe1d64ee5, "eth_change_mtu" },
	{ 0x2b7b6708, "eth_validate_addr" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3fddd533, "skb_queue_tail" },
	{ 0xdc3ee484, "ether_setup" },
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
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x7dceceac, "capable" },
	{ 0x8dfbbc61, "sock_init_data" },
	{ 0x7285117, "sk_alloc" },
	{ 0xfed9327c, "bt_sock_register" },
	{ 0x40e0b8e9, "proto_register" },
	{ 0x4b7c3b2a, "proto_unregister" },
	{ 0xf19294db, "bt_sock_unregister" },
	{ 0x9214ed8a, "param_get_bool" },
	{ 0x9f2d613e, "param_set_bool" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xd9cd390a, "__module_put_and_exit" },
	{ 0xbf503b6d, "fput" },
	{ 0xb9e52429, "__wake_up" },
	{ 0xa8cde9a7, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x3ebf2f8f, "__netif_schedule" },
	{ 0x91098e39, "skb_dequeue" },
	{ 0x93f412a3, "netif_rx_ni" },
	{ 0xe0b36ebd, "eth_type_trans" },
	{ 0x4c11f58f, "kfree_skb" },
	{ 0xc27487dd, "__bug" },
	{ 0xda5c96f9, "__alloc_skb" },
	{ 0xe649f8b3, "skb_pull" },
	{ 0x6abe7cd7, "__pskb_pull_tail" },
	{ 0xfe634f58, "add_wait_queue" },
	{ 0xa607431e, "set_user_nice" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x2b2556ac, "kernel_sendmsg" },
	{ 0x10f8cd0a, "free_netdev" },
	{ 0xadb3d81e, "up_write" },
	{ 0xcf6b8529, "unregister_netdev" },
	{ 0x18b0b772, "kthread_create" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x17f983b2, "register_netdev" },
	{ 0x1fc8818c, "module_put" },
	{ 0x71c90087, "memcmp" },
	{ 0x60d2ec26, "hci_get_route" },
	{ 0x313341a3, "_set_bit_le" },
	{ 0xb7b61546, "crc32_be" },
	{ 0xb1b22911, "down_write" },
	{ 0xd6c5f5a9, "alloc_netdev_mq" },
	{ 0xcc1fb551, "baswap" },
	{ 0xfb77f877, "wake_up_process" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xab455eb0, "up_read" },
	{ 0xc6d533e1, "down_read" },
	{ 0xe914e41e, "strcpy" },
	{ 0x9d669763, "memcpy" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x4b599289, "bt_printk" },
	{ 0x61651be, "strcat" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x60a13e90, "rcu_barrier" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "DAECA564C7954AF19ABFCB4");
