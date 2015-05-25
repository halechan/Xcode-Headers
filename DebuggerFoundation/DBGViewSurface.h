//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DebuggerFoundation/DBGViewObject.h>

@class DBGLayoutConstraintSet, DBGViewLayer, DBGViewWindow, NSImage, NSSet;

@interface DBGViewSurface : DBGViewObject
{
    DBGViewWindow *_window;
    BOOL _shouldConsiderInteresting;
    BOOL _hasCalculatedShouldConsiderInteresting;
    NSSet *_constraintAddressesAffectingViewObject;
    DBGLayoutConstraintSet *_constraintsAffectingViewObject;
    DBGLayoutConstraintSet *_constraintsReferencingViewObject;
    BOOL _flipped;
    BOOL _masksToBounds;
    DBGViewLayer *_layer;
    NSImage *_snapshot;
    double _contentsScale;
    struct CGPoint _contentOffset;
    struct CGPoint _anchorPoint;
    struct CGPoint _position;
    struct CGRect _alignmentFrame;
    struct CGRect _bounds;
    struct CATransform3D _transform;
    struct CATransform3D _sublayerTransform;
}

+ (id)_childViewSurfacesFromPlist:(id)arg1 forViewDescriber:(id)arg2;
@property double contentsScale; // @synthesize contentsScale=_contentsScale;
@property struct CGRect bounds; // @synthesize bounds=_bounds;
@property struct CGRect alignmentFrame; // @synthesize alignmentFrame=_alignmentFrame;
- (id)constraintAddressesAffectingViewObject;
@property(readonly) BOOL masksToBounds; // @synthesize masksToBounds=_masksToBounds;
@property struct CGPoint position; // @synthesize position=_position;
@property struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property struct CATransform3D sublayerTransform; // @synthesize sublayerTransform=_sublayerTransform;
@property struct CATransform3D transform; // @synthesize transform=_transform;
@property struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property BOOL flipped; // @synthesize flipped=_flipped;
@property(retain) NSImage *snapshot; // @synthesize snapshot=_snapshot;
@property(retain) DBGViewLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (id)_affectingConstraintAddresses:(id)arg1;
- (id)description;
- (void)primitiveInvalidate;
@property(readonly) DBGLayoutConstraintSet *constraintsReferencingViewObject;
@property(readonly) DBGLayoutConstraintSet *constraintsAffectingViewObject;
- (BOOL)shouldConsiderInteresting;
- (void)_recursiveViewAddressesToViewSurfaces:(id)arg1;
- (id)recursiveViewAddressesToViewSurfaces;
- (id)parentViewSurface;
@property(readonly) DBGViewWindow *window;
- (id)initWithViewDescriber:(id)arg1 dictionary:(id)arg2;

@end

