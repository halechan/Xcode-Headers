//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsFoundation/DTPlugInLocator.h>

@class NSString;

@interface DTPlatformPlugInLocator : DTPlugInLocator
{
    NSString *_toolName;
}

@property(copy) NSString *toolName; // @synthesize toolName=_toolName;
- (BOOL)canUsePlugInAtPath:(id)arg1 bundle:(id *)arg2 plugInXML:(id *)arg3;
- (BOOL)_checkCanUsePlatformAtPath:(id)arg1 plugInXML:(id *)arg2;
- (id)_synthesizedXMLForPlatform:(id)arg1;
- (id)_plugInForPlatformWithName:(id)arg1 identifier:(id)arg2 version:(id)arg3;
- (id)_extensionElementForPlatformWithName:(id)arg1 identifier:(id)arg2 version:(id)arg3;
- (id)_searchPathElementForRelativePath:(id)arg1;
- (id)_plugInElementWithName:(id)arg1 identifier:(id)arg2 version:(id)arg3;
- (id)_platformDeveloperLibraryPath;
- (void)dealloc;
- (id)initWithToolName:(id)arg1;

@end
