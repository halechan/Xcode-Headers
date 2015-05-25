//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDEDebugNavigableModel.h"

@class DBGProcess, DBGThread, DVTStackBacktrace, IDELaunchSession, NSArray, NSString;

@interface DBGQueue : NSObject <IDEDebugNavigableModel, DVTInvalidation>
{
    NSString *_type;
    BOOL _displayNameComputed;
    NSString *_displayName;
    DBGProcess *_parentProcess;
    NSString *_name;
    NSArray *_threads;
    NSArray *_pendingBlocksThreads;
    DBGThread *_recordedThread;
}

+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)keyPathsForValuesAffectingRecorded;
+ (BOOL)_queueNameBelongsToConcurrentQueues:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) DBGThread *recordedThread; // @synthesize recordedThread=_recordedThread;
@property(copy, nonatomic) NSArray *pendingBlocksThreads; // @synthesize pendingBlocksThreads=_pendingBlocksThreads;
@property(copy, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) DBGProcess *parentProcess; // @synthesize parentProcess=_parentProcess;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)invalidateOldPendingBlocksThreads:(id)arg1;
- (unsigned long long)numberOfPendingBlocks;
- (void)setPrimitiveThreads:(id)arg1;
@property(readonly, nonatomic, getter=isRecorded) BOOL recorded;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithParentProcess:(id)arg1 name:(id)arg2 type:(id)arg3 recordedThread:(id)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

