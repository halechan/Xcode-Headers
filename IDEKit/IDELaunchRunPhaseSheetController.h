//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import "IDECapsuleListViewDataSource.h"

@class DVTBorderedView, DVTChoice, DVTFilePathFieldCell, DVTNotificationToken, DVTObservingToken, DVTStackView_AppKitAutolayout, DVTStackView_ML, DVTTabChooserView, IDEArgumentsCapsuleSheetController, IDECapsuleListView, IDEDebuggerSpecifier, IDEEnvironmentVariablesCapsuleSheetController, IDELaunchSchemeAction, IDEScheme, NSButton, NSButtonCell, NSColor, NSMatrix, NSMutableArray, NSPopUpButton, NSString, NSTabView, NSTextField, NSTextView, NSView;

@interface IDELaunchRunPhaseSheetController : IDEViewController <IDECapsuleListViewDataSource>
{
    DVTTabChooserView *_tabChooser;
    IDECapsuleListView *_capsuleListView;
    DVTBorderedView *_optionsBorderedView;
    NSPopUpButton *_runnablePopUp;
    NSMatrix *_debugProcessAsMatrix;
    NSButtonCell *_debugProcessAsMeButtonCell;
    NSMatrix *_launchStyleMatrix;
    NSButtonCell *_waitForAppToLaunchButtonCell;
    DVTFilePathFieldCell *_workingDirectoryTextFieldCell;
    NSView *_infoTabViewContentView;
    NSView *_diagnosticsTabViewContentView;
    NSPopUpButton *_macroExpansionRunnableBuildablesPopUp;
    NSTextField *_macroExpansionDescription;
    DVTStackView_ML *_optionsStackView;
    NSTextView *_customLaunchCommandsTextView;
    NSButton *_debugExecutableCheckbox;
    NSTabView *_tabView;
    DVTStackView_AppKitAutolayout *_infoStackView;
    NSView *_executable_buildConfiguration;
    NSView *_executable_runnable;
    NSView *_executable_user;
    NSView *_executable_launchStyle;
    NSView *_watchLaunchSettingsView;
    NSPopUpButton *_watchInterfacePopup;
    NSPopUpButton *_notificationPayloadPopup;
    DVTChoice *_infoChoice;
    DVTChoice *_conditionsChoice;
    DVTChoice *_optionsChoice;
    DVTChoice *_diagnosticsChoice;
    DVTChoice *_debuggingChoice;
    NSColor *_descriptionTextColor;
    NSColor *_debugAsRootDescriptionTextColor;
    IDEScheme *_runContext;
    IDELaunchSchemeAction *_runPhase;
    int _launchStyleWhenDebuggerSetToNil;
    NSMutableArray *_launchActionViewControllers;
    BOOL _isSupportedApplicationData;
    BOOL _optionsUpdatedInCurrentRunLoop;
    DVTObservingToken *_runDestinationObservingToken;
    DVTObservingToken *_runnableBuildableProductsObservingToken;
    DVTObservingToken *_runContextRunnableObservingToken;
    DVTObservingToken *_debugAsEnablementObservingToken;
    DVTObservingToken *_tabChooserSelectionObservingToken;
    DVTObservingToken *_runPhaseObservingToken;
    DVTNotificationToken *_buildablesToken;
    IDEArgumentsCapsuleSheetController *_argumentsViewController;
    IDEEnvironmentVariablesCapsuleSheetController *_environmentVariablesViewController;
    unsigned long long _runnablePopUpRunnableBuildableProductsCount;
    BOOL _runnablePopUpHasCustomRunnable;
    BOOL _executableHasBeenSelected;
    BOOL _debuggerHasBeenSelected;
    BOOL _supportsDebugAsDifferentUser;
}

+ (id)keyPathsForValuesAffectingLaunchStyleIsCustomLaunchCommands;
+ (id)keyPathsForValuesAffectingExecutableHasBeenSelected;
+ (id)keyPathsForValuesAffectingDebuggerHasBeenSelected;
+ (void)initialize;
@property(retain) IDELaunchSchemeAction *runPhase; // @synthesize runPhase=_runPhase;
@property(retain) IDEScheme *runContext; // @synthesize runContext=_runContext;
@property(copy) NSColor *debugAsRootDescriptionTextColor; // @synthesize debugAsRootDescriptionTextColor=_debugAsRootDescriptionTextColor;
@property(copy) NSColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
@property BOOL supportsDebugAsDifferentUser; // @synthesize supportsDebugAsDifferentUser=_supportsDebugAsDifferentUser;
@property(nonatomic) BOOL debuggerHasBeenSelected; // @synthesize debuggerHasBeenSelected=_debuggerHasBeenSelected;
@property(nonatomic) BOOL executableHasBeenSelected; // @synthesize executableHasBeenSelected=_executableHasBeenSelected;
@property(retain) DVTTabChooserView *tabChooser; // @synthesize tabChooser=_tabChooser;
- (void).cxx_destruct;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (id)workspace;
- (id)DVTFilePathFieldCell:(id)arg1 resolvedPathForPath:(id)arg2;
- (void)DVTFilePathFieldCell:(id)arg1 chooserSelectedPath:(id)arg2;
- (void)_resetOptionsUpdatedFlag;
- (void)_updateSupportedOptions;
- (id)_allOptions;
- (void)_macroExpansionRunnableBuildableSelected:(id)arg1;
- (void)_updateMacroExpansionDescriptionForSelectedItem;
- (void)_updateMacroExpansionRunnablePopUpSelection;
- (void)_updateMacroExpansionRunnablePopUp;
- (void)_updateRunnablePopUp;
- (void)_runnableBuildableProductsDidChange;
- (void)_updateInfoTab;
- (void)_updateWatchSettings;
- (BOOL)_runnableIsWatchApp;
- (void)_addMenuItemForBuildableProduct:(id)arg1 menu:(id)arg2;
- (void)_addMenuItemForWatchInterfaceMenu:(id)arg1 tag:(long long)arg2;
- (void)_updateDebuggerSpecifierAndOtherOptions;
- (void)_notificationPayloadSelected:(id)arg1;
- (void)watchInterfaceSelected:(id)arg1;
- (void)_validateNotificationPopupForTag:(long long)arg1;
- (void)runnablePopUpAction:(id)arg1;
- (id)customLaunchCommandsFont;
- (BOOL)launchStyleIsCustomLaunchCommands;
- (void)chooseDebugProcessAs:(id)arg1;
- (void)_runPhaseRunnableChanged;
- (void)_runnableDidUpdate;
@property(retain) IDEDebuggerSpecifier *selectedDebuggerSpecifier;
- (void)_updateDebuggerFromOldDebugger:(id)arg1;
- (void)selectDebugExecutable:(id)arg1;
- (void)_selectedSchemeChanged:(id)arg1;
- (void)primitiveInvalidate;
- (void)_invalidateOptionViews;
- (void)loadView;
- (void)_setupDebugOptions;
- (void)_updateDebugCheckboxes;
- (void)_updateDebugOptionsEnablement;
- (void)updateBoundContent;
- (void)updateBoundIDERunContextBinding;
- (id)dvtExtraBindings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

