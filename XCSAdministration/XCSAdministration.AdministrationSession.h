//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface XCSAdministration.AdministrationSession : NSObject
{
    // Error parsing type: , name: observers
    // Error parsing type: , name: configuration
}

+ (id)localWithConfiguration:(id)arg1;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSURL *xcodeAppUrl;
@property(nonatomic, readonly) BOOL isSharedDataLocationOverridden;
@property(nonatomic, readonly) NSURL *sharedDataLocation;
- (BOOL)switchToBuildServiceUserSessionAndReturnError:(id *)arg1;
@property(nonatomic, readonly) NSString *buildServiceUsername;
- (id)initWithConfiguration:(id)arg1;
- (BOOL)updateAccessSettingsAndReturnError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (id)getAccessSettingsAndReturnError:(id *)arg1;
- (BOOL)updateSettingsAndReturnError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (id)getSettingsAndReturnError:(id *)arg1;
- (BOOL)createBuildUser:(id)arg1 error:(id *)arg2;

@end

