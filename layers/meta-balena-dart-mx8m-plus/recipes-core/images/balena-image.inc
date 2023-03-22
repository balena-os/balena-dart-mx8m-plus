# remove unneeded package installed by the Variscite BSP (since we use the kernel image with the initramfs embedded instead) which also makes the balena-image target unbuildable
IMAGE_INSTALL:remove = " kernel-image"

# increase the rootfs partition size
IMAGE_ROOTFS_SIZE="430080"

DEPENDS += "imx-boot"

# Flash signed bootloader to raw image
IMAGE_CMD:balenaos-img:append () {
    dd if=${DEPLOY_DIR_IMAGE}/imx-boot-${MACHINE}-sd.bin-flash_evk of=${BALENA_RAW_IMG} conv=notrunc seek=32 bs=1K
}

# add the following packages to rootfs in order to get bt and wifi work
IMAGE_INSTALL:append = " \
	bcm43xx-utils \
	brcm-patchram-plus \
	linux-firmware-bcm4339 \
	linux-firmware-bcm43430 \
	linux-firmware-imx-sdma-imx7d \
"

# the BSP sets this variable in the machine conf so let's unset it since this makes our build fail
unset ROOTFS_SIZE
