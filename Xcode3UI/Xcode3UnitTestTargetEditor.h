//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEViewController.h"

#import "IDECapsuleListViewDataSource.h"

@class DVTStackView_ML, IDECapsuleListView, IDETestTargetSelectorViewController, NSString, NSView, Xcode3TargetEditor, Xcode3TargetEditorCapsuleViewController;

@interface Xcode3UnitTestTargetEditor : IDEViewController <IDECapsuleListViewDataSource>
{
    id _targetViewController;
    IDECapsuleListView *_capsuleListView;
    Xcode3TargetEditorCapsuleViewController *_testTargetCapsuleViewController;
    DVTStackView_ML *_testTargetCapsuleStackView;
    NSView *_testTargetCapsuleBottomPadding;
    IDETestTargetSelectorViewController *_testTargetSelector;
}

@property(retain) IDETestTargetSelectorViewController *testTargetSelector; // @synthesize testTargetSelector=_testTargetSelector;
@property(retain) NSView *testTargetCapsuleBottomPadding; // @synthesize testTargetCapsuleBottomPadding=_testTargetCapsuleBottomPadding;
@property(retain) DVTStackView_ML *testTargetCapsuleStackView; // @synthesize testTargetCapsuleStackView=_testTargetCapsuleStackView;
@property(retain) Xcode3TargetEditorCapsuleViewController *testTargetCapsuleViewController; // @synthesize testTargetCapsuleViewController=_testTargetCapsuleViewController;
@property(retain) IDECapsuleListView *capsuleListView; // @synthesize capsuleListView=_capsuleListView;
@property(retain, nonatomic) id targetViewController; // @synthesize targetViewController=_targetViewController;
- (void).cxx_destruct;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (void)primitiveInvalidate;
@property(readonly) Xcode3TargetEditor *targetEditor;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

