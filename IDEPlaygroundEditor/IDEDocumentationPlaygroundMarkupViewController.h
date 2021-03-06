//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDEPlaygroundEditor/DVTInvalidation-Protocol.h>
#import <IDEPlaygroundEditor/_TtP9DVTMarkup28PlaygroundMarkupViewDelegate_-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, DVTStackBacktrace, IDEPlaygroundEditor, NSArray, NSString, _TtC9DVTMarkup20PlaygroundMarkupView;
@protocol IDEDocumentationPlaygroundMarkupViewControllerDelegate;

@interface IDEDocumentationPlaygroundMarkupViewController : NSViewController <_TtP9DVTMarkup28PlaygroundMarkupViewDelegate_, DVTInvalidation>
{
    DVTNotificationToken *_fontAndColorSettingsChangedNotificationToken;
    DVTNotificationToken *_viewFrameChangeNotificationToken;
    DVTObservingToken *_accessoryAnnotationWidthObservingToken;
    NSArray *_addedAccessibilityChildren;
    IDEPlaygroundEditor *_playgroundEditor;
    id <IDEDocumentationPlaygroundMarkupViewControllerDelegate> _delegate;
}

+ (void)initialize;
@property __weak id <IDEDocumentationPlaygroundMarkupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IDEPlaygroundEditor *playgroundEditor; // @synthesize playgroundEditor=_playgroundEditor;
- (void).cxx_destruct;
- (void)removeAccessibilityChildren;
- (void)addAccessibilityChildren;
- (void)handleInternalNavigationLink:(id)arg1;
- (void)playgroundMarkupView:(id)arg1 openLink:(id)arg2;
- (void)navigateToPageContext:(id)arg1;
- (void)navigateToPageWithIdentifier:(id)arg1;
- (void)navigateToPreviousPage;
- (void)navigateToNextPage;
- (void)navigateToLastPage;
- (void)navigateToFirstPage;
- (void)loadMarkdownString:(id)arg1 resourcesDirectory:(id)arg2 sharedResourcesDirectory:(id)arg3;
- (void)loadView;
- (void)_sizeToDoc;
- (id)playgroundContext;
- (id)playgroundDocument;
- (void)primitiveInvalidate;
- (id)initWithPlaygroundEditor:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(retain) _TtC9DVTMarkup20PlaygroundMarkupView *view; // @dynamic view;

@end

