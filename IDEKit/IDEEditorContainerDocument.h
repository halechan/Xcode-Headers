//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@class DVTObservingToken, IDEContainer;

@interface IDEEditorContainerDocument : IDEEditorDocument
{
    IDEContainer *_container;
    DVTObservingToken *_containerValidObservingToken;
}

+ (id)keyPathsForValuesAffectingReadOnlyItemURL;
+ (id)keyPathsForValuesAffectingReadOnlyStatus;
+ (Class)_containerClass;
+ (BOOL)shouldTrackFileSystemChanges;
+ (BOOL)autosavesInPlace;
@property(retain, nonatomic) IDEContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)updateChangeCount:(unsigned long long)arg1;
- (void)runPageLayout:(id)arg1;
- (void)printDocument:(id)arg1;
- (void)saveDocumentTo:(id)arg1;
- (void)saveDocumentAs:(id)arg1;
- (void)saveDocument:(id)arg1;
- (void)revertDocumentToSaved:(id)arg1;
- (BOOL)makeWritableWithError:(id *)arg1;
- (id)readOnlyItemURL;
- (int)readOnlyStatus;
- (BOOL)canRevert;
- (void)editorDocumentWillClose;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;

@end

