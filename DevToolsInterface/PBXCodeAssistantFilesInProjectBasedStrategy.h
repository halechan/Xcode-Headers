//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXCodeAssistantStrategy.h>

@class NSArray;

@interface PBXCodeAssistantFilesInProjectBasedStrategy : PBXCodeAssistantStrategy
{
    NSArray *_cachedFileReferencesList;
    BOOL _onlyIncludeHeaderFiles;
}

- (BOOL)getItems:(id *)arg1 withInfoString:(id)arg2;
- (id)_importLineStringUnderCursor;
- (id)_fileReferencesList;
- (void)setOnlyIncludeHeaderFiles:(BOOL)arg1;
- (BOOL)onlyIncludeHeaderFiles;
- (id)_stringCompletionItemsForStringArray:(id)arg1;
- (void)dealloc;
- (id)initWithTextView:(id)arg1 onlyIncludeHeaders:(BOOL)arg2;

@end

