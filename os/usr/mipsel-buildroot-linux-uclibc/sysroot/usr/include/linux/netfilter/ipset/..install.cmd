cmd_/home/steward/Github/buildroot/output/host/usr/mipsel-buildroot-linux-uclibc/sysroot/usr/include/linux/netfilter/ipset/.install := /bin/bash scripts/headers_install.sh /home/steward/Github/buildroot/output/host/usr/mipsel-buildroot-linux-uclibc/sysroot/usr/include/linux/netfilter/ipset ./include/uapi/linux/netfilter/ipset ip_set.h ip_set_bitmap.h ip_set_hash.h ip_set_list.h; /bin/bash scripts/headers_install.sh /home/steward/Github/buildroot/output/host/usr/mipsel-buildroot-linux-uclibc/sysroot/usr/include/linux/netfilter/ipset ./include/linux/netfilter/ipset ; /bin/bash scripts/headers_install.sh /home/steward/Github/buildroot/output/host/usr/mipsel-buildroot-linux-uclibc/sysroot/usr/include/linux/netfilter/ipset ./include/generated/uapi/linux/netfilter/ipset ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/steward/Github/buildroot/output/host/usr/mipsel-buildroot-linux-uclibc/sysroot/usr/include/linux/netfilter/ipset/$$F; done; touch /home/steward/Github/buildroot/output/host/usr/mipsel-buildroot-linux-uclibc/sysroot/usr/include/linux/netfilter/ipset/.install
