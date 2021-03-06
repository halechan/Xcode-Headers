//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTDTApplicationWorkspaceClient-Protocol.h>

@class DVTDispatchLock, DVTPerformanceMetric, NSMapTable, NSString;

@interface DVTAppExtensionInstallPromiseManager : NSObject <DVTDTApplicationWorkspaceClient>
{
    NSMapTable *_promiseMap;
    DVTDispatchLock *_promiseMapLock;
    DVTPerformanceMetric *_extensionLoggingMetric;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)applicationUninstalled:(id)arg1;
- (void)applicationInstalled:(id)arg1;
- (void)listenForIDs:(id)arg1 promise:(id)arg2 channel:(id)arg3;
- (id)_initInternal;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

