//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class PKRegion;

@interface SKRegion : NSObject <NSCopying, NSCoding>
{
    PKRegion *_region;
}

+ (id)infiniteRegion;
- (void).cxx_destruct;
- (void)containsPoints:(const float *)arg1 locationStride:(long long)arg2 results:(char *)arg3 resultsStride:(long long)arg4 count:(int)arg5;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (id)regionByIntersectionWithRegion:(id)arg1;
- (id)regionByDifferenceFromRegion:(id)arg1;
- (id)regionByUnionWithRegion:(id)arg1;
- (id)inverseRegion;
- (id)initWithPath:(struct CGPath *)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithRadius:(float)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) struct CGPath *path;

@end

