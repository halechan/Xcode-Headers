//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBGHierarchyRequest, DBGRuntimeClasses, NSMutableArray, NSMutableDictionary;

@interface DBGHierarchyRequestStore : NSObject
{
    NSMutableArray *_enumerationQueue;
    DBGHierarchyRequest *_request;
    NSMutableDictionary *_topLevelGroups;
    NSMutableDictionary *_topLevelPropertyDescriptions;
    NSMutableDictionary *_identifierToObjectDescriptionMap;
    DBGRuntimeClasses *_runtimeClasses;
    NSMutableDictionary *_metaData;
}

+ (id)backingStoreWithRequest:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *metaData; // @synthesize metaData=_metaData;
@property(retain, nonatomic) DBGRuntimeClasses *runtimeClasses; // @synthesize runtimeClasses=_runtimeClasses;
@property(retain, nonatomic) NSMutableDictionary *identifierToObjectDescriptionMap; // @synthesize identifierToObjectDescriptionMap=_identifierToObjectDescriptionMap;
@property(retain, nonatomic) NSMutableDictionary *topLevelPropertyDescriptions; // @synthesize topLevelPropertyDescriptions=_topLevelPropertyDescriptions;
@property(retain, nonatomic) NSMutableDictionary *topLevelGroups; // @synthesize topLevelGroups=_topLevelGroups;
@property(retain, nonatomic) DBGHierarchyRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSMutableArray *enumerationQueue; // @synthesize enumerationQueue=_enumerationQueue;
- (void).cxx_destruct;
- (id)recursiveDescription;
- (id)dictionaryRepresentation;
- (void)logRequestErrorWithTitle:(id)arg1 message:(id)arg2 fromMethod:(const char *)arg3;
- (void)addProperties:(id)arg1 toObject:(id)arg2;
- (void)_addDebugHierarchyObjectDict:(id)arg1 toGroupWithID:(id)arg2 asDirectChild:(BOOL)arg3 belowParent:(id)arg4;
- (void)_addDebugHierarchyObject:(id)arg1 withDict:(id)arg2 toTopLevelGroupWithID:(id)arg3;
- (void)addReferencedDebugHierarchyObject:(id)arg1 withVisibility:(long long)arg2 toGroupWithID:(id)arg3 asDirectChild:(BOOL)arg4 belowParent:(id)arg5;
- (void)addDebugHierarchyObject:(id)arg1 withVisibility:(long long)arg2 toGroupWithID:(id)arg3 asDirectChild:(BOOL)arg4 belowParent:(id)arg5;
- (BOOL)hasAlreadyFetchedDebugHierarchyObject:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end

