#include "../test_utils/common.h"

SEC("xdp_ingress")
int xdp_ingress_func(struct xdp_md *skb) {
    return XDP_PASS;
}

char _license[] SEC("license") = "GPL";
