cc_library(
	name = "proxygenssl",
	srcs = [
	],
	deps = [
		'//thirdparty/gflags:gflags',
		'//thirdparty/glog:glog',
		'//thirdparty/gmock:gmock',
		'//thirdparty/gtest:gtest',
		'//thirdparty/gperftools-2.0/src:profiler',
        '//folly:folly',
		'#rt',
		'#cap'
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
