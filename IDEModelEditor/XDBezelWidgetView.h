//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor;

@interface XDBezelWidgetView : NSView
{
    NSView *_contentView;
    struct CGSize _contentViewMargins;
    double _cornerRadius;
    NSColor *_backgroundColor;
    long long _trackingRectTag;
    struct _XDBezelWidgetViewFlags _bwvFlags;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)resetCursorRects;
- (BOOL)isOpaque;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void)sizeToFit;
- (void)setFrameFromContentFrame:(struct CGRect)arg1;
- (struct CGSize)contentViewMargins;
- (void)setContentViewMargins:(struct CGSize)arg1;
- (id)contentView;
- (void)replaceSubview:(id)arg1 with:(id)arg2;
- (void)addSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

