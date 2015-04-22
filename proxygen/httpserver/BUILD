cc_library(
	name = "proxygenhttpserver",
	srcs = [
		'HTTPServer.cpp',
	        'HTTPServerAcceptor.cpp',
	        'RequestHandlerAdaptor.cpp',
	        'SignalHandler.cpp'
	],
	deps = [
		'//proxygen/lib:proxygenlib'
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
