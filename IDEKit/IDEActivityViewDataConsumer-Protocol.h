//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEActivityReport, IDEActivityStatusCategory, IDEActivityViewDataSource, NSString;

@protocol IDEActivityViewDataConsumer <NSObject>
- (void)activityViewDataSource:(IDEActivityViewDataSource *)arg1 countDidChangeForBotStatusCategory:(IDEActivityStatusCategory *)arg2;
- (void)activityViewDataSource:(IDEActivityViewDataSource *)arg1 issueCountDidChangeForIssueCategory:(IDEActivityStatusCategory *)arg2;
- (void)activityViewDataSource:(IDEActivityViewDataSource *)arg1 workspaceRepresentingTypeStringDidChangeTo:(NSString *)arg2;
- (void)activityReportManagerDidInvalidateForActivityViewDataSource:(IDEActivityViewDataSource *)arg1;
- (void)activityViewDataSource:(IDEActivityViewDataSource *)arg1 activityReportDidComplete:(IDEActivityReport *)arg2;
- (void)activityViewDataSource:(IDEActivityViewDataSource *)arg1 displayDelayTimeWasMetForActivityReport:(IDEActivityReport *)arg2;
- (void)activityViewDataSource:(IDEActivityViewDataSource *)arg1 minimumDisplayTimeWasMetForActivityReport:(IDEActivityReport *)arg2;
- (void)activityReportListDidChangeForActivityViewDataSource:(IDEActivityViewDataSource *)arg1;
@end

