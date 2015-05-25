//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTBasicDevice.h"

@class DTXChannel, DVTDeviceType, DVTExtension, DVTPlatform, NSArray, NSError, NSMutableSet, NSOrderedSet, NSSet, NSString, NSURL;

@interface DVTDevice : NSObject <DVTBasicDevice>
{
    NSMutableSet *_capabilities;
    DTXChannel *_appExtensionInstallObserverChannel;
    BOOL _available;
    BOOL _ignored;
    BOOL _usedForDevelopment;
    BOOL _canSelectArchitectureToExecute;
    DVTExtension *_extension;
    NSURL *_deviceLocation;
    NSString *_nativeArchitecture;
    NSString *_operatingSystemVersionWithBuildNumber;
    NSString *_modelUTI;
    NSString *_modelName;
    NSError *_unavailabilityError;
    DVTPlatform *_platform;
    DVTDeviceType *_deviceType;
    NSOrderedSet *_supportedArchitectures;
    NSString *_name;
    NSString *_modelCode;
    NSString *_operatingSystemVersion;
    NSString *_operatingSystemBuild;
    NSString *_identifier;
}

+ (id)modelNameFromModelUTI:(id)arg1;
+ (id)modelUTIFromModelCode:(id)arg1;
+ (id)_knownDeviceLocators;
+ (void)initialize;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *operatingSystemBuild; // @synthesize operatingSystemBuild=_operatingSystemBuild;
@property(copy) NSString *operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(copy, nonatomic) NSString *modelCode; // @synthesize modelCode=_modelCode;
@property(copy) NSString *name; // @synthesize name=_name;
@property BOOL canSelectArchitectureToExecute; // @synthesize canSelectArchitectureToExecute=_canSelectArchitectureToExecute;
@property(copy) NSOrderedSet *supportedArchitectures; // @synthesize supportedArchitectures=_supportedArchitectures;
@property(retain) DVTDeviceType *deviceType; // @synthesize deviceType=_deviceType;
@property(retain) DVTPlatform *platform; // @synthesize platform=_platform;
@property(nonatomic, getter=isUsedForDevelopment) BOOL usedForDevelopment; // @synthesize usedForDevelopment=_usedForDevelopment;
@property(getter=isIgnored) BOOL ignored; // @synthesize ignored=_ignored;
@property(readonly) NSError *unavailabilityError; // @synthesize unavailabilityError=_unavailabilityError;
@property(getter=isAvailable) BOOL available; // @synthesize available=_available;
@property(copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(copy, nonatomic) NSString *modelUTI; // @synthesize modelUTI=_modelUTI;
@property(copy, nonatomic) NSString *operatingSystemVersionWithBuildNumber; // @synthesize operatingSystemVersionWithBuildNumber=_operatingSystemVersionWithBuildNumber;
@property(readonly, copy) NSURL *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (id)launchApplicationWithBundleIdentifier:(id)arg1 withArguments:(id)arg2 environment:(id)arg3 options:(id)arg4;
- (id)applicationIsInstalledWithBundleIdentifier:(id)arg1;
- (id)uninstallApplicationWithBundleIdentifier:(id)arg1 andOptions:(id)arg2;
- (id)installApplicationAtPath:(id)arg1 withOptions:(id)arg2;
@property(readonly) BOOL canInstallApplication;
- (id)runExecutableAtPath:(id)arg1 withArguments:(id)arg2 environment:(id)arg3 options:(id)arg4 terminationHandler:(CDUnknownBlockType)arg5;
@property(readonly) BOOL canRunExecutables;
- (id)shutDownDevice;
- (id)startUpDevice;
@property(readonly) unsigned long long startupState;
@property(readonly) BOOL canStartUpAndShutDown;
- (void)takeScreenshotWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly) _Bool canTakeScreenshot;
- (void)_syncDeviceCrashLogsDirectoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unpair;
@property(readonly) _Bool isPaired;
@property(readonly) _Bool usesPairingRecord;
@property(readonly) _Bool canEnableWireless;
- (void)disableWireless;
- (id)enableWireless;
@property(readonly) _Bool isWirelessEnabled;
@property(readonly, copy) NSArray *addresses;
@property(readonly, copy) NSString *hostname;
@property(readonly) _Bool hasWiredConnection;
@property(readonly) _Bool hasWirelessConnection;
@property(readonly) _Bool isWireless;
- (void)terminateWatchAppForCompanionIdentifier:(id)arg1 options:(id)arg2;
- (void)launchWatchAppForCompanionIdentifier:(id)arg1 options:(id)arg2 completionblock:(CDUnknownBlockType)arg3;
- (id)listenForInstallOfAppExtensionIdentifiers:(id)arg1;
- (id)_applicationListingChannel;
@property(readonly) unsigned long long supportedLaunchOptions;
- (id)primaryInstrumentsServer;
- (id)makeTransportForTestManagerService:(id *)arg1;
- (BOOL)requiresTestDaemonMediationForTestHostConnection;
@property(readonly) BOOL supportsTestManagerDaemon;
- (void)renameDevice:(id)arg1;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canBeWatchCompanion;
- (void)disableDeviceForDevelopment;
- (void)enableDeviceForDevelopment;
- (id)installApplicationsSync:(id)arg1 options:(id)arg2;
- (id)installApplicationSync:(id)arg1 options:(id)arg2;
- (void)stopDebuggingXPCServices:(id)arg1;
- (void)debugXPCServices:(id)arg1;
- (id)preferredSDKForDeviceOptions:(id)arg1 error:(id *)arg2;
- (id)preferredArchitectureForDeviceOptions:(id)arg1 error:(id *)arg2;
- (BOOL)validateDeviceSpecifierOptions:(id)arg1 allowMultipleMatches:(BOOL)arg2 error:(id *)arg3;
@property(readonly, copy) NSString *nameForDeveloperPortal;
@property(readonly, copy) NSString *platformIdentifier;
@property(readonly) BOOL isRunningSupportedOS;
@property(readonly) BOOL isSupportedHardware;
@property(readonly) BOOL canIgnore;
- (void)uninstallProvisioningProfile:(id)arg1;
- (void)installProvisioningProfileAtURL:(id)arg1;
- (void)installProvisioningProfile:(id)arg1;
@property(readonly) NSSet *provisioningProfiles;
@property(readonly) BOOL supportsProvisioning;
@property(readonly) BOOL supportsArchiving;
- (BOOL)canPerformUbiquityFetchEvent;
- (void)performUbiquityFetchEvent;
- (void)performFetchEventForPID:(int)arg1;
@property(readonly) unsigned long long supportsFetchEvents;
- (void)downloadOptimizationProfilesFromBundleIdentifier:(id)arg1 orPath:(id)arg2 toFilePath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)optimizationProfilesPathFromBundleIdentifier:(id)arg1;
- (BOOL)supportsPGOReturningError:(id *)arg1;
@property(readonly) BOOL supportsDebuggingForAskOnLaunch;
- (BOOL)supportsUnhostedXPCServiceDebugging;
@property(readonly) BOOL supportsXPCServiceDebugging;
@property(readonly) BOOL canRunMultipleInstancesPerApp;
@property(readonly) BOOL runsRemoteFromHostLauncher;
@property(readonly) BOOL supportsDebugAsDifferentUser;
@property(readonly) BOOL supportsDebuggingDocumentVersioning;
@property(readonly) BOOL supportsResumeAndTurningItOnOrOff;
@property(readonly) BOOL supportsCustomWorkingDirectory;
@property(readonly) BOOL supportsDisplayScaleOption;
@property(readonly) BOOL supportsRoutingCoverageFile;
@property(readonly) BOOL supportsLocalizationOptions;
@property(readonly) BOOL supportsLocationSimulation;
@property(readonly) NSString *deviceIdentifierForGPUTracing;
@property(readonly) BOOL supportsApplicationDataUploading;
@property(readonly) BOOL supportsAttachByPIDOrName;
@property(readonly, copy) NSString *processorDescription;
- (void)requestProcessInformations:(CDUnknownBlockType)arg1;
@property(readonly) NSString *executionDisplayName;
@property(readonly, copy) NSString *recordedFramesBacktraceRecordingDylibPath;
@property(readonly, copy) NSString *recordedFramesLibdispatchIntrospectionDylibPath;
@property(readonly, copy) NSString *recordedFramesMinimumVersionString;
@property(readonly) BOOL alwaysAttachesForDebugging;
@property(readonly, getter=isConcreteDevice) BOOL concreteDevice;
@property(readonly, getter=isGenericDevice) BOOL genericDevice;
@property(readonly) NSString *displayOrder;
@property(copy) NSString *nativeArchitecture; // @synthesize nativeArchitecture=_nativeArchitecture;
@property(readonly, copy) NSSet *proxiedDevices;
- (id)servicesMatchingCapability:(id)arg1;
- (id)_instantiateServicesForCapability:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithDeviceLocation:(id)arg1 extension:(id)arg2;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSSet *capabilities; // @dynamic capabilities;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSMutableSet *mutableCapabilities; // @dynamic mutableCapabilities;
@property(readonly) Class superclass;

@end

