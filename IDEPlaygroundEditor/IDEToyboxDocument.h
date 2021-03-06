//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@class DVTNotificationToken, IDEToybox;
@protocol IDEPlaygroundHostingDocument;

@interface IDEToyboxDocument : IDEEditorDocument
{
    DVTNotificationToken *_playgroundDocumentWillCloseObservingToken;
    IDEEditorDocument<IDEPlaygroundHostingDocument> *_playgroundDocument;
}

+ (id)keyPathsForValuesAffectingToybox;
+ (id)keyPathsForValuesAffectingReadOnlyStatus;
@property(retain, nonatomic) IDEEditorDocument<IDEPlaygroundHostingDocument> *playgroundDocument; // @synthesize playgroundDocument=_playgroundDocument;
- (void).cxx_destruct;
- (void)editorDocumentWillClose;
@property(readonly) IDEToybox *toybox;
- (void)setFileURL:(id)arg1;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (int)readOnlyStatus;

@end

