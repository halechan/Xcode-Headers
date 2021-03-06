//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTButtonTextFieldCell.h>

@class NSImage;

@interface DVTWarningTextFieldCell : DVTButtonTextFieldCell
{
    BOOL _showingWarning;
}

- (void)setStringValue:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)_updateShowingWarning;
@property(readonly) BOOL shouldShowWarning;
@property(getter=isShowingWarning) BOOL showingWarning;
@property(readonly, copy) NSImage *emptyIconImage;
@property(readonly, copy) NSImage *warningIconImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initTextCell:(id)arg1;

@end

