//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEEntitlementsFile, NSMutableDictionary;

@interface _IDEEntitlementsKeyValuePairProxy : NSObject
{
    NSMutableDictionary *_keysAndValues;
    IDEEntitlementsFile *_owner;
}

- (void).cxx_destruct;
- (id)plistRepresentation;
- (id)allKeys;
- (void)removeAllSandboxValues;
- (BOOL)hasSandboxValues;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)nonSandboxIdentifiers;
- (id)allTagKeys;
- (id)identifierForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1 owner:(id)arg2;

@end

