//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSOpenGLView.h>

@interface NSOpenGLView (IBOpenGLViewIntegration)
+ (id)keyPathsForValuesAffectingIbArchivedWantsBestResolutionOpenGLSurface;
+ (id)keyPathsForValuesAffectingIbArchivedAllowOffline;
+ (id)keyPathsForValuesAffectingIbArchivedUseRecovery;
+ (id)keyPathsForValuesAffectingIbArchivedRendererType;
+ (id)keyPathsForValuesAffectingIbArchivedAntiAliasingType;
+ (id)keyPathsForValuesAffectingIbArchivedSamplingRate;
+ (id)keyPathsForValuesAffectingIbArchivedUseStereoPixels;
+ (id)keyPathsForValuesAffectingIbArchivedUseDoubleBufferingEnabled;
+ (id)keyPathsForValuesAffectingIbArchivedUseAuxiliaryDepthBufferStencil;
+ (id)keyPathsForValuesAffectingIbArchivedNumberOfAuxiliaryBuffers;
+ (id)keyPathsForValuesAffectingIbArchivedAccumSize;
+ (id)keyPathsForValuesAffectingIbArchivedStencilSize;
+ (id)keyPathsForValuesAffectingIbArchivedDepthSize;
+ (id)keyPathsForValuesAffectingIbArchivedColorSize;
+ (id)keyPathsForValuesAffectingIbArchivedPolicy;
+ (id)_ibPixelFormatAttributesKeyPathSet;
- (BOOL)ibOverridablePrefersToVerticallyResizeWithContainer;
- (BOOL)ibOverridablePrefersToHorizontallyResizeWithContainer;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibVerifyAndPopulateMessages:(id)arg1 forDocument:(id)arg2;
- (id)verifyBufferCollision:(id)arg1 document:(id)arg2;
- (id)verifySampleAlpha:(id)arg1 document:(id)arg2;
- (id)verifyRenderer:(id)arg1 document:(id)arg2;
- (id)verifySampleBuffer:(id)arg1 document:(id)arg2;
- (id)verifySamples:(id)arg1 document:(id)arg2;
- (BOOL)ibIsDefaultFramebuffer;
- (BOOL)ibIsDrawable;
- (void)setIbPixelFormatFromDictionaryRepresentation:(id)arg1;
- (id)ibPixelFormatMutableDictionaryRepresentation;
- (id)ibPixelFormatDictionaryRepresentation;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
@property BOOL ibArchivedWantsBestResolutionOpenGLSurface;
@property BOOL ibArchivedAllowOffline;
@property BOOL ibArchivedUseRecovery;
@property long long ibArchivedRendererType;
@property long long ibArchivedAntiAliasingType;
@property long long ibArchivedSamplingRate;
@property BOOL ibArchivedUseBackingStore;
@property BOOL ibArchivedUseStereoPixels;
@property BOOL ibArchivedUseDoubleBufferingEnabled;
@property BOOL ibArchivedUseAuxiliaryDepthBufferStencil;
@property long long ibArchivedNumberOfAuxiliaryBuffers;
@property long long ibArchivedAccumSize;
@property long long ibArchivedStencilSize;
@property long long ibArchivedDepthSize;
@property long long ibArchivedColorSize;
@property long long ibArchivedPolicy;
- (void)drawRect:(struct CGRect)arg1;
- (void)ibDrawRectIntoDependentContext:(struct CGRect)arg1;
- (Class)ibViewRendererClass;
- (id)ibLocalAttributeKeyPaths;
@end

