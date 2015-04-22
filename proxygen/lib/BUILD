cc_library(
	name = "proxygenlib",
	srcs = [
	],
	deps = [
		'//proxygen/lib/utils:utils',
		'//proxygen/lib/ssl:proxygenssl',
		'//proxygen/lib/services:proxygenservices',
		'//proxygen/lib/http:proxygenhttp'
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
