//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDELocalizationWorkContext.h>

#import "IDELocalizationWorkProvider.h"

@class DVTFilePath, DVTLocale, IDEContainer<IDELocalizedContainer>, IDEGroup<IDELocalizedGroup>, NSDictionary;

@interface IDELocalizationWorkWriteStrings : IDELocalizationWorkContext <IDELocalizationWorkProvider>
{
    BOOL _createdNewSubitem;
    DVTFilePath *_path;
    NSDictionary *_strings;
    NSDictionary *_comments;
    IDEContainer<IDELocalizedContainer> *_container;
    IDEGroup<IDELocalizedGroup> *_group;
    DVTLocale *_language;
}

+ (id)contextWithParent:(id)arg1 dryRun:(BOOL)arg2 strings:(id)arg3 comments:(id)arg4 container:(id)arg5 group:(id)arg6 language:(id)arg7;
@property(retain) DVTLocale *language; // @synthesize language=_language;
@property(retain) IDEGroup<IDELocalizedGroup> *group; // @synthesize group=_group;
@property(retain) IDEContainer<IDELocalizedContainer> *container; // @synthesize container=_container;
@property(retain) NSDictionary *comments; // @synthesize comments=_comments;
@property(retain) NSDictionary *strings; // @synthesize strings=_strings;
@property(retain) DVTFilePath *path; // @synthesize path=_path;
@property BOOL createdNewSubitem; // @synthesize createdNewSubitem=_createdNewSubitem;
- (void).cxx_destruct;
- (id)work;
- (void)primitiveInvalidate;

@end
