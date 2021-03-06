SUMMARY = "Enigma2 plugin to manage your youtube account and watch videos"
DESCRIPTION = "Small plugin to manage your account, search and watch videos \
from youtube"
HOMEPAGE = "https://github.com/Taapat/enigma2-plugin-youtube"
SECTION = "multimedia"
LICENSE = "PD"
LIC_FILES_CHKSUM = "file://COPYING.GPLv2;md5=b234ee4d69f5fce4486a80fdaf4a4263"
SRC_URI = "git://github.com/Taapat/enigma2-plugin-youtube.git"
S = "${WORKDIR}/git"

inherit gitpkgv
SRCREV = "d5519e04dec715f2350da0900574610d6c679351"
PV = "1+git${SRCPV}"
PKGV = "1+git${GITPKGV}"

inherit allarch distutils-openplugins

RDEPENDS_${PN} = " \
	python-core \
	python-codecs \
	python-json \
	python-netclient \
	python-zlib \
	python-twisted-web \
	"

PACKAGES =+ " ${PN}-src"
RDEPENDS_{PN}-src = "${PN}"
FILES_${PN}-src = "${libdir}/enigma2/python/Plugins/Extensions/YouTube/*.py"
