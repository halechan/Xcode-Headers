//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DVTDraggedImageState : NSObject
{
    struct CGPoint _anchorPoint;
    BOOL _isAnchorPointExplicit;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)synthesizedAnchorPoint:(struct CGPoint *)arg1 forSubiquentState:(id)arg2;
- (void)synthesizeAnchorPointFromPreviousStates:(id)arg1;
- (id)image;
- (struct CGPoint)anchorPoint;
- (void)setAnchorPoint:(struct CGPoint)arg1;
- (BOOL)isAnchorPointExplicit;

@end

