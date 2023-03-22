FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

inherit resin-u-boot

SRC_URI:append = " \
    file://0001-Revert-env-add-ENV_ERASE_PTR-macro.patch \
    file://0002-integrate-with-balenaOS.patch \
"
