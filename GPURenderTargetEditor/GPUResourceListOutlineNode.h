//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GPUResourceListOutlineNode : NSObject
{
    NSString *_title;
    NSMutableArray *_children;
}

@property(readonly, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (id)init;

@end

