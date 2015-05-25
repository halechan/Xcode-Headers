//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLayoutView_ML.h"

@class NSImage, NSString;

@interface IBICMultipartImageRepView : DVTLayoutView_ML
{
    struct {
        struct CGRect imageRect;
        struct CGRect titleRect;
        struct CGRect titleHighlightRect;
        struct CGRect imageHighlightRect;
    } _previousLayout;
    double _imageScale;
    NSImage *_image;
    double _previousScale;
    unsigned long long _titleHighlightCornerMask;
    BOOL _showsDropIndicator;
    BOOL _showsSelection;
    BOOL _showsContextFocus;
    BOOL _drawsWithKeyAppearance;
    NSString *_title;
    double _maximumTitleWidth;
}

+ (double)scaleForDrawingImageForSize:(struct CGSize)arg1 intoViewSize:(struct CGSize)arg2;
@property(nonatomic) BOOL drawsWithKeyAppearance; // @synthesize drawsWithKeyAppearance=_drawsWithKeyAppearance;
@property(nonatomic) double maximumTitleWidth; // @synthesize maximumTitleWidth=_maximumTitleWidth;
@property(nonatomic) BOOL showsContextFocus; // @synthesize showsContextFocus=_showsContextFocus;
@property(nonatomic) BOOL showsSelection; // @synthesize showsSelection=_showsSelection;
@property(nonatomic) BOOL showsDropIndicator; // @synthesize showsDropIndicator=_showsDropIndicator;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)titleHighlightImage;
- (id)imageHighlightImage;
- (id)effectiveTitleColor;
- (id)effectiveHighlightColor;
- (double)scaleForImage;
- (void)layoutTopDown;
- (id)attributedTitle;
- (id)titleAttributes;
- (id)titleParagraphStyle;
- (id)font;
- (BOOL)isFlipped;
@property(readonly) struct CGRect imageFrame;
- (void)setTitleHighlightCornerMask:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

