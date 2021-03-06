//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTFoundation/DTDKTeamBasedService.h>

@class NSData, NSDictionary, NSString;

@interface DTDKCreateProvisioningProfileService : DTDKTeamBasedService
{
}

+ (id)keyPathsForValuesAffectingProfile;
+ (id)keyPathsForValuesAffectingEncodedProfile;
+ (id)keyPathsForValuesAffectingProvisioningProfileID;
+ (id)keyPathsForValuesAffectingProfileDictionary;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2 subPlatform:(id)arg3 profileName:(id)arg4 appIDID:(id)arg5 deviceIDs:(id)arg6 includeAllDevices:(BOOL)arg7 certificateIDs:(id)arg8 distributionType:(id)arg9;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2 subPlatform:(id)arg3 profileName:(id)arg4 appIDID:(id)arg5 deviceIDs:(id)arg6 includeAllDevices:(BOOL)arg7 certificateIDs:(id)arg8;
@property(readonly) NSData *encodedProfile;
@property(readonly) NSString *provisioningProfileID;
@property(readonly) NSDictionary *profileDictionary;

@end

