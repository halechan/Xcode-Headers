//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface GPUTracePipelineStatisticsDrawcallGraphView : NSView
{
    NSNumber *_maximum;
    NSArray *_base;
    NSArray *_current;
}

@property(retain) NSArray *current; // @synthesize current=_current;
@property(retain) NSArray *base; // @synthesize base=_base;
@property(retain) NSNumber *maximum; // @synthesize maximum=_maximum;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

