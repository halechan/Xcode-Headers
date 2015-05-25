//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCSEventStreamDelegate.h"

@class NSData, NSDictionary, NSError, NSObject<OS_dispatch_queue>, NSString, NSURL, XCSEventStream;

@interface XCSService : NSObject <XCSEventStreamDelegate>
{
    BOOL _enabled;
    BOOL _enableMessageChannel;
    struct OpaqueSecIdentityRef *_identity;
    NSString *_identityKeychainPath;
    NSData *_identityKeychainPassword;
    id <XCSServiceErrorDelegate> _errorDelegate;
    NSObject<OS_dispatch_queue> *_errorDelegateQueue;
    id <XCSServiceBuildDelegate> _buildDelegate;
    NSObject<OS_dispatch_queue> *_buildDelegateQueue;
    NSURL *_url;
    NSString *_unitTestID;
    NSString *_connectionAddress;
    NSString *_clientUUID;
    NSError *_resolutionError;
    NSString *_netServiceDomain;
    NSString *_netServiceType;
    NSString *_netServiceName;
    long long _clientVersion;
    NSString *_unitTestName;
    NSString *_name;
    NSDictionary *_dictionaryRepresentation;
    XCSEventStream *_eventStream;
}

+ (id)resultsFromResponse:(id)arg1;
+ (id)serviceFromDictionaryRepresentation:(id)arg1;
+ (id)serviceWithConnectionAddress:(id)arg1 portNumber:(unsigned long long)arg2 enabled:(BOOL)arg3;
+ (id)serviceWithConnectionAddress:(id)arg1 portNumber:(unsigned long long)arg2;
+ (id)serviceWithNetServiceDomain:(id)arg1 type:(id)arg2 name:(id)arg3 enabled:(BOOL)arg4;
+ (id)serviceWithNetServiceDomain:(id)arg1 type:(id)arg2 name:(id)arg3;
+ (id)defaultCouchEndpoint;
+ (id)defaultClientSSLEndpoint;
+ (id)defaultEndpoint;
@property(retain, nonatomic) XCSEventStream *eventStream; // @synthesize eventStream=_eventStream;
@property(copy, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *unitTestName; // @synthesize unitTestName=_unitTestName;
@property(nonatomic) long long clientVersion; // @synthesize clientVersion=_clientVersion;
@property(readonly, nonatomic) NSString *netServiceName; // @synthesize netServiceName=_netServiceName;
@property(readonly, nonatomic) NSString *netServiceType; // @synthesize netServiceType=_netServiceType;
@property(readonly, nonatomic) NSString *netServiceDomain; // @synthesize netServiceDomain=_netServiceDomain;
@property(readonly, nonatomic) NSError *resolutionError; // @synthesize resolutionError=_resolutionError;
@property(readonly, nonatomic) NSString *clientUUID; // @synthesize clientUUID=_clientUUID;
@property(copy, nonatomic) NSString *connectionAddress; // @synthesize connectionAddress=_connectionAddress;
@property(copy, nonatomic) NSString *unitTestID; // @synthesize unitTestID=_unitTestID;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *buildDelegateQueue; // @synthesize buildDelegateQueue=_buildDelegateQueue;
@property(nonatomic) __weak id <XCSServiceBuildDelegate> buildDelegate; // @synthesize buildDelegate=_buildDelegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *errorDelegateQueue; // @synthesize errorDelegateQueue=_errorDelegateQueue;
@property(nonatomic) __weak id <XCSServiceErrorDelegate> errorDelegate; // @synthesize errorDelegate=_errorDelegate;
- (void).cxx_destruct;
- (void)removeAllObjectsAtBase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_uploadFileAtPath:(id)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_deleteObject:(id)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_deleteEndpointWithBase:(id)arg1 body:(id)arg2 usingCredential:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_postToEndpointWithBase:(id)arg1 body:(id)arg2 usingCredential:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_hitEndpointWithBase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_refreshObject:(id)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_saveObject:(id)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_patchObject:(id)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_findObjectsOfClass:(Class)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_createObjectWithDictionary:(id)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_createObject:(id)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)logTasksList:(id)arg1;
- (void)removeAllCommitsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllIntegrationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllBotsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllUnitTestDocsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)importTestResults:(id)arg1 completeIntegrationWithID:(id)arg2 testedDevices:(struct NSArray *)arg3 testedDevicesIDs:(id)arg4 hierarchy:(id)arg5 perfMetricNames:(id)arg6 perfMetricKeyPaths:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)isDatabaseBeingCompactedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)databaseFragmentationIndexWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)databaseCompactWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)notifyAfterBonjourResolution:(CDUnknownBlockType)arg1;
@property(readonly) BOOL isResolving;
@property(readonly) BOOL isResolved;
@property(readonly) BOOL isBonjour;
- (void)verifyConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSData *identityKeychainPassword;
@property(retain, nonatomic) NSString *identityKeychainPath;
@property(nonatomic) struct OpaqueSecIdentityRef *identity;
@property(readonly, nonatomic) NSURL *friendlyURL;
@property(nonatomic) BOOL enabled;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToService:(id)arg1;
- (void)dealloc;
- (void)evaluateAndReestablishMessageChannelConnections;
- (void)configureWithURL:(id)arg1 enableMessageChannel:(BOOL)arg2;
- (id)initWithUnitTestID:(id)arg1 name:(id)arg2 xcsCoreEndPoint:(id)arg3 enableMessageChannel:(BOOL)arg4;
- (id)initWithUnitTestID:(id)arg1 name:(id)arg2 xcsCoreEndPoint:(id)arg3;
- (id)initWithUnitTestID:(id)arg1 xcsCoreEndPoint:(id)arg2;
- (id)initBarebonesStartingEnabled:(BOOL)arg1;
- (id)initBarebones;
- (id)initWithURL:(id)arg1 enableMessageChannel:(BOOL)arg2 serviceEnabled:(BOOL)arg3;
- (id)initWithURL:(id)arg1 enableMessageChannel:(BOOL)arg2;
- (id)initWithURL:(id)arg1 enabled:(BOOL)arg2;
- (id)initWithURL:(id)arg1;
- (id)initForClientSSL;
- (id)init;
- (void)requestPortalSyncWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)listenForRequestPortalSync:(CDUnknownBlockType)arg1;
- (void)updateSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)listenForDeviceDeletion:(CDUnknownBlockType)arg1;
- (void)listenForDeviceUpdates:(CDUnknownBlockType)arg1;
- (void)listenForDeviceCreation:(CDUnknownBlockType)arg1;
- (void)devicesForTeamIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchServerDeviceInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchDeviceWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchServiceHealthWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)createHostedRepository:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allHostedRepositoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)listenForCreateRepositoryRequest:(CDUnknownBlockType)arg1;
- (void)listenForListRepositoriesRequest:(CDUnknownBlockType)arg1;
- (void)uploadFileAtPath:(id)arg1 forIntegration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)latestIntegrationForBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dataForSummaryGraphsUsingTimeseriesDataForBot:(id)arg1 andRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dataForTestResultsTableUsingTimeseriesDataForBot:(id)arg1 andRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)timeseriesDataForBot:(id)arg1 andCategory:(id)arg2 inRange:(struct _NSRange)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cleanAndStartBotRunForBotGUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)listenForBotDeletion:(CDUnknownBlockType)arg1 withOwner:(id)arg2;
- (void)listenForBotDeletion:(CDUnknownBlockType)arg1;
- (void)listenForBotUpdates:(CDUnknownBlockType)arg1 withOwner:(id)arg2;
- (void)listenForBotUpdates:(CDUnknownBlockType)arg1;
- (void)listenForBotCreation:(CDUnknownBlockType)arg1 withOwner:(id)arg2;
- (void)listenForBotCreation:(CDUnknownBlockType)arg1;
- (void)statsForBot:(id)arg1 sinceDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)statsForBot:(id)arg1 onDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)integrateBot:(id)arg1 shouldClean:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)integrateBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateBot:(id)arg1 overwritingBlueprint:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allBotsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchBotWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reflightCredentialsForBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)preflightCredentialsInBlueprint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)listenForACLUpdate:(CDUnknownBlockType)arg1;
- (void)updateACL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allACLsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchExpandedACLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchACLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)isBotCreatorWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)logoutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loginWithUserName:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)obtainIdentityTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendNotificationRequest:(id)arg1 forIntegrationID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)allOrphanedIntegrationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestToBuildIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allPendingIntegrationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)registerBuildServiceWithCapabilities:(id)arg1;
- (id)allAssetsURLForIntegration:(id)arg1;
- (id)webAppURLForBigScreen;
- (id)webAppURLForIntegration:(id)arg1;
- (id)webAppURLForBot:(id)arg1;
- (id)webAppBaseURL;
- (void)handleError:(id)arg1 forRequest:(id)arg2 withFallThroughHandler:(CDUnknownBlockType)arg3 retryHandler:(CDUnknownBlockType)arg4;
- (void)deviceDataForTestResultsTableUsingTimeseriesDataForIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scmCommitsForIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)timeseriesDataForIntegration:(id)arg1 category:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pruneArchiveAndProductForIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resume:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pause:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)integrationWithGUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_processIntegrationSummaries:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_integrationRangeOfClass:(Class)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)listenForIntegrationDeletion:(CDUnknownBlockType)arg1 withOwner:(id)arg2;
- (void)listenForIntegrationDeletion:(CDUnknownBlockType)arg1;
- (void)listenForAdvisoryIntegrationStatusUpdates:(CDUnknownBlockType)arg1 withOwner:(id)arg2;
- (void)listenForAdvisoryIntegrationStatusUpdates:(CDUnknownBlockType)arg1;
- (void)listenForIntegrationStatusUpdates:(CDUnknownBlockType)arg1 withOwner:(id)arg2;
- (void)listenForIntegrationStatusUpdates:(CDUnknownBlockType)arg1;
- (void)listenForIntegrationCreation:(CDUnknownBlockType)arg1 withOwner:(id)arg2;
- (void)listenForIntegrationCreation:(CDUnknownBlockType)arg1;
- (void)emitAdvisoryStatusForIntegration:(id)arg1 message:(id)arg2 percentage:(double)arg3;
- (void)testWithKeyPath:(id)arg1 forIntegration:(id)arg2 device:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)testsForIntegration:(id)arg1 device:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeTags:(id)arg1 integration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addTags:(id)arg1 integration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)integrationsSummariesBeforeIntegrationNumber:(unsigned long long)arg1 howMany:(unsigned long long)arg2 forBot:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)integrationsSummariesAfterIntegrationNumber:(unsigned long long)arg1 howMany:(unsigned long long)arg2 forBot:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)lastIntegrationSummaries:(unsigned long long)arg1 forBot:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)allIntegrationSummariesForBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)nonFatalIntegrationsBeforeIntegrationNumber:(unsigned long long)arg1 howMany:(unsigned long long)arg2 forBot:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)lastIntegrationWithBuildResultForBotIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)nonFatalIntegrationsAfterIntegrationNumber:(unsigned long long)arg1 howMany:(unsigned long long)arg2 forBot:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)lastNonFatalIntegrations:(unsigned long long)arg1 forBotIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)lastNonFatalIntegrations:(unsigned long long)arg1 forBot:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)allNonFatalIntegrationsForBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)integrationsBeforeIntegrationNumber:(unsigned long long)arg1 howMany:(unsigned long long)arg2 forBot:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)integrationsAfterIntegrationNumber:(unsigned long long)arg1 howMany:(unsigned long long)arg2 forBot:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)lastIntegrations:(unsigned long long)arg1 forBotIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)lastIntegrations:(unsigned long long)arg1 forBot:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)integrationCountForBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allIntegrationsForBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allRunningIntegrationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)readIssuesForIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveIssues:(id)arg1 forIntegration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readCommitHistoryForIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveCommitHistory:(struct NSArray *)arg1 forIntegration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allIntegrationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchIntegrationWithNumber:(unsigned long long)arg1 bot:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchIntegrationWithID:(id)arg1 includeCredentials:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchIntegrationWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_isUserOperationAllowedWithCompletionHandler:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)currentLoggedUserCompletionHandler:(CDUnknownBlockType)arg1;
- (void)canUserCreateBots:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)canUserViewBots:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)canUserCreateRepositories:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateVersionInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allVersionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchVersionInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)createVersionInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
