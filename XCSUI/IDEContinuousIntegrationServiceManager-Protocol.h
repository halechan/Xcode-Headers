//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol IDEContinuousIntegrationServiceManager <NSObject>
@property(readonly, copy, nonatomic) NSArray *enabledAndDisabledServices;
@property(readonly, copy, nonatomic) NSArray *services;
- (void)removeService:(id)arg1 withCompletionBlock:(void (^)(id, BOOL, NSError *))arg2;
- (void)addService:(id)arg1 withCompletionBlock:(void (^)(id, BOOL, NSError *))arg2;
@end

