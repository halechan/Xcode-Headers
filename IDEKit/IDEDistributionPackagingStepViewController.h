//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class DVTDelayedInvocation, NSString;

@interface IDEDistributionPackagingStepViewController : IDEDistributionStepViewController
{
    NSString *_currentMessage;
    DVTDelayedInvocation *_delayedMessageUpdate;
    BOOL _cancelled;
}

+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(int)arg2;
- (void).cxx_destruct;
- (void)viewDidInstall;
- (BOOL)canGoPrevious;
- (BOOL)canGoNext;
- (id)title;
- (id)nibName;
- (void)primitiveInvalidate;

@end
