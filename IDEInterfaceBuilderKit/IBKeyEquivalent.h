//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface IBKeyEquivalent : NSObject <NSCopying>
{
    NSString *key;
    unsigned long long modifierMask;
}

+ (id)keyEquivalentFromMenuItem:(id)arg1;
@property(readonly) unsigned long long modifierMask; // @synthesize modifierMask;
@property(readonly) NSString *key; // @synthesize key;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToKeyEquivalent:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKey:(id)arg1 andModifierMask:(unsigned long long)arg2;

@end

