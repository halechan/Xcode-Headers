//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DevToolsCore/PBXTarget.h>

#import <XCBuildSupport/IDEPIFObject-Protocol.h>

@class NSString;

@interface PBXTarget (IDEPIFGenerationCategories) <IDEPIFObject>
+ (id)pifObjectTypeName;
- (id)pifRepresentation:(id)arg1;
- (id)pifSubobjects;
- (id)pifInfoForSerializer:(id)arg1;
- (id)typeForPIFRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
