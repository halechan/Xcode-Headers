//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTSourceControlIdentifiable.h"
#import "DVTSourceControlSerializable.h"
#import "NSCopying.h"

@class DVTSourceControlRemoteRepository, NSMapTable, NSOperationQueue, NSOrderedSet, NSString;

@interface DVTSourceControlWorkspaceBlueprint : NSObject <DVTSourceControlIdentifiable, DVTSourceControlSerializable, NSCopying>
{
    NSOperationQueue *_blueprintOperationQueue;
    BOOL _favorite;
    NSString *__id;
    DVTSourceControlRemoteRepository *_primaryRemoteRepository;
    NSString *_relativePathToProject;
    NSOrderedSet *_remoteRepositories;
    NSMapTable *_workingCopyStates;
    NSMapTable *_workingCopyPaths;
    NSMapTable *_workingCopyRepositoryLocations;
    NSMapTable *_locations;
    NSString *_name;
}

+ (BOOL)validateDictionary:(id)arg1;
@property(getter=isFavorite) BOOL favorite; // @synthesize favorite=_favorite;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSMapTable *locations; // @synthesize locations=_locations;
@property(copy) NSMapTable *workingCopyRepositoryLocations; // @synthesize workingCopyRepositoryLocations=_workingCopyRepositoryLocations;
@property(copy) NSMapTable *workingCopyPaths; // @synthesize workingCopyPaths=_workingCopyPaths;
@property(copy) NSMapTable *workingCopyStates; // @synthesize workingCopyStates=_workingCopyStates;
@property(copy) NSOrderedSet *remoteRepositories; // @synthesize remoteRepositories=_remoteRepositories;
@property(copy) NSString *relativePathToProject; // @synthesize relativePathToProject=_relativePathToProject;
@property(retain) DVTSourceControlRemoteRepository *primaryRemoteRepository; // @synthesize primaryRemoteRepository=_primaryRemoteRepository;
@property(copy) NSString *_id; // @synthesize _id=__id;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentationWithOptions:(unsigned long long)arg1;
- (id)saveBlueprintInFolder:(id)arg1 options:(unsigned long long)arg2;
- (id)jsonDataRepresentationWithOptions:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1 sshKeyDirectory:(id)arg2;
- (id)initWithBlueprintFile:(id)arg1 sshKeyDirectory:(id)arg2;
- (id)initWithJSONData:(id)arg1 sshKeyDirectory:(id)arg2;
- (id)_dataFromString:(id)arg1;
- (id)_stringFromData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPrimaryRemoteRepository:(id)arg1 relativePathToProject:(id)arg2 remoteRepositories:(id)arg3 workingCopyStates:(id)arg4 workingCopyPaths:(id)arg5 workingCopyRepositoryLocations:(id)arg6 locations:(id)arg7 name:(id)arg8 favorite:(BOOL)arg9;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)remoteRepositoriesMissingFromWorkspace:(id)arg1;
- (void)mergeWithBlueprint:(id)arg1;
- (id)_repositoryLikeRepository:(id)arg1 inBlueprint:(id)arg2;
- (id)repositoryLikeRepository:(id)arg1;
- (id)repositoryForOrigin:(id)arg1;
- (id)_sortedRepositoriesFromSet:(id)arg1;
- (id)init;
- (id)checkForUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)validateAuthenticationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)workspaceForWorkingCopiesCreatedAtURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)createWorkingCopiesAtURL:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly) NSMapTable *revisions;
- (id)_sortedRemoteRepositoriesWithExpandedPaths:(id)arg1;
- (id)_expandedWorkingCopyPathsFromURL:(id)arg1;
@property(readonly) NSString *projectPath;
- (BOOL)_isValid;
- (id)__id;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

