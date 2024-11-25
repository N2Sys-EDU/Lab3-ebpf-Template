#include "../test_utils/common.h"

#define DST_IP 0x0300000a
#define SELF_IP 0x0400000a

#define PROXY_PORT 12345

SEC("xdp_ingress")
int xdp_ingress_func(struct xdp_md* ctx) {
    return XDP_PASS;
}

char _license[] SEC("license") = "GPL";
