//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXInspectorPaneModule.h>

@class NSButton, NSMapTable, NSMutableArray, NSPopUpButton, NSString, NSTextField, NSTextView, PBXViewListView;

@interface PBXBuildRulesInspectorPane : PBXInspectorPaneModule
{
    NSPopUpButton *_buildRulesScopePopup;
    PBXViewListView *_buildRuleViewList;
    NSTextView *_commentsTextView;
    NSButton *_addRuleButton;
    NSButton *_removeRuleButton;
    NSTextField *_numRulesTextField;
    NSString *_specificationDomain;
    NSMutableArray *_targetBuildRules;
    NSMapTable *_viewToBuildRuleModuleMap;
    NSMapTable *_buildRulesToShownModules;
}

+ (unsigned long long)panelPosition;
+ (id)alternateLabel;
+ (id)label;
+ (id)inspectableClasses;
+ (BOOL)canInspectItems:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)removeBuildRule:(id)arg1;
- (void)addBuildRule:(id)arg1;
- (void)takeBuildRulesScopeFrom:(id)arg1;
- (void)currentInspectedItemsChanged:(id)arg1;
- (void)_setComments;
- (void)_moveBuildRule:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)update;
- (void)_createOrDestroySubmodulesToMatchBuildRules:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)viewDidLoad;
- (id)systemBuildRules;
- (id)targetBuildRules;
- (void)_setTargetBuildRules:(id)arg1;
- (id)allBuildRules;
- (id)target;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)deleteSubviews:(id)arg1 ofViewListView:(id)arg2;
- (BOOL)moveSubview:(id)arg1 ofViewListView:(id)arg2 toIndex:(unsigned long long)arg3;
- (BOOL)viewListView:(id)arg1 shouldMoveSubview:(id)arg2;
- (BOOL)viewListView:(id)arg1 shouldSelectSubview:(id)arg2;
- (void)_shouldCopySystemBuildRuleOrCancelSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)_shouldEditBuildRuleInBuildRuleModule:(id)arg1;

@end

