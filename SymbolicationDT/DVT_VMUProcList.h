//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMapTable;

@interface DVT_VMUProcList : NSObject
{
    NSLock *procLock;
    NSMapTable *allProcs;
    NSMapTable *filteredProcs;
    BOOL appsOnly;
    BOOL ownedOnly;
}

- (id)procInfoWithPID:(int)arg1;
- (id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2;
- (id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2 withContext:(void *)arg3;
- (id)newestProcInfoWithName:(id)arg1;
- (id)newestProcInfo;
- (id)allPathNames;
- (id)allNames;
- (id)allPIDs;
- (id)allProcInfos;
- (unsigned long long)count;
- (BOOL)appsOnly;
- (void)setAppsOnly:(BOOL)arg1;
- (BOOL)ownedOnly:(BOOL)arg1;
- (void)setOwnedOnly:(BOOL)arg1;
- (BOOL)updateFromSystem;
- (void)_populateFromSystem;
- (BOOL)update;
- (void)removeProcInfo:(id)arg1;
- (void)addProcInfo:(id)arg1;
- (void)setProcInfos:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

