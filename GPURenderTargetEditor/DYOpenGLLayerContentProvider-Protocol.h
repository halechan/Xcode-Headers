//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYRenderingAttributes;

@protocol DYOpenGLLayerContentProvider <NSObject>
- (DYRenderingAttributes *)renderingAttributes;
- (BOOL)flipped;
- (BOOL)wantsDepth;
- (struct CGSize)imageSize;
- (id <DYResource>)resource;
- (id <DYResource>)overlayResource;
@end

