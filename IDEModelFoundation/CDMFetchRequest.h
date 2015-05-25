//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CDMIdentification.h"
#import "DVTInvalidation.h"
#import "IDEInspectorAccessibilitySupport.h"
#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class CDMEntity, CDMModel, DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, IDEFileReference, NSImage, NSNumber, NSString;

@interface CDMFetchRequest : NSObject <IDEInspectorAccessibilitySupport, CDMIdentification, DVTInvalidation, IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSString *name;
    CDMEntity *entity;
    NSString *predicateString;
    unsigned long long fetchLimit;
    unsigned long long fetchOffset;
    unsigned long long fetchBatchSize;
    BOOL includeSubentities;
    BOOL includePropertyValues;
    BOOL includesPendingChanges;
    BOOL returnObjectsAsFaults;
    BOOL returnDistinctResults;
    CDMModel *model;
    long long resultType;
    NSNumber *uniqueID;
}

+ (id)fetchRequestFromPasteboardPlist:(id)arg1 model:(id)arg2;
+ (void)initialize;
@property(copy) NSNumber *uniqueID; // @synthesize uniqueID;
@property(nonatomic) long long resultType; // @synthesize resultType;
@property(retain) CDMModel *model; // @synthesize model;
@property(nonatomic) BOOL returnDistinctResults; // @synthesize returnDistinctResults;
@property(nonatomic) BOOL returnObjectsAsFaults; // @synthesize returnObjectsAsFaults;
@property(nonatomic) BOOL includesPendingChanges; // @synthesize includesPendingChanges;
@property(nonatomic) BOOL includePropertyValues; // @synthesize includePropertyValues;
@property(nonatomic) BOOL includeSubentities; // @synthesize includeSubentities;
@property(nonatomic) unsigned long long fetchBatchSize; // @synthesize fetchBatchSize;
@property(nonatomic) unsigned long long fetchOffset; // @synthesize fetchOffset;
@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit;
@property(copy, nonatomic) NSString *predicateString; // @synthesize predicateString;
@property(retain, nonatomic) CDMEntity *entity; // @synthesize entity;
@property(copy, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;
- (id)stringRepresentationForTextIndex;
- (id)stringRepresentation;
- (id)xmlElementDescription;
- (id)xmlElementAttributes;
- (void)stitchToRelatedModelElements;
- (id)initWithXMLElementDescription:(id)arg1 belongingToModel:(id)arg2;
@property(readonly) NSString *navigableItem_name;
- (id)addKeysToDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 inModel:(id)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)undoManager;
- (void)cascadeChangesToLegacyFetchRequest:(id)arg1 givenModernToLegacyEntityMapping:(id)arg2;
- (id)initWithLegacyFetchRequest:(id)arg1 andEntityMapping:(id)arg2 belongingToModel:(id)arg3;
- (id)initWithName:(id)arg1 belongingToModel:(id)arg2 targettingEntity:(id)arg3;
- (id)init;
- (void)_commonInitInModel:(id)arg1;
- (void)primitiveInvalidate;
- (void)_registerUndoBlockForFetchRequest:(CDUnknownBlockType)arg1;
- (id)humanReadableNameForInspectorKeyPath:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

