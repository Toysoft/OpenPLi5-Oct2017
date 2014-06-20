DESCRIPTION = "Utils for blindscan"
SECTION = "base"
PRIORITY = "optional"
LICENSE = "CLOSED"

PACKAGES = "vuplus-blindscan-dvbs-utils-${MACHINE} vuplus-blindscan-dvbc-utils-${MACHINE}"

PROVIDES += "virtual/blindscan-dvbs virtual/blindscan-dvbc"
RPROVIDES_vuplus-blindscan-dvbs-utils-${MACHINE} += "virtual/blindscan-dvbs"
RPROVIDES_vuplus-blindscan-dvbc-utils-${MACHINE} += "virtual/blindscan-dvbc"

DOWNLOADMACHINE ?= "${MACHINE}"
SRC_URI = "http://archive.vuplus.com/download/utils/vuplus-blindscan-utils-${DOWNLOADMACHINE}-${PV}.tar.bz2"

PV = "3.2"
PR = "r1"

S = "${WORKDIR}/blindscan-utils"

do_install() {
	install -d "${D}/${bindir}"
	install -m 0755 "${S}/tda1002x" "${D}/${bindir}"
}

do_install_vuultimo() {
	install -d "${D}/${bindir}"
	install -m 0755 "${S}/tda1002x" "${D}/${bindir}"
	install -m 0755 "${S}/vuplus_blindscan" "${D}/${bindir}"
	install -m 0755 "${S}/vuplus_6211_blindscan" "${D}/${bindir}"
	install -m 0755 "${S}/vuplus_6222_blindscan" "${D}/${bindir}"
}

do_install_vuuno() {
	install -d "${D}/${bindir}"
	install -m 0755 "${S}/tda1002x" "${D}/${bindir}"
	install -m 0755 "${S}/vuplus_blindscan" "${D}/${bindir}"
	install -m 0755 "${S}/vuplus_6211_blindscan" "${D}/${bindir}"
	install -m 0755 "${S}/vuplus_6222_blindscan" "${D}/${bindir}"
}

do_install_vuduo2() {
	install -d "${D}/${bindir}"
	install -m 0755 "${S}/tda1002x" "${D}/${bindir}"
	install -m 0755 "${S}/vuplus_blindscan" "${D}/${bindir}"
	install -m 0755 "${S}/vuplus_6211_blindscan" "${D}/${bindir}"
	install -m 0755 "${S}/vuplus_6222_blindscan" "${D}/${bindir}"
}

FILES_vuplus-blindscan-dvbs-utils-${MACHINE} = "\
	${bindir}/vuplus_blindscan \
	${bindir}/vuplus_6211_blindscan \
	${bindir}/vuplus_6222_blindscan \
	"
FILES_vuplus-blindscan-dvbc-utils-${MACHINE} = "${bindir}/tda1002x"

INHIBIT_PACKAGE_STRIP = "1"

PACKAGE_ARCH := "${MACHINE_ARCH}"