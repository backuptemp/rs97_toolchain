cmd_/home/steward/Github/buildroot/output/host/usr/mipsel-buildroot-linux-uclibc/sysroot/usr/include/sound/.install := /bin/bash scripts/headers_install.sh /home/steward/Github/buildroot/output/host/usr/mipsel-buildroot-linux-uclibc/sysroot/usr/include/sound ./include/uapi/sound asequencer.h asoc.h asound.h asound_fm.h compress_offload.h compress_params.h emu10k1.h firewire.h hdsp.h hdspm.h sb16_csp.h sfnt_info.h snd_sst_tokens.h tlv.h usb_stream.h; /bin/bash scripts/headers_install.sh /home/steward/Github/buildroot/output/host/usr/mipsel-buildroot-linux-uclibc/sysroot/usr/include/sound ./include/sound ; /bin/bash scripts/headers_install.sh /home/steward/Github/buildroot/output/host/usr/mipsel-buildroot-linux-uclibc/sysroot/usr/include/sound ./include/generated/uapi/sound ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/steward/Github/buildroot/output/host/usr/mipsel-buildroot-linux-uclibc/sysroot/usr/include/sound/$$F; done; touch /home/steward/Github/buildroot/output/host/usr/mipsel-buildroot-linux-uclibc/sysroot/usr/include/sound/.install
