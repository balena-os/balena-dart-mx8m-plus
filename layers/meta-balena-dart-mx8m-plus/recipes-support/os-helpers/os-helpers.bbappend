do_install:append() {
    if ${@bb.utils.contains('MACHINE_FEATURES', 'raid', 'true', 'false', d)}; then
        bbwarn "MACHINE_FEATURES contains raid"
    else
       bbwarn "MACHINE_FEATURES does not contain raid"
    fi
}

do_install[nostamp] = "1"
