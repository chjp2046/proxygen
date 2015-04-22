cc_binary(
	name = "echo_server",
	srcs = [
		'EchoHandler.cpp',
	        'EchoServer.cpp',
	],
	deps = [
		'//proxygen/httpserver:proxygenhttpserver'
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
