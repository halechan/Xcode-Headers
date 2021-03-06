//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSURLConnectionDataDelegate-Protocol.h>

@class NSError, NSMutableData, NSString, NSURLCredential, NSURLRequest, NSURLResponse;

@interface DVTDeveloperPortalServiceConnection : NSObject <NSURLConnectionDataDelegate>
{
    NSURLRequest *_request;
    NSURLCredential *_credential;
    NSError *_error;
    NSURLResponse *_response;
    NSMutableData *_responseData;
    CDUnknownBlockType _completionHandler;
}

+ (id)urlSessionForCredential:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)_finishWithResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)sendAsyncRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)sendRequestWithResponse:(id *)arg1 error:(id *)arg2;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

