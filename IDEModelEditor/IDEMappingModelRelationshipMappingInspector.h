//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEInspectorViewController.h>

@class NSArray, XDDevMappingModel;

@interface IDEMappingModelRelationshipMappingInspector : IDEInspectorViewController
{
    unsigned long long _valueExpressionChoice;
}

+ (id)keyPathsForValuesAffectingSortedEntityMappingNames;
+ (id)keyPathsForValuesAffectingSortedEntityMappings;
+ (id)keyPathsForValuesAffectingMappingModel;
@property unsigned long long valueExpressionChoice; // @synthesize valueExpressionChoice=_valueExpressionChoice;
@property(readonly) NSArray *sortedEntityMappingNames;
- (id)sortedEntityMappings;
@property(readonly) XDDevMappingModel *mappingModel;

@end

