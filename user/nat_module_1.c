#include "../test_utils/common.h"

SEC("tc_egress")
int tc_egress_func(struct __sk_buff *skb) {
    return TC_ACT_OK;
}

char _license[] SEC("license") = "GPL";