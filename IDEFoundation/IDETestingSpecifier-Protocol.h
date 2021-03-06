//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class IDEDeviceAppDataReference, IDELocationScenarioReference, IDEScheme, IDETest, NSArray, NSSet;
@protocol IDETestable;

@protocol IDETestingSpecifier <NSObject>
@property(readonly, copy) NSSet *adHocTests;
@property(readonly, copy) NSArray *skippedTests;
@property BOOL skipped;
@property(retain) IDELocationScenarioReference *locationScenarioReference;
@property(retain) IDEDeviceAppDataReference *deviceAppDataReference;
@property(readonly) IDEScheme *scheme;
- (void)disableTest:(IDETest *)arg1;
- (void)enableTest:(IDETest *)arg1;
- (id <IDETestable>)testable;
@end

