//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTDeveloperAccountCredentialsManager : NSObject
{
    BOOL _wantsAllApplicationsToAccessKeychainItems;
    struct OpaqueSecKeychainRef *_keychain;
}

+ (id)defaultAccountCredentialsManager;
@property(nonatomic) BOOL wantsAllApplicationsToAccessKeychainItems; // @synthesize wantsAllApplicationsToAccessKeychainItems=_wantsAllApplicationsToAccessKeychainItems;
@property struct OpaqueSecKeychainRef *keychain; // @synthesize keychain=_keychain;
- (BOOL)deleteCredential:(id)arg1 error:(id *)arg2;
- (id)accountCredentialsFromUsername:(id)arg1 alternateDSID:(id)arg2 token:(id)arg3 successfullyPersisted:(char *)arg4 error:(id *)arg5;
- (id)accountCredentialsFromUsername:(id)arg1 password:(id)arg2 successfullyPersisted:(char *)arg3 error:(id *)arg4;
- (id)accountCredentialsFromCredentials:(id)arg1 withPassword:(id)arg2 successfullyPersisted:(char *)arg3 error:(id *)arg4;
- (id)accountCredentialsForUsername:(id)arg1 error:(id *)arg2;
- (id)initWithKeychain:(struct OpaqueSecKeychainRef *)arg1 wantsAllApplicationsToAccessKeychainItems:(BOOL)arg2;

@end

