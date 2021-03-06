//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSMutableArray, NSNumber, NSString, XCSCodeCoverageKeyPath;

@interface XCSCodeCoverageObject : XCSObject
{
    NSMutableArray *codeCoverageDevices;
    NSString *_title;
    NSNumber *_lineCoveragePercentageAggregate;
    NSNumber *_lineCoveragePercentageDeltaAggregate;
    id _parent;
}

@property(nonatomic) __weak id parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSNumber *lineCoveragePercentageDeltaAggregate; // @synthesize lineCoveragePercentageDeltaAggregate=_lineCoveragePercentageDeltaAggregate;
@property(retain, nonatomic) NSNumber *lineCoveragePercentageAggregate; // @synthesize lineCoveragePercentageAggregate=_lineCoveragePercentageAggregate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_deviceTinyIDs;
- (void)_bindHierarchyWithIntegration:(id)arg1 parentObject:(id)arg2;
- (BOOL)_validateWithDevice:(id)arg1 lineCoveragePercentage:(id)arg2 lineCoveragePercentageDelta:(id)arg3 validationErrors:(id *)arg4;
- (BOOL)_validateWithTitle:(id)arg1 lineCoveragePercentage:(id)arg2 lineCoveragePercentageDelta:(id)arg3 devices:(id)arg4 validationErrors:(id *)arg5;
- (id)description;
- (id)saveRepresentationHumanReadable:(BOOL)arg1 discardDeviceData:(BOOL)arg2;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)setDeviceCoverage:(id)arg1 lineCoveragePercentage:(id)arg2 lineCoveragePercentageDelta:(id)arg3 validationErrors:(id *)arg4;
@property(readonly, nonatomic) NSArray *codeCoverageDevices;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) XCSCodeCoverageKeyPath *keyPath;
- (id)_initWithTitle:(id)arg1 lineCoveragePercentage:(id)arg2 lineCoveragePercentageDelta:(id)arg3 devices:(id)arg4 skipValidation:(BOOL)arg5 skipBindHierarchy:(BOOL)arg6 validationErrors:(id *)arg7;
- (id)initWithContents:(id)arg1 service:(id)arg2 skipValidation:(BOOL)arg3 skipBindHierarchy:(BOOL)arg4 validationErrors:(id *)arg5;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

@end

