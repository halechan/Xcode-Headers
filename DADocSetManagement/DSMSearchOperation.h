//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class DSMQuery;

@interface DSMSearchOperation : NSOperation
{
    DSMQuery *_query;
}

+ (id)completedNotificationName;
@property(retain) DSMQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)postCompletedNotification:(id)arg1;
- (id)operationsForAllQueryTypes;

@end

