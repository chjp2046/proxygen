cc_library(
	name = "testtransport",
	srcs = [
		'TestAsyncTransport.cpp'
	],
	deps = [
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



cc_library(
	name = "testmain",
	srcs = [
		'TestMain.cpp'
	],
	deps = [
		'//thirdparty/gmock:gmockgtest'
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
