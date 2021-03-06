//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDESceneKitEditor/NSOutlineViewDataSource-Protocol.h>
#import <IDESceneKitEditor/NSOutlineViewDelegate-Protocol.h>

@class DVTNotificationToken, DVTOneShotBlock, NSArray, NSOutlineView, NSString, NSView, SKEShaderEntryItem, _TtC17IDESceneKitEditor21SKEShaderSourceEditor;

@interface SKEShadableEditorMainViewController : IDEViewController <NSOutlineViewDelegate, NSOutlineViewDataSource>
{
    NSArray *_content;
    NSArray *_shadableContentsObservingTokens;
    DVTOneShotBlock *_cancellationTokens;
    NSOutlineView *entryPointsOutline;
    _TtC17IDESceneKitEditor21SKEShaderSourceEditor *_sourceEditor;
    NSView *_customView;
    NSArray *_shadableArray;
    SKEShaderEntryItem *_outlineRoot;
    DVTNotificationToken *_shadableCompilationDidFinishObservingToken;
    NSArray *_allIssues;
}

- (void).cxx_destruct;
- (void)shadableCompilationDidFinish:(id)arg1;
- (void)updateIssues;
- (unsigned long long)firstLineNumberMatchingString:(id)arg1 inString:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)shaderModifiersCountDidChange;
- (void)refreshEmptyContentString;
- (void)userChangedShadable:(id)arg1;
- (void)configureShadableList;
- (id)shadableMember;
@property(copy, nonatomic) NSArray *content;
- (void)viewDidLoad;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

