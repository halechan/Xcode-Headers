//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "DVTSplitViewDelegate.h"
#import "NSMenuDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSWindowDelegate.h"

@class DVTBorderedView, DVTDelayedInvocation, DVTDeviceProvisioningProfilesSheetController, DVTDevicesWindowContentAreaViewController, DVTGradientImageButton, DVTGradientImagePopUpButton, DVTLozengeTextField, DVTObservingToken, DVTScrollView, DVTSearchField, DVTSplitView, DVTStackView_ML, DVTTableView, DVTViewController<DVTDevicesWindowConsoleViewController>, NSArray, NSArrayController, NSButton, NSIndexSet, NSMenuItem, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface DVTDevicesWindowController : NSWindowController <DVTSplitViewDelegate, NSTableViewDataSource, NSTableViewDelegate, NSMenuDelegate, NSWindowDelegate>
{
    DVTObservingToken *_devicesObserver;
    NSMutableDictionary *_deviceObservationTokens;
    NSMutableDictionary *_wirelessEnablingFutures;
    DVTDelayedInvocation *_delayedDevicesDisplayUpdateInvocation;
    BOOL _updatingDevicesForDisplay;
    DVTLozengeTextField *_emptyContentView;
    DVTDeviceProvisioningProfilesSheetController *_provisioningProfilesSheet;
    BOOL _consoleVisible;
    BOOL _consoleSplitVisible;
    NSMutableSet *_devices;
    NSArray *_devicesForDisplay;
    NSIndexSet *_devicesTableSelectionIndexes;
    NSString *_filterString;
    DVTTableView *_devicesTable;
    NSArrayController *_devicesArrayController;
    DVTBorderedView *_mainBorderedView;
    DVTSplitView *_mainSplitView;
    DVTSplitView *_contentSplitView;
    DVTBorderedView *_pocketFooterBorderedView;
    DVTBorderedView *_consoleHeaderBorderedView;
    DVTBorderedView *_consoleFooterView;
    DVTBorderedView *_contentBorderedView;
    DVTStackView_ML *_consoleAreaStack;
    DVTGradientImageButton *_addSimulatorButton;
    DVTGradientImagePopUpButton *_gearButton;
    DVTGradientImageButton *_consoleButton;
    NSButton *_consoleClearButton;
    NSButton *_consoleSaveButton;
    DVTSearchField *_searchField;
    NSMenuItem *_ignoreMenuItem;
    NSMenuItem *_unpairMenuItem;
    NSMenuItem *_enableWirelessMenuItem;
    NSMenuItem *_deleteSimMenuItem;
    DVTDevicesWindowContentAreaViewController *_contentAreaViewController;
    DVTScrollView *_scrollView;
    DVTViewController<DVTDevicesWindowConsoleViewController> *_consoleViewController;
}

+ (id)sharedDevicesWindowController;
@property(retain) DVTViewController<DVTDevicesWindowConsoleViewController> *consoleViewController; // @synthesize consoleViewController=_consoleViewController;
@property __weak DVTScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain) DVTDevicesWindowContentAreaViewController *contentAreaViewController; // @synthesize contentAreaViewController=_contentAreaViewController;
@property(retain) NSMenuItem *deleteSimMenuItem; // @synthesize deleteSimMenuItem=_deleteSimMenuItem;
@property(retain) NSMenuItem *enableWirelessMenuItem; // @synthesize enableWirelessMenuItem=_enableWirelessMenuItem;
@property(retain) NSMenuItem *unpairMenuItem; // @synthesize unpairMenuItem=_unpairMenuItem;
@property(retain) NSMenuItem *ignoreMenuItem; // @synthesize ignoreMenuItem=_ignoreMenuItem;
@property(retain) DVTSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain) NSButton *consoleSaveButton; // @synthesize consoleSaveButton=_consoleSaveButton;
@property(retain) NSButton *consoleClearButton; // @synthesize consoleClearButton=_consoleClearButton;
@property(retain) DVTGradientImageButton *consoleButton; // @synthesize consoleButton=_consoleButton;
@property(retain) DVTGradientImagePopUpButton *gearButton; // @synthesize gearButton=_gearButton;
@property(retain) DVTGradientImageButton *addSimulatorButton; // @synthesize addSimulatorButton=_addSimulatorButton;
@property(retain) DVTStackView_ML *consoleAreaStack; // @synthesize consoleAreaStack=_consoleAreaStack;
@property(retain) DVTBorderedView *contentBorderedView; // @synthesize contentBorderedView=_contentBorderedView;
@property(retain) DVTBorderedView *consoleFooterView; // @synthesize consoleFooterView=_consoleFooterView;
@property(retain) DVTBorderedView *consoleHeaderBorderedView; // @synthesize consoleHeaderBorderedView=_consoleHeaderBorderedView;
@property(retain) DVTBorderedView *pocketFooterBorderedView; // @synthesize pocketFooterBorderedView=_pocketFooterBorderedView;
@property(retain) DVTSplitView *contentSplitView; // @synthesize contentSplitView=_contentSplitView;
@property(retain) DVTSplitView *mainSplitView; // @synthesize mainSplitView=_mainSplitView;
@property(retain) DVTBorderedView *mainBorderedView; // @synthesize mainBorderedView=_mainBorderedView;
@property(retain) NSArrayController *devicesArrayController; // @synthesize devicesArrayController=_devicesArrayController;
@property(retain) DVTTableView *devicesTable; // @synthesize devicesTable=_devicesTable;
@property(nonatomic, getter=isConsoleSplitVisible) BOOL consoleSplitVisible; // @synthesize consoleSplitVisible=_consoleSplitVisible;
@property(nonatomic, getter=isConsoleVisible) BOOL consoleVisible; // @synthesize consoleVisible=_consoleVisible;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain, nonatomic) NSIndexSet *devicesTableSelectionIndexes; // @synthesize devicesTableSelectionIndexes=_devicesTableSelectionIndexes;
@property(retain) NSArray *devicesForDisplay; // @synthesize devicesForDisplay=_devicesForDisplay;
@property(retain) NSMutableSet *devices; // @synthesize devices=_devices;
- (void).cxx_destruct;
- (void)menuWillOpen:(id)arg1;
- (void)splitViewDidEndLiveResize:(id)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)_coordinateOfContentSplitViewDividerWithConsoleVisibile:(BOOL)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)_purportedSelectedDeviceWithSelectionIndexes:(id)arg1;
- (void)deleteSimulator:(id)arg1;
- (void)showProvisioningProfiles:(id)arg1;
- (void)toggleEnableWireless:(id)arg1;
- (void)unpairDevice:(id)arg1;
- (void)toggleDeviceIgnored:(id)arg1;
- (void)renameDevice:(id)arg1;
- (void)saveConsole:(id)arg1;
- (void)clearConsole:(id)arg1;
- (void)toggleConsole:(id)arg1;
- (void)addSimulator:(id)arg1;
- (id)_simulatorLocator;
@property(readonly) NSSet *supportedFileDataTypeIdentifiers;
- (id)_provisioningProfileTypeIdentifers;
- (BOOL)validateMenuItem:(id)arg1;
- (void)restoreConsoleState;
- (void)restoreConsoleDividerPositionState;
- (void)restoreConsoleVisibleState;
- (void)saveConsoleDividerPositionState;
- (void)saveConsoleVisibleState;
- (void)_hideEmptySelectionView;
- (void)_showEmptySelectionView;
- (id)_borderColor;
- (id)_detailViewControllerInfoDictionaryForDevice:(id)arg1;
@property(copy, nonatomic) NSString *selectedDeviceIdentifier;
- (id)_contextuallySelectedDevice;
- (id)_selectedDevice;
- (void)_syncSelectionToDeviceIdentifier:(id)arg1;
- (id)_deviceWithIdentifier:(id)arg1;
- (void)_selectDeviceWithIdentifierInDevicesTable:(id)arg1;
- (void)_removeDevices:(id)arg1 updateDisplay:(BOOL)arg2;
- (void)_addDevices:(id)arg1;
- (void)_updateDevices;
- (void)_updateDeviceDisplayWithDelay:(BOOL)arg1;
- (void)_stopObservingDeviceAvailabilty;
- (void)_startObservingDeviceAvailabilty;
- (BOOL)openFileURL:(id)arg1 withFileType:(id)arg2 error:(id *)arg3;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)windowWillClose:(id)arg1;
- (void)_verticallyCenterView:(id)arg1;
- (void)_adjustButtonStyling:(id)arg1;
- (void)windowDidLoad;
- (void)showWindow:(id)arg1;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

