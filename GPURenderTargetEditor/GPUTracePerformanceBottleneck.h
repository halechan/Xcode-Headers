//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DYPPerformanceBottleneck, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GPUTracePerformanceBottleneck : NSObject
{
    int _severity;
    DYPPerformanceBottleneck *_bottleneck;
    NSString *_issue;
    NSArray *_associatedItems;
}

@property(retain, nonatomic) NSArray *associatedItems; // @synthesize associatedItems=_associatedItems;
@property(retain, nonatomic) NSString *issue; // @synthesize issue=_issue;
@property(nonatomic) int severity; // @synthesize severity=_severity;
@property(retain, nonatomic) DYPPerformanceBottleneck *bottleneck; // @synthesize bottleneck=_bottleneck;
- (void).cxx_destruct;

@end
