//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindAbstractQuery.h>

@class IDEBatchFindQueryProgressNotifier, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface IDEBatchFindCallHierarchyQuery : IDEBatchFindAbstractQuery
{
    NSObject<OS_dispatch_queue> *_queue;
    IDEBatchFindQueryProgressNotifier *_progressNotifier;
    NSMapTable *_faultedChildrenByParent;
}

+ (BOOL)isCumbersomeToInitiateManually;
+ (id)queryTermPlaceholderText;
+ (id)displayName;
+ (BOOL)supportsCaseMatching;
+ (BOOL)supportsAnchorning;
- (void).cxx_destruct;
- (void)execute;
- (id)customContextMenuID;
- (BOOL)requiresEditorDocumentsToSaveBeforeSearching;
- (void)userIsAttemptingToViewFaultedChildrenOfItem:(id)arg1;
- (void)faultChildrenForResult:(id)arg1 prefetchDepth:(long long)arg2;
- (BOOL)lazilyFaultsChildren;
- (id)makeRootResult;
- (id)initWithSpecification:(id)arg1 initialNumberOfLinesCalculator:(CDUnknownBlockType)arg2 initialLineWrappingParameters:(id)arg3 workspace:(id)arg4 andDelegate:(id)arg5 error:(id *)arg6;

@end

