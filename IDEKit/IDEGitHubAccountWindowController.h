//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/AKPinFieldViewDelegate-Protocol.h>

@class AKPinFieldView, GitHubAccount, NSButton, NSProgressIndicator, NSSecureTextField, NSString, NSTextField, NSView, NSWindow;
@protocol DVTSourceControlCancellable;

@interface IDEGitHubAccountWindowController : NSWindowController <AKPinFieldViewDelegate>
{
    CDUnknownBlockType _completion;
    IDEGitHubAccountWindowController *_currentWindowController;
    GitHubAccount *_account;
    id <DVTSourceControlCancellable> _currentOperation;
    BOOL _didCancel;
    AKPinFieldView *pinFieldView;
    id <DVTSourceControlCancellable> _resendAuthCodeOperation;
    BOOL _authenticating;
    BOOL _enterpriseAccount;
    GitHubAccount *_lockedAccount;
    NSWindow *_hostWindow;
    NSTextField *_urlTextField;
    NSTextField *_accountTextField;
    NSSecureTextField *_passwordTextField;
    NSView *_enterpriseURLView;
    NSView *_credentialsView;
    NSView *_authCodeView;
    NSProgressIndicator *_loadingProgressIndicator;
    NSView *_errorView;
    NSString *_urlStringValue;
    NSString *_accountStringValue;
    NSString *_passwordStringValue;
    NSView *_twoFactorView;
    NSProgressIndicator *_resendAuthCodeProgressIndicator;
    NSButton *_resendAuthCodeButton;
    NSButton *_forgotPasswordButton;
    NSTextField *_errorTextField;
    NSTextField *_mainTitleTextField;
}

+ (id)keyPathsForValuesAffectingSignInEnabled;
@property __weak NSTextField *mainTitleTextField; // @synthesize mainTitleTextField=_mainTitleTextField;
@property __weak NSTextField *errorTextField; // @synthesize errorTextField=_errorTextField;
@property __weak NSButton *forgotPasswordButton; // @synthesize forgotPasswordButton=_forgotPasswordButton;
@property __weak NSButton *resendAuthCodeButton; // @synthesize resendAuthCodeButton=_resendAuthCodeButton;
@property __weak NSProgressIndicator *resendAuthCodeProgressIndicator; // @synthesize resendAuthCodeProgressIndicator=_resendAuthCodeProgressIndicator;
@property __weak NSView *twoFactorView; // @synthesize twoFactorView=_twoFactorView;
@property(retain, nonatomic) NSString *passwordStringValue; // @synthesize passwordStringValue=_passwordStringValue;
@property(retain, nonatomic) NSString *accountStringValue; // @synthesize accountStringValue=_accountStringValue;
@property(retain, nonatomic) NSString *urlStringValue; // @synthesize urlStringValue=_urlStringValue;
@property __weak NSView *errorView; // @synthesize errorView=_errorView;
@property __weak NSProgressIndicator *loadingProgressIndicator; // @synthesize loadingProgressIndicator=_loadingProgressIndicator;
@property __weak NSView *authCodeView; // @synthesize authCodeView=_authCodeView;
@property __weak NSView *credentialsView; // @synthesize credentialsView=_credentialsView;
@property __weak NSView *enterpriseURLView; // @synthesize enterpriseURLView=_enterpriseURLView;
@property __weak NSSecureTextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property __weak NSTextField *accountTextField; // @synthesize accountTextField=_accountTextField;
@property __weak NSTextField *urlTextField; // @synthesize urlTextField=_urlTextField;
@property(nonatomic) __weak NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(nonatomic) BOOL enterpriseAccount; // @synthesize enterpriseAccount=_enterpriseAccount;
- (void).cxx_destruct;
- (void)helpClick:(id)arg1;
- (void)cancelClick:(id)arg1;
- (id)_accountFromInput;
- (void)displayPinEntry:(BOOL)arg1;
- (void)sendPinCodeFromCurrentDetails:(BOOL)arg1;
- (void)_hideError;
- (void)_displayError:(id)arg1;
- (void)signInClick:(id)arg1;
@property(nonatomic) BOOL authenticating; // @synthesize authenticating=_authenticating;
- (id)enterpriseURL;
- (void)pinFieldViewTextDidChange:(id)arg1;
- (void)pinFieldViewTextDidComplete:(id)arg1;
- (long long)currentStep;
- (void)_endSheet:(long long)arg1 withAccount:(id)arg2;
- (void)beginSheetModalForWindow:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)windowNibName;
@property(readonly, nonatomic) BOOL signInEnabled;
- (void)forgotPasswordClick:(id)arg1;
@property(retain, nonatomic) GitHubAccount *lockedAccount; // @synthesize lockedAccount=_lockedAccount;
- (void)resendAuthCode:(id)arg1;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
