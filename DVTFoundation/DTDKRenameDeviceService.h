//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTFoundation/DTDKTeamBasedService.h>

@class NSDictionary, NSString;

@interface DTDKRenameDeviceService : DTDKTeamBasedService
{
}

+ (id)keyPathsForValuesAffectingDeviceID;
+ (id)keyPathsForValuesAffectingDeviceNumber;
+ (id)keyPathsForValuesAffectingDeviceName;
+ (id)keyPathsForValuesAffectingDevice;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2 deviceID:(id)arg3 newName:(id)arg4;
@property(readonly) NSString *deviceID;
@property(readonly) NSString *deviceNumber;
@property(readonly) NSString *deviceName;
@property(readonly) NSDictionary *device;

@end

