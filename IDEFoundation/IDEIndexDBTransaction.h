//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEIndexDBSQLStream.h>

@class NSMutableArray;

@interface IDEIndexDBTransaction : IDEIndexDBSQLStream
{
    NSMutableArray *_runQueue;
    IDEIndexDBSQLStream *_parent;
    NSMutableArray *_dbFactories;
}

@property(retain, nonatomic) IDEIndexDBSQLStream *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)submit;
- (void)closeFactories;
- (id)newFactoryForTable:(id)arg1 columns:(id)arg2;
- (void)doBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long queueSize;
- (id)dbConnection;
- (id)init;

@end

