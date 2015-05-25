//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTFoundation/DVTAbstractMacDevice.h>

@class NSMutableDictionary, NSSet, NSString;

@interface DVTLocalComputer : DVTAbstractMacDevice
{
    NSSet *_provisioningProfiles;
    NSMutableDictionary *_pidToXPCServiceConnectionDict;
    NSString *_cpuKind;
    unsigned long long _cpuCount;
    unsigned long long _cpuSpeedInMHz;
    unsigned long long _busSpeedInMHz;
    unsigned long long _ramSizeInMegabytes;
    unsigned long long _physicalCPUCoresPerPackage;
    unsigned long long _logicalCPUCoresPerPackage;
}

+ (id)provisioningManager;
+ (void)initialize;
@property unsigned long long logicalCPUCoresPerPackage; // @synthesize logicalCPUCoresPerPackage=_logicalCPUCoresPerPackage;
@property unsigned long long physicalCPUCoresPerPackage; // @synthesize physicalCPUCoresPerPackage=_physicalCPUCoresPerPackage;
@property unsigned long long ramSizeInMegabytes; // @synthesize ramSizeInMegabytes=_ramSizeInMegabytes;
@property unsigned long long busSpeedInMHz; // @synthesize busSpeedInMHz=_busSpeedInMHz;
@property unsigned long long cpuSpeedInMHz; // @synthesize cpuSpeedInMHz=_cpuSpeedInMHz;
@property unsigned long long cpuCount; // @synthesize cpuCount=_cpuCount;
@property(copy) NSString *cpuKind; // @synthesize cpuKind=_cpuKind;
- (void).cxx_destruct;
- (void)stopDebuggingXPCServices:(id)arg1;
- (void)debugXPCServices:(id)arg1;
- (void)_enableExtension:(id)arg1;
- (void)attachToServiceName:(id)arg1 pid:(int)arg2 parentPID:(int)arg3 stdoutFH:(id)arg4 stderrFH:(id)arg5;
- (id)_xpcDebugConnectionForPid:(id)arg1 create:(BOOL)arg2;
- (id)_keyForPid:(int)arg1;
- (void)downloadOptimizationProfilesFromBundleIdentifier:(id)arg1 orPath:(id)arg2 toFilePath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)supportsLocationSimulation;
- (void)uninstallProvisioningProfile:(id)arg1;
- (void)installProvisioningProfileAtURL:(id)arg1;
- (void)installProvisioningProfile:(id)arg1;
- (void)profilesDidChange:(id)arg1;
- (id)provisioningProfiles;
- (id)nameForDeveloperPortal;
- (BOOL)supportsProvisioning;
- (BOOL)supportsArchiving;
- (BOOL)supportsDebuggingForAskOnLaunch;
- (BOOL)supportsUnhostedXPCServiceDebugging;
- (BOOL)supportsXPCServiceDebugging;
- (unsigned long long)supportedLaunchOptions;
- (BOOL)canRunMultipleInstancesPerApp;
- (BOOL)supportsDebugAsDifferentUser;
- (BOOL)supportsDebuggingDocumentVersioning;
- (BOOL)supportsResumeAndTurningItOnOrOff;
- (BOOL)supportsCustomWorkingDirectory;
- (id)processInformations;
- (id)processorDescription;
- (BOOL)isConcreteDevice;
- (BOOL)isGenericDevice;
- (BOOL)isIgnored;
- (void)setIgnored:(BOOL)arg1;
- (BOOL)isAvailable;
- (void)setAvailable:(BOOL)arg1;
- (id)init;

@end

