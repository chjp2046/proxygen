cc_library(
	name = "proxygenservices",
	srcs = [
		'RequestWorker.cpp',
	        'Service.cpp',
	        'WorkerThread.cpp'
	],
	deps = [
		'//proxygen/lib/ssl:proxygenssl'
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
