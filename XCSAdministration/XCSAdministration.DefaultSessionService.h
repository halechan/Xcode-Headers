//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSAdministration/_TtP17XCSAdministration14SessionService_-Protocol.h>

@interface XCSAdministration.DefaultSessionService : NSObject <_TtP17XCSAdministration14SessionService_>
{
    // Error parsing type: , name: directoryService
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (BOOL)switchToSessionForUsername:(id)arg1 error:(id *)arg2;
- (void)releaseSessionForUsername:(id)arg1;
- (id)sessionForUsername:(id)arg1;
- (id)initWithDirectoryService:(id)arg1;

@end
