//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSSet, NSString, XCPropertyExpansionContext;

@interface XCPropertyInfoContext : NSObject
{
    NSMutableArray *_propertyDictionaries;
    unsigned long long _propertyDictTierStartIndices[12];
    unsigned long long _propertyDictLevelIndices[21];
    NSString *_associatedConfigName;
    int _defaultEditingLevel;
    NSSet *_allPropertyNames;
    XCPropertyExpansionContext *_expansionContext;
}

- (id)platformSpecificArchitectures;
- (id)conditionalPropertyNamesForDefinitionLevel:(int)arg1;
- (id)longDescription;
- (id)description;
- (BOOL)propertyIsEnabled:(id)arg1;
- (BOOL)propertyIsEnabled:(id)arg1 reasons:(id *)arg2;
- (BOOL)propertyIsDefined:(id)arg1;
- (void)willBeDiscarded;
- (void)_buildSettingsDictionaryChanged:(id)arg1;
- (void)_buildSettingsDictionaryWillBeRemoved:(id)arg1;
- (void)_buildSettingsDictionaryWasAdded:(id)arg1;
- (id)effectivePlatform;
- (id)conditionFlavorsForPropertyDefinitionNamed:(id)arg1 inPropertyDomain:(id)arg2;
- (id)propertyDefinitionForName:(id)arg1 inPropertyDomain:(id)arg2;
- (id)propertyDefinitionsForName:(id)arg1;
- (id)propertyDefinitionsInPropertyDomain:(id)arg1;
- (id)allPropertyDefinitions;
- (id)propertyDomains;
- (id)expandedValueForString:(id)arg1 withConditionSet:(id)arg2;
- (id)expandedValueForString:(id)arg1;
- (id)propertyExpansionContextWithConditionSet:(id)arg1;
- (id)propertyExpansionContext;
- (void)removePropertyName:(id)arg1;
- (void)removePropertyName:(id)arg1 conditionSet:(id)arg2;
- (void)removePropertyName:(id)arg1 conditionSet:(id)arg2 atDefinitionLevel:(int)arg3;
- (void)setValue:(id)arg1 forPropertyName:(id)arg2;
- (void)setValue:(id)arg1 forPropertyName:(id)arg2 conditionSet:(id)arg3;
- (void)setValue:(id)arg1 forPropertyName:(id)arg2 conditionSet:(id)arg3 atDefinitionLevel:(int)arg4;
- (void)setDefaultEditingLevel:(int)arg1;
- (int)defaultEditingLevel;
- (id)valueForPropertyNamed:(id)arg1 atDefinitionLevel:(int)arg2;
- (id)valueForPropertyNamed:(id)arg1 conditionSet:(id)arg2 atDefinitionLevel:(int)arg3;
- (id)definitionLevelsOfPropertyNamed:(id)arg1;
- (id)definitionLevelsOfPropertyNamed:(id)arg1 conditionSet:(id)arg2;
- (int)highestDefinitionLevelOfPropertyNamed:(id)arg1;
- (int)highestDefinitionLevelOfPropertyNamed:(id)arg1 conditionSet:(id)arg2;
- (id)_definitionLevelsOfPropertyNamed:(id)arg1 conditionSet:(id)arg2 firstOnly:(BOOL)arg3;
- (id)dictionaryAtDefinitionLevel:(int)arg1;
- (id)propertyNamesDefinedForConditionSet:(id)arg1 atDefinitionLevel:(int)arg2;
- (id)propertyNamesDefinedForConditionSet:(id)arg1;
- (id)conditionSetsForPropertyName:(id)arg1 atDefinitionLevel:(int)arg2;
- (id)conditionSetsForPropertyName:(id)arg1;
- (id)allPropertyNamesInDictionaryAtDefinitionLevel:(int)arg1;
- (id)allPropertyNamesInAllDictionaries;
- (void)setAssociatedConfigurationName:(id)arg1;
- (id)associatedConfigurationName;
- (id)propertyDictionariesAtTier:(int)arg1;
- (id)_propertyDictionariesAtTierNoUpdate:(int)arg1;
- (void)setPropertyDictionariesFromNSDictionariesInArray:(id)arg1 atTier:(int)arg2;
- (void)removePropertyDictionariesAtTier:(int)arg1;
- (void)popPropertyDictionaryAtTier:(int)arg1;
- (BOOL)pushPropertyDictionaries:(id)arg1 atTier:(int)arg2;
- (BOOL)pushPropertyDictionary:(id)arg1 atTier:(int)arg2;
- (void)popEnvironmentDictionary;
- (void)pushEnvironmentDictionary:(id)arg1;
- (void)popDefaultsDictionary;
- (void)pushDefaultsDictionary:(id)arg1;
- (void)popSDKDictionary;
- (void)pushSDKDictionary:(id)arg1;
- (void)popProductDictionary;
- (void)pushProductDictionary:(id)arg1;
- (void)popProjectDefaultsDictionary;
- (void)pushProjectDefaultsDictionary:(id)arg1;
- (void)popSettingsDictionary;
- (void)pushSettingsDictionary:(id)arg1;
- (void)popOverridesDictionary;
- (void)pushOverridesDictionary:(id)arg1;
- (void)_invalidateCaches;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

