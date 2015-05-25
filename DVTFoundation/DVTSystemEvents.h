//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

@interface DVTSystemEvents : NSObject
{
    BOOL _systemNotificationsEnabled;
    NSObject<OS_dispatch_source> *_cache_event_source;
}

+ (void)stop;
+ (void)start;
- (void).cxx_destruct;
- (void)_stopEvents;
- (void)_startEvents;
- (id)_initInternal;
- (id)init;
- (void)_postNotificationWhenNotTerminating:(id)arg1 object:(id)arg2;
- (void)_applicationWillTerminate:(id)arg1;

@end

