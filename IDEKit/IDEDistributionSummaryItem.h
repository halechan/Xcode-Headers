//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTLogAspect, NSAttributedString, NSDictionary, NSImage, NSString;

@interface IDEDistributionSummaryItem : NSObject
{
    NSAttributedString *_entitlementsDescription;
    BOOL _disclosed;
    NSString *_name;
    NSImage *_icon;
    NSDictionary *_entitlements;
    NSString *_provisioningProfileName;
    NSString *_provisioningProfilePath;
    DVTLogAspect *_logAspect;
}

+ (id)summaryItemWithDVTFilePath:(id)arg1 icon:(id)arg2 entitlements:(id)arg3 provisioningProfile:(id)arg4 logAspect:(id)arg5;
@property(readonly) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property BOOL disclosed; // @synthesize disclosed=_disclosed;
@property(readonly) NSString *provisioningProfilePath; // @synthesize provisioningProfilePath=_provisioningProfilePath;
@property(readonly) NSString *provisioningProfileName; // @synthesize provisioningProfileName=_provisioningProfileName;
@property(readonly) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly) NSImage *icon; // @synthesize icon=_icon;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)entitlementsDescription;
@property(readonly) NSAttributedString *displayableNameAndEntitlements;
- (BOOL)hasEntitlements;

@end

