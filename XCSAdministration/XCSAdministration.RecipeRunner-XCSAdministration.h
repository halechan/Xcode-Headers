//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSAdministration/XCSAdministration.RecipeRunner.h>

#import <XCSAdministration/XCSInitializationOperationDelegate-Protocol.h>

@interface XCSAdministration.RecipeRunner (XCSAdministration) <XCSInitializationOperationDelegate>
- (void)initializationOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)initializationOperationDidFinish:(id)arg1;
- (void)initializationOperationDidUpdateProgress:(id)arg1 percentage:(unsigned long long)arg2;
- (void)initializationOperationWillBegin:(id)arg1;
- (BOOL)initializationOperationShouldBegin:(id)arg1;
@end

