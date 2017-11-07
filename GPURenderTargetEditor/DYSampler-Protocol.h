//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GPURenderTargetEditor/DYCacheableResource-Protocol.h>
#import <GPURenderTargetEditor/DYResource-Protocol.h>

@protocol DYSampler <DYCacheableResource, DYResource>
@property(nonatomic, readonly) unsigned int compareFunction;
@property(nonatomic, readonly) BOOL lodAverage;
@property(nonatomic, readonly) float lodMaxClamp;
@property(nonatomic, readonly) float lodMinClamp;
@property(nonatomic, readonly) BOOL normalizedCoordinates;
// Error parsing type for property borderColor:
// Property attributes: T{DYPixelValue=I(?=[4c][4C][4s][4S][4i][4I][4q][4Q][4 ][4f][4d])},N,R

@property(nonatomic, readonly) unsigned int rAddressMode;
@property(nonatomic, readonly) unsigned int tAddressMode;
@property(nonatomic, readonly) unsigned int sAddressMode;
@property(nonatomic, readonly) unsigned long long maxAnisotropy;
@property(nonatomic, readonly) unsigned int mipFilter;
@property(nonatomic, readonly) unsigned int magFilter;
@property(nonatomic, readonly) unsigned int minFilter;
@end
