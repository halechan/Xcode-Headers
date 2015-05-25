//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXExternalEditorSpecification.h>

@interface PBXEmacsEditorSpecification : PBXExternalEditorSpecification
{
    BOOL _reportsExceptions;
}

+ (BOOL)gnuservSuiteIsInstalled;
+ (void)_reportBrokenGnuclientConnection;
+ (BOOL)emacsIsCurrentlyOpen;
+ (id)emacsCommandLine;
+ (id)emacsPath;
- (void)setReportsExceptions:(BOOL)arg1;
- (BOOL)reportsExceptions;
- (id)_invokeGnuclientWithArguments:(id)arg1;
- (id)_dispatchLispCommand:(id)arg1;
- (BOOL)_dispatchBooleanLispCommand:(id)arg1;
- (BOOL)_saveCurrentBuffer;
- (void)_flashSelectionRange:(long long)arg1;
- (BOOL)_pushMark:(long long)arg1 activate:(BOOL)arg2;
- (BOOL)_gotoChar:(long long)arg1;
- (BOOL)_selectCharacterRange:(struct _NSRange)arg1;
- (BOOL)_gotoLine:(long long)arg1;
- (BOOL)_switchToBufferForFile:(id)arg1;
- (BOOL)_printToEmacs:(id)arg1;
- (BOOL)_markDoneForBufferRepresentingFile:(id)arg1;
- (BOOL)_openFile:(id)arg1 lineNumber:(int)arg2 selectionStart:(long long)arg3 selectionEnd:(long long)arg4 requestNotificationsOnFileSavingAndClosing:(BOOL)arg5;
- (BOOL)launchEmacs;
- (BOOL)saveFile:(id)arg1;
- (id)modifiedDocumentsArray;
- (BOOL)isCurrentlyEditingBookmark:(id)arg1;
- (BOOL)updateSelectionForBookmark:(id)arg1;
- (void)_tryAgainWithBookmark:(id)arg1;
- (BOOL)openBookmark:(id)arg1 bringToFront:(BOOL)arg2;
- (BOOL)launch;
- (BOOL)isCurrentlyOpen;
- (id)genericName;
- (id)name;

@end

