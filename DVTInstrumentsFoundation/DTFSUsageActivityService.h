//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTFSUsageActivityServiceAuthorizedAPI-Protocol.h>

@class DTXConnection, NSMutableDictionary, NSString;

@interface DTFSUsageActivityService : DTXService <DTFSUsageActivityServiceAuthorizedAPI>
{
    DTXConnection *_targetConnection;
    NSMutableDictionary *_switches;
}

+ (void)registerCapabilities:(id)arg1;
- (void).cxx_destruct;
- (id)initialSwitches;
- (void)setValue:(id)arg1 forSwitchName:(id)arg2;
- (id)valueForSwitch:(id)arg1;
- (void)stopSampling;
- (void)startSamplingWithPid:(int)arg1;
- (id)configureLaunchEnvironment:(id)arg1;
- (void)messageReceived:(id)arg1;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

