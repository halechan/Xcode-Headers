//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTSourceControlHostedAccount/DVTSourceControlHostedAccount.ServicesContext.h>

@class NSDictionary, NSString;

@interface DVTSourceControlHostedAccount.GitHubPersonalAccessTokenRequest : DVTSourceControlHostedAccount.ServicesContext
{
    // Error parsing type: , name: twoFactorCode
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 twoFactorCode:(id)arg2;
@property(nonatomic, readonly) NSDictionary *body;
@property(nonatomic, readonly) NSDictionary *headerProperties;
@property(nonatomic, readonly) NSString *endpoint;

@end

