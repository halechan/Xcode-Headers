//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBICCatalogMutator : NSObject
{
}

+ (void)applyMutatorsToModelOutsideOfDocumentContext:(id)arg1;
+ (id)fileManager;
+ (Class)fileManagerClass;
+ (void)setFileManagerClass:(Class)arg1;
+ (void)initialize;
- (id)updateDiskMutationResult:(id)arg1 byUpdatingManifestData:(id)arg2 atPath:(id)arg3 error:(id *)arg4;
- (BOOL)isNoOp;
@property(readonly) NSString *mutationDescription;
- (id)inverseMutator;
- (void)applyToDiskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)applyToModel;
- (id)fileManager;

@end

