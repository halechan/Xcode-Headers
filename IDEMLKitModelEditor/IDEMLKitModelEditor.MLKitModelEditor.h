//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

@class DVTFilePath, NSView, _TtC19IDEMLKitModelEditor25MLKitEditorViewController;
@protocol DVTCancellable;

@interface IDEMLKitModelEditor.MLKitModelEditor : IDEEditor
{
    // Error parsing type: , name: editorViewController
    // Error parsing type: , name: generatedInterfaceFilePath
    // Error parsing type: , name: editorView
    // Error parsing type: , name: sourceFileWasDependencyAnalyzedNotificationObserverToken
    // Error parsing type: , name: prebuildDoneNotificationObserverToken
    // Error parsing type: , name: handlePossibleGenerationUpdate
}

+ (id)classIcon;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
- (void)initializeFieldsFromDocument;
- (void)initializeViewHierarchy;
- (void)unregisterGeneratedDocumentAssociations;
- (void)viewWillUninstall;
- (void)reloadEverything;
@property(nonatomic, copy) CDUnknownBlockType handlePossibleGenerationUpdate; // @synthesize handlePossibleGenerationUpdate;
- (void)viewDidInstall;
- (void)loadView;
@property(nonatomic, retain) id <DVTCancellable> prebuildDoneNotificationObserverToken; // @synthesize prebuildDoneNotificationObserverToken;
@property(nonatomic, retain) id <DVTCancellable> sourceFileWasDependencyAnalyzedNotificationObserverToken; // @synthesize sourceFileWasDependencyAnalyzedNotificationObserverToken;
@property(nonatomic, retain) NSView *editorView; // @synthesize editorView;
@property(nonatomic, retain) DVTFilePath *generatedInterfaceFilePath; // @synthesize generatedInterfaceFilePath;
@property(nonatomic, retain) _TtC19IDEMLKitModelEditor25MLKitEditorViewController *editorViewController; // @synthesize editorViewController;

@end

