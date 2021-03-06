//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class DVTObservingToken, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IDEDeviceActivityReporter : IDEActivityReporter
{
    NSMutableDictionary *_deviceToObservers;
    NSMutableDictionary *_deviceToOperationReports;
    DVTObservingToken *_deviceObserver;
    NSObject<OS_dispatch_queue> *_observerQueue;
}

- (void).cxx_destruct;
- (void)_stopObservingDevices:(id)arg1;
- (void)_observeDevice:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end

