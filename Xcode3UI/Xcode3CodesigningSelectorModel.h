//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDECodesigningSettings.h"

@class DVTStackBacktrace, DVTTeamRecord, NSString, Xcode3Target, Xcode3TargetBuildSettingsCoordinator, Xcode3TargetCapabilitiesContext;

@interface Xcode3CodesigningSelectorModel : NSObject <IDECodesigningSettings, DVTInvalidation>
{
    Xcode3TargetBuildSettingsCoordinator *_buildSettings;
    BOOL _currentlyRefreshing;
    Xcode3Target *_target;
    BOOL automaticallySyncsWithPortal;
    int _intent;
    Xcode3TargetCapabilitiesContext *_capabilitiesContext;
}

+ (id)keyPathsForValuesAffectingIntent;
+ (id)keyPathsForValuesAffectingDevelopmentTeamID;
+ (id)keyPathsForValuesAffectingDevelopmentTeam;
+ (void)initialize;
@property(retain) Xcode3TargetCapabilitiesContext *capabilitiesContext; // @synthesize capabilitiesContext=_capabilitiesContext;
@property(nonatomic) int intent; // @synthesize intent=_intent;
@property BOOL automaticallySyncsWithPortal; // @synthesize automaticallySyncsWithPortal;
- (void).cxx_destruct;
- (void)_refreshPortal:(BOOL)arg1;
- (void)_writeCodeSigningBuildSetting:(int)arg1;
- (void)buildSettingsChangedNotification:(id)arg1;
@property(readonly, nonatomic) NSString *profile;
@property(readonly, nonatomic) NSString *identity;
@property(readonly) NSString *developmentTeamID;
@property(retain, nonatomic) DVTTeamRecord *developmentTeam;
- (void)syncBuildSettings;
- (void)syncPortalWithFullRefresh:(BOOL)arg1;
@property(readonly) BOOL needsResync;
- (id)developersAndTeams;
- (void)primitiveInvalidate;
- (id)initWithTarget:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

