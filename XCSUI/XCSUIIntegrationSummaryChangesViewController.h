//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTViewController.h"

@class NSTextField, XCSIntegration;

@interface XCSUIIntegrationSummaryChangesViewController : DVTViewController
{
    XCSIntegration *_integration;
    NSTextField *_changesText;
    double _cachedRequiredHeight;
}

@property double cachedRequiredHeight; // @synthesize cachedRequiredHeight=_cachedRequiredHeight;
@property __weak NSTextField *changesText; // @synthesize changesText=_changesText;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
@property(readonly) double requiredHeight;
- (void)layoutChanges;
- (id)textForControlledChanges:(id)arg1;

@end
