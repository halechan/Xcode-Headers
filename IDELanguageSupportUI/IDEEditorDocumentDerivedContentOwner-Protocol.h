//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDELanguageSupportUI/NSObject-Protocol.h>

@class IDEEditorDocumentDerivedContentProvider;
@protocol IDEEditorDocumentDerivedContentClient;

@protocol IDEEditorDocumentDerivedContentOwner <NSObject>

@optional
- (void)derivedContentProvider:(IDEEditorDocumentDerivedContentProvider *)arg1 didUnregisterClient:(id <IDEEditorDocumentDerivedContentClient>)arg2;
- (void)derivedContentProvider:(IDEEditorDocumentDerivedContentProvider *)arg1 willRegisterClient:(id <IDEEditorDocumentDerivedContentClient>)arg2;
@end

