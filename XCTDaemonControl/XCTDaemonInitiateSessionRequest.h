//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTDaemonControl/XCTConfigurableDebugLogger-Protocol.h>
#import <XCTDaemonControl/XCTDaemonRequest-Protocol.h>

@class NSString, NSUUID;
@protocol XCTDebugLogDelegate;

@interface XCTDaemonInitiateSessionRequest : NSObject <XCTDaemonRequest, XCTConfigurableDebugLogger>
{
    id <XCTDebugLogDelegate> _logDelegate;
    NSUUID *_sessionIdentifier;
    CDUnknownBlockType _completion;
}

+ (id)currentProcessDisplayPath;
+ (id)clientProcessUniqueIdentifier;
@property(readonly) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property __weak id <XCTDebugLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
- (void).cxx_destruct;
- (void)handleConnectionFailure:(id)arg1;
- (void)sendToDaemonProxy:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

