//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DBGRuntimeClasses : NSObject
{
    NSMutableDictionary *_classMap;
}

+ (id)classesWithSerializedRepresentation:(id)arg1;
@property(retain) NSMutableDictionary *classMap; // @synthesize classMap=_classMap;
- (void).cxx_destruct;
- (id)_describeTreeWithRoot:(id)arg1 depth:(unsigned long long)arg2 description:(id)arg3;
- (id)debugDescription;
- (void)clearData;
- (void)_recursivelyMergeInClassDescription:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)_topLevelClasses;
- (id)serializedRepresentation;
- (void)_recursivelyIndexClassDescription:(id)arg1;
- (void)_reindexAllClasses;
- (id)classForName:(id)arg1;
- (void)addRuntimeClassIfNecessary:(Class)arg1;
- (void)addClass:(id)arg1 toSuperclass:(id)arg2;
- (id)init;
- (id)initWithSerializedRepresentation:(id)arg1;

@end
