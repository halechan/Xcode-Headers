//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBPlatform.h"

@interface IBCocoaPlatform : IBPlatform
{
}

- (BOOL)supportsLaunchScreen;
- (Class)previewGeniusResultsItemGroupClass;
- (id)xibPackageContentFileNames;
- (id)typeIdentifierForPreservingContentsWhenWritingDocument;
- (id)xibHybridPackageType;
- (id)xibHybridPackageEditableDocumentFilename;
- (id)xibPreferredFileType;
- (Class)userDefinedRuntimeAttributesPlaceholderClass;
- (Class)fallbackSegueClassForUnknownSegueKind;
- (Class)simulatedMetricsContainerClass;
- (id)containerObserverForInterfaceBuilderDocumentsIdentifier;
- (Class)resourceManagerClass;
- (void)prepareToDecodeDocumentContentWithKeyedUnarchiver:(id)arg1;
- (void)prepareToDecodeDocumentContentWithTypeStreamedUnarchiver:(id)arg1;
- (Class)designedClassForEncodedClassName:(id)arg1;
- (id)standinNSIBClassesByRuntimeClassName;
- (id)standinIBNSClasses;
- (void)unarchivePlatformDependentDocumentManagedDataForObject:(id)arg1 withDocumentUnarchiver:(id)arg2;
- (void)archivePlatformDependentDocumentManagedDataForObject:(id)arg1 withDocumentArchiver:(id)arg2;
- (id)autolayoutDescriptiveTextForPriority:(float)arg1;
- (id)autolayoutStatusRequesterForTargetRuntime:(id)arg1 liveViewsManager:(id)arg2;
- (Class)arbitrationUnitClass;
- (Class)autolayoutEngineClass;
- (BOOL)hasRemoteSimulator;
- (long long)autolayoutMinSystemVersion;
- (void)populateAdditionalSearchableAttributeKeyPaths:(id)arg1 ofClass:(Class)arg2 forInspectorCategory:(id)arg3;
- (void)populateAdditionalInspectors:(id)arg1 ofClass:(Class)arg2 forCategory:(id)arg3;
- (id)classNamesThatDoNotSupportZeroingWeakReferences;
- (id)bonusedClassNamesForGeniusOrdering;
- (id)penalizedClassNamesForGeniusOrdering;
- (id)ignoredConnectionLabelsForGeniusOrdering;
- (long long)defaultStorageTypeForMRROutlets;
- (Class)actionConnectionClass;
- (BOOL)connectToSourceCodeShouldReleaseInstanceVariables;
- (BOOL)connectToSourceCodeShouldInsertNonAtomicProperties;
- (id)firstOSVersionWithWeakReferences;
- (id)xibApplicationMemberID;
- (id)xibFirstResponderMemberID;
- (id)xibFilesOwnerMemberID;
- (id)segueTemplateToControllerKeyPath;
- (id)defaultStoryboardSegueClassName;
- (long long)allSystemsTarget;
- (id)defaultTargetRuntimeForArchiving;
- (Class)idiomClass;
- (Class)targetRuntimeClass;
- (id)targetRuntimes;
- (id)targetRuntimeWithArchiveIdentifier:(id)arg1 variantIdentifier:(id)arg2;
- (id)targetRuntimeWithIdentifier:(id)arg1;
- (BOOL)downgradingToAutoIncrementingIDsIsEnabled;
- (BOOL)shouldOpenDocument:(id)arg1 error:(id *)arg2;
- (id)systemDocumentDependency;
- (id)interfaceBuilderDocumentDependency;
- (id)deploymentVersionBuildSetting;
- (id)buildSettingIdentifier;
- (id)baseInterfaceBuilderDocumentType;
- (Class)documentPlatformAdapterClass;
- (id)operatingSystemName;
- (id)identifier;

@end

