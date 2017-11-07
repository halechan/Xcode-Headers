//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDEKit/NSOutlineViewDataSource-Protocol.h>
#import <IDEKit/NSOutlineViewDelegate-Protocol.h>

@class DVTBorderedView, DVTGradientImageButton, DVTSourceControlWorkingCopy, DVTTableView, IDEControlGroup, IDESourceControlWorkingCopyConfiguration, NSButton, NSMutableArray, NSString, NSTextField, NSWindow;

@interface IDESourceControlGitConfigViewController : DVTViewController <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    DVTTableView *_remotesTableView;
    DVTBorderedView *_glassBarBorderedView;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_removeButton;
    IDEControlGroup *_controlGroup;
    NSWindow *_newRemoteWindow;
    NSTextField *_remoteNameField;
    NSTextField *_remoteAddressField;
    NSButton *_newRemoteOKButton;
    IDESourceControlWorkingCopyConfiguration *_workingCopyConfiguration;
    DVTSourceControlWorkingCopy *_workingCopy;
    NSMutableArray *_remoteNames;
    NSMutableArray *_remotes;
    NSMutableArray *_remotesToDelete;
}

+ (id)defaultViewNibName;
+ (void)initialize;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)removeRemote:(id)arg1;
- (void)displayError:(id)arg1 forWindow:(id)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)addExistingRemote:(id)arg1;
- (void)okAddRemote:(id)arg1;
- (void)cancelAddRemote:(id)arg1;
- (BOOL)hasOrigin;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)showRemotesForWorkingCopy:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
