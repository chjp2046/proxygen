cc_binary(
	name = "HTTPServerTests",
	srcs = [
		'HTTPServerTest.cpp'
	],
	deps = [
		'//proxygen/httpserver:proxygenhttpserver',
		'//proxygen/lib/test:testmain'
	],
	extra_cppflags = [
		'-fno-strict-aliasing',
		'-std=gnu++0x',
		'-DLIBMC_FBTRACE_DISABLE',
		'-DHAVE_CONFIG_H',
		'-fPIC',
		'-DPIC'
	],
	warning = 'no'
)
