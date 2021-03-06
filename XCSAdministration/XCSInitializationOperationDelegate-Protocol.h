//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSAdministration/NSObject-Protocol.h>

@class NSError, XCSInitializationOperation;

@protocol XCSInitializationOperationDelegate <NSObject>
- (void)initializationOperation:(XCSInitializationOperation *)arg1 didFailWithError:(NSError *)arg2;
- (void)initializationOperationDidFinish:(XCSInitializationOperation *)arg1;
- (void)initializationOperationDidUpdateProgress:(XCSInitializationOperation *)arg1 percentage:(unsigned long long)arg2;
- (void)initializationOperationWillBegin:(XCSInitializationOperation *)arg1;
- (BOOL)initializationOperationShouldBegin:(XCSInitializationOperation *)arg1;
@end

