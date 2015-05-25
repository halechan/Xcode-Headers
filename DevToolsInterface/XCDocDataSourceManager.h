//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface XCDocDataSourceManager : NSObject
{
    NSMutableDictionary *_resultsDictionary;
    NSDictionary *_testingDictionary;
    BOOL _inTestMode;
    unsigned long long _numberOfDocSetsInCurrentAPISearch;
    double _time;
}

+ (id)sharedDocDataSourceManager;
+ (void)initialize;
- (BOOL)isInTestMode;
- (void)setInTestMode:(BOOL)arg1;
- (void)setTestingDictionary:(id)arg1;
- (id)testingDictionary;
- (id)documentationBookmarkForSymbol:(id)arg1;
- (BOOL)documentationExistsForSymbol:(id)arg1;
- (BOOL)_searchDocSetsForTokenID:(id)arg1;
- (id)appleRefForSymbol:(id)arg1;
- (id)fetchResultsWithQueryDictionary:(id)arg1;
- (id)firstDocSetWithReferenceForAppleRef:(id)arg1 project:(id)arg2;
- (id)_firstDocSetWithReferenceForAppleRef:(id)arg1 resultRecords:(id *)arg2 project:(id)arg3;
- (id)_firstDocSetWithReferenceForSymbol:(id)arg1 resultRecords:(id *)arg2 project:(id)arg3;
- (void)notifyfetchDidFinish;
- (void)notifyfetchDidStart;
- (id)_availabilityVersionStatementsForToken:(id)arg1 architectures:(id)arg2;
- (BOOL)_loadTestDataFromPlist;
- (void)dealloc;
- (id)init;

@end

