//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTFoundation/DTDKTeamBasedService.h>

@class NSArray;

@interface DTDKListDeviceService : DTDKTeamBasedService
{
}

+ (id)keyPathsForValuesAffectingDevices;
+ (id)guaranteedComprehensiveResponseKeys;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2;
@property(readonly) NSArray *devices;

@end

