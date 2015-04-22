// Copyright 2004-present Facebook. All Rights Reserved.
// ** AUTOGENERATED FILE. DO NOT HAND-EDIT **

#pragma once

#include <string>

namespace proxygen { 

enum class TraceFieldType {
    ErrorStage,
    Error,
    ProxygenError,
    HTTPStatus,
    DirectionError,
    CodecError,
    Uri,
    IsSecure,
    UsingProxy,
    StatusCode,
    Protocol,
    LocalAddr,
    LocalPort,
    ContentType,
    UsingSpdy,
    ReqHeaderSize,
    ReqBodySize,
    RspHeaderSize,
    RedirectLocation,
    NumRedirects,
    RedirectResponseCode,
    NumRetries,
    RspBodySize,
    RspIntvlAvg,
    RspIntvlStdDev,
    RspNumOnBody,
    ServerQuality,
    NewConnection,
    SessionManagerType,
    InFlightConns,
    CachedSessions,
    ConnsStarted,
    RequestsWaited,
    TotalRequestsWaited,
    TotalConnsStarted,
    ServerAddr,
    ServerPort,
    NewSession,
    NumWaiting,
    HostName,
    IpAddr,
    Port,
    CNameRedirects,
    RedirectTime,
    NumberResolvers,
    ResolversSerialized,
    RequestFamily,
    NumberAnswers,
    DNSCacheHit,
    DNSCacheStale,
    DNSCacheInflight,
    TLSReused,
    TLSCacheHit,
    CipherName,
    TLSVersion,
    TLSCachePersistence,
    CompressedSizeKey,
    UncompressedSizeKey,
    CompressionType,
    VerifiedSuccess,
    VerifiedChain,
    VerifiedParams,
    VerifiedTime,
    VerifiedServerAddress,
    VerifiedProxyAddress,
    VerifiedError,
    VerifiedReason,
    VerifiedHostname,
    ProxyHost,
    ProxyPort,
    ReadBytes,
    WriteBytes,
    SchedulerType,
    InitialPriority,
    SizeOfQueue,
    PreviousState,
    CurrentState,
    NetworkID,
    CachedFamily,
    SucceededFamily,
    NumConnAttempts,
    AttemptAddrs,
    AttemptAddrFamily,
    SucceededAddr,
    SucceededConnTime,
    RequestID,
    HumanReadableName,
};

extern const std::string& getTraceFieldTypeString(TraceFieldType);
extern TraceFieldType getTraceFieldTypeFromString(const std::string&);
}

