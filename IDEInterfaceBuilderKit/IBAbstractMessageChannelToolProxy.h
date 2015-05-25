//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBAbstractPlatformTool.h"

@class DVTStackBacktrace, DVTTask, IBMessageSendChannel, IBTargetRuntime, NSObject<OS_dispatch_queue>, NSString;

@interface IBAbstractMessageChannelToolProxy : NSObject <IBAbstractPlatformTool>
{
    IBMessageSendChannel *_channel;
    DVTStackBacktrace *_previousCommandBacktrace;
    SEL _previousCommandSelector;
    IBTargetRuntime *_targetRuntime;
    BOOL _shouldRaiseOnFailures;
    DVTTask *_task;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)waitForMostRecentCrashLogForToolNamed:(id)arg1;
+ (id)mostRecentCrashLogForToolNamed:(id)arg1 withinDurationThreshhold:(double)arg2 ofCrashDate:(id)arg3;
+ (id)launchAndConnectToTask:(id)arg1 targetRuntime:(id)arg2 queue:(id)arg3 shouldRaiseOnFailures:(BOOL)arg4 error:(id *)arg5;
@property(nonatomic) BOOL shouldRaiseOnFailures; // @synthesize shouldRaiseOnFailures=_shouldRaiseOnFailures;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) DVTTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)synchronouslyDispatchRequestsDuring:(CDUnknownBlockType)arg1;
- (void)shutdownAndForceToolProxyKill;
- (void)shutdown;
- (id)protocolCapabilities;
- (id)requestContext;
- (void)recordLastCommandBacktrace:(id)arg1 cmd:(SEL)arg2;
- (id)effectiveMarshallingResultGivenResult:(id)arg1 andPossibleError:(id)arg2;
- (id)_errorByAddingAdditionalCrashInformationToError:(id)arg1 orRaiseIfNeededOnFailure:(BOOL)arg2 shouldRaiseOnFailures:(BOOL)arg3 waitForCrashLog:(BOOL)arg4;
- (id)errorByAddingAdditionalCrashInformationToError:(id)arg1 orRaiseIfNeededOnFailure:(BOOL)arg2;
- (id)_previousCommandsBacktrace;
- (id)channel;
- (id)initWithWriteDescriptor:(int)arg1 task:(id)arg2 targetRuntime:(id)arg3 queue:(id)arg4 readDescriptor:(int)arg5 shouldRaiseOnFailures:(BOOL)arg6 error:(id *)arg7;
- (id)initWithSocket:(int)arg1 task:(id)arg2 targetRuntime:(id)arg3 queue:(id)arg4 shouldRaiseOnFailures:(BOOL)arg5 error:(id *)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

