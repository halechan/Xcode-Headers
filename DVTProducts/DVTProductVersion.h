//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "DVTServicesJSONSerialization.h"

@class DVTCrashPointAppStoreSource, DVTCrashPointLocalSource, DVTProductVersionBinaryInfo, DVTProductVersionSymbolInfo, DVTStackBacktrace, NSArray, NSDate, NSSet, NSString, NSURL;

@interface DVTProductVersion : NSObject <DVTServicesJSONSerialization, DVTInvalidation>
{
    NSString *_bundleIdentifier;
    NSString *_version;
    NSString *_buildNumber;
    NSString *_name;
    NSURL *_imageURL;
    NSURL *_cacheImageURL;
    NSDate *_creationDate;
    NSArray *_childProducts;
    unsigned long long _productType;
    NSString *_adamId;
    NSSet *_supportedDeviceTypes;
    NSSet *_supportedOSVersions;
    DVTProductVersionBinaryInfo *_binaryInfo;
    DVTProductVersionSymbolInfo *_symbolInfo;
    DVTCrashPointAppStoreSource *_appStoreCrashPointSource;
    DVTCrashPointLocalSource *_localCrashPointSource;
    NSArray *_archives;
    unsigned long long _appStoreStatus;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
+ (id)keyPathsForValuesAffectingProductSourceType;
+ (id)productVersionFromArchive:(id)arg1 withError:(id *)arg2;
+ (BOOL)isValidProductVersionFromArchive:(id)arg1 withError:(id *)arg2;
+ (id)productVersionByMerging:(id)arg1;
+ (id)mostRecentVersion:(id)arg1;
+ (void)initialize;
@property unsigned long long appStoreStatus; // @synthesize appStoreStatus=_appStoreStatus;
@property(retain) NSArray *archives; // @synthesize archives=_archives;
@property(retain) DVTCrashPointLocalSource *localCrashPointSource; // @synthesize localCrashPointSource=_localCrashPointSource;
@property(retain) DVTCrashPointAppStoreSource *appStoreCrashPointSource; // @synthesize appStoreCrashPointSource=_appStoreCrashPointSource;
@property(retain) DVTProductVersionSymbolInfo *symbolInfo; // @synthesize symbolInfo=_symbolInfo;
@property(retain) DVTProductVersionBinaryInfo *binaryInfo; // @synthesize binaryInfo=_binaryInfo;
@property(retain) NSSet *supportedOSVersions; // @synthesize supportedOSVersions=_supportedOSVersions;
@property(retain) NSSet *supportedDeviceTypes; // @synthesize supportedDeviceTypes=_supportedDeviceTypes;
@property(copy) NSString *adamId; // @synthesize adamId=_adamId;
@property(readonly) unsigned long long productType; // @synthesize productType=_productType;
@property(retain) NSArray *childProducts; // @synthesize childProducts=_childProducts;
@property(readonly) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) NSURL *cacheImageURL; // @synthesize cacheImageURL=_cacheImageURL;
@property(retain) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(readonly) NSString *version; // @synthesize version=_version;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)JSONRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, getter=isAvailableForSale) BOOL availableForSale;
@property(readonly, getter=isAvailableForPrerelease) BOOL availableForPrerelease;
@property(readonly) unsigned long long productSourceType;
- (void)primitiveInvalidate;
- (void)setAppStoreCrashPointSource:(id)arg1 productManager:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 version:(id)arg2 buildNumber:(id)arg3 name:(id)arg4 childProducts:(id)arg5 productType:(unsigned long long)arg6;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

