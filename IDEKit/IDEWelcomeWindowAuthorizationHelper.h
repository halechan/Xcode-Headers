//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEWelcomeWindowAuthorizationHelper : NSObject
{
}

+ (BOOL)isAuthorized;
+ (struct AuthorizationOpaqueRef *)acquireAuthorizationForRightString:(const char *)arg1 withPrompt:(const char *)arg2;
+ (void)releaseAuthorization;
+ (struct AuthorizationOpaqueRef *)_createAuthorizationForRightString:(const char *)arg1 withPrompt:(const char *)arg2;
+ (void)initialize;

@end
