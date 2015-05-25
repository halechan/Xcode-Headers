//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTTimelinePlaneGroup;

@interface DTTimelinePlaneGroupLayoutManager : NSObject
{
    DTTimelinePlaneGroup *_planeGroup;
}

- (void).cxx_destruct;
- (unordered_map_c1fbcd3c)populatePlaneLayoutMap:(unordered_map_c1fbcd3c)arg1 offsetFromTop:(double)arg2;
- (struct CGRect)_frameForZOrderedPlane:(id)arg1 yOffet:(double)arg2;
- (id)planeAtPoint:(struct CGPoint)arg1 currentDepth:(unsigned long long)arg2 maxDepth:(unsigned long long)arg3;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)_positionPlane:(id)arg1 yPosition:(double)arg2;
- (void)_positionPlane:(id)arg1;
- (id)initWithPlaneGroup:(id)arg1;

@end

