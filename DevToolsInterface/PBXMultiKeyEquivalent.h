//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXKeyEquivalent.h>

@interface PBXMultiKeyEquivalent : PBXKeyEquivalent
{
    PBXKeyEquivalent *_prefix;
}

+ (id)keyEquivalentWithKey:(id)arg1 modifierMask:(unsigned long long)arg2 prefix:(id)arg3;
- (id)inverseArray;
- (id)prefix;
- (id)_makeAttributedStringValue;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isMultiKeyEquivalent;
- (void)dealloc;

@end

