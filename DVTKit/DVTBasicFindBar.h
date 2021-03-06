//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTFindBar.h>

@interface DVTBasicFindBar : DVTFindBar
{
    long long _foundResultCount;
}

- (void)updateStatusInformingDelegate:(BOOL)arg1;
- (void)performFindHighlightingFirstResult:(BOOL)arg1 informDelegate:(BOOL)arg2;
- (void)findBarLostFocus;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (BOOL)supportsCaseInsensitiveMatch;
- (BOOL)supportsTextMatchStyle:(unsigned long long)arg1;
- (BOOL)supportsFindBarMode:(unsigned long long)arg1;
- (BOOL)supportsFindBarType:(unsigned long long)arg1;
@property(retain, nonatomic) id findObject;

@end

