//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface DVTShadowView : NSView
{
    BOOL _isLeftShadow;
}

@property BOOL isLeftShadow; // @synthesize isLeftShadow=_isLeftShadow;
- (BOOL)_isGrayScaleColor:(id)arg1;
- (id)_deriveLineColor:(id)arg1 shouldFullyDesaturate:(BOOL)arg2;
- (void)_draw;
- (void)updateLayer;
- (id)hitTest:(struct CGPoint)arg1;
- (void)_windowKeyStateDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

