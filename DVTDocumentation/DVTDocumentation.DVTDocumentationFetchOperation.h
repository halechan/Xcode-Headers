//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTDocumentation/DVTCancellable-Protocol.h>

@interface DVTDocumentation.DVTDocumentationFetchOperation : NSObject <DVTCancellable>
{
    // Error parsing type: , name: _taskList
    // Error parsing type: , name: _manager
    // Error parsing type: , name: replyOnMainQueue
    // Error parsing type: , name: completionBlock
    // Error parsing type: , name: qualityOfService
    // Error parsing type: , name: language
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)performAsyncWithOperation:(id)arg1;
- (void)_fetchTaskCompletedWithTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startWithPrependedTasks:(id)arg1 appendedTasks:(id)arg2 manager:(id)arg3;
- (void)withManagerWithBlock:(CDUnknownBlockType)arg1;
- (void)cancel;
- (BOOL)isCancelled;
- (id)initWithManager:(id)arg1 language:(int)arg2 qualityOfService:(long long)arg3 replyOnMainQueue:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
@property(nonatomic, readonly) int language; // @synthesize language;
@property(nonatomic, readonly) long long qualityOfService; // @synthesize qualityOfService;
@property(nonatomic, readonly) CDUnknownBlockType completionBlock; // @synthesize completionBlock;
@property(nonatomic, readonly) BOOL replyOnMainQueue; // @synthesize replyOnMainQueue;

// Remaining properties
@property(nonatomic, readonly) BOOL cancelled;

@end

