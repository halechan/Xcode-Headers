//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSMutableAttributedString;

@interface DVTToolTipView : NSView
{
    NSMutableAttributedString *string;
    NSColor *backgroundColor;
    double maxWidth;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)setAttributedString:(id)arg1;
- (void)setMaxWidth:(double)arg1;
- (double)maxWidth;
- (id)initWithFrame:(struct CGRect)arg1;

@end

