#python gen_trace_event_constants.py --output_type=cpp --input_files=TraceEventType.txt,TraceFieldType.txt --output_scope=proxygen --header_path=proxygen/lib/utils --install_dir=. --fbcode_dir=.


cc_library(
	name = "utils",
	srcs = [
		'http_parser_cpp.cpp',
		'AsyncTimeoutSet.cpp',
		'Exception.cpp',
		'HTTPTime.cpp',
		'TraceEventContext.cpp',
		'ParseURL.cpp',
		'TraceEvent.cpp',
		'TraceEventType.cpp',
		'TraceFieldType.cpp',
		'Logging.cpp',
		'CryptUtil.cpp'
	],
	deps = [
		'//thirdparty/gflags:gflags',
		'//thirdparty/glog:glog',
		'//thirdparty/gmock:gmock',
		'//thirdparty/gtest:gtest',
		'//thirdparty/gperftools-2.0/src:profiler',
		'//thrift/lib/cpp:thrift',
		'//thrift/lib/cpp2:thriftcpp2',
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
