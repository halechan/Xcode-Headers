//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DTGraphKit/DTNetworkGraphObject.h>

@interface DTNetworkGraphNode : DTNetworkGraphObject
{
    struct CGPoint position;
    struct CGPoint magnetPosition;
    struct CGPoint velocity;
    struct CGRect box;
    BOOL anchor;
}

@property BOOL anchor; // @synthesize anchor;
@property struct CGRect box; // @synthesize box;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

