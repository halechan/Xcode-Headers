//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTapMessage.h>

#import "NSCoding.h"

@class NSDictionary;

@interface DTSysmonTapMessage : DTTapMessage <NSCoding>
{
    NSDictionary *_runningMetadata;
}

@property(copy, nonatomic) NSDictionary *runningMetadata; // @synthesize runningMetadata=_runningMetadata;
- (void).cxx_destruct;
- (void)setSessionMetadata:(id)arg1;
- (id)sessionMetadata;
@property(nonatomic) unsigned int tapVersion;

@end
