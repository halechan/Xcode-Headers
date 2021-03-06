//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDESourceControlMergeController.h>

@class NSMutableSet;

@interface IDESourceControlInteractiveCommitController : IDESourceControlMergeController
{
    NSMutableSet *_submodesToNotify;
}

+ (BOOL)hasToggledDifferences:(id)arg1;
- (void).cxx_destruct;
- (void)startInteractiveCommit;
- (void)removeSubmodeToNotify:(id)arg1;
- (void)addSubmodeToNotify:(id)arg1;
- (void)_validateMergeData:(id)arg1;
- (void)revertChangesFromMergeData:(id)arg1 toItemAtFilePath:(id)arg2;
- (void)applyChangesFromMergeData:(id)arg1 toItemAtFilePath:(id)arg2;
- (void)generateMergeDataForFilePath:(id)arg1;

@end

