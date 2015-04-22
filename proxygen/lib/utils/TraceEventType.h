// Copyright 2004-present Facebook. All Rights Reserved.
// ** AUTOGENERATED FILE. DO NOT HAND-EDIT **

#pragma once

#include <string>

namespace proxygen { 

enum class TraceEventType {
    RequestExchange,
    ResponseBodyRead,
    PreConnect,
    PostConnect,
    DnsResolution,
    DnsCache,
    TcpConnect,
    TlsSetup,
    TotalConnect,
    Decompression,
    CertVerification,
    ProxyConnect,
    ReadSocket,
    WriteSocket,
    Scheduling,
    NetworkChange,
    HappyEyeballs,
    MultiConnector,
    SingleConnector,
    FBLigerProtocol,
};

extern const std::string& getTraceEventTypeString(TraceEventType);
extern TraceEventType getTraceEventTypeFromString(const std::string&);
}

