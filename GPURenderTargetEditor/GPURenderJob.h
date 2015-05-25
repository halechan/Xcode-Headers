//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYRenderingAttributes, GPUTraceModelFactory, NSString;

@interface GPURenderJob : NSObject
{
    id <DYResource> _resource;
    id <DYResource> _overlayResource;
    GPUTraceModelFactory *_modelFactory;
    DYRenderingAttributes *_renderingAttributes;
    NSString *_displayElementName;
}

@property(readonly, nonatomic) NSString *displayElementName; // @synthesize displayElementName=_displayElementName;
@property(nonatomic) __weak DYRenderingAttributes *renderingAttributes; // @synthesize renderingAttributes=_renderingAttributes;
@property(readonly, nonatomic) __weak GPUTraceModelFactory *modelFactory; // @synthesize modelFactory=_modelFactory;
@property(readonly, nonatomic) __weak id <DYResource> overlayResource; // @synthesize overlayResource=_overlayResource;
@property(nonatomic) __weak id <DYResource> resource; // @synthesize resource=_resource;
- (void).cxx_destruct;
- (BOOL)showOverlay;
- (BOOL)isColor;
- (BOOL)flipped;
- (struct CGSize)imageSize;
- (id)initWithResource:(id)arg1 modelFactory:(id)arg2 renderingAttributes:(id)arg3 overlayResource:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) BOOL isDepthDisplayElement; // @dynamic isDepthDisplayElement;
@property(readonly, nonatomic) BOOL isStencilDisplayElement; // @dynamic isStencilDisplayElement;

@end

