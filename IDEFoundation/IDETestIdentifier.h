//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IDETestIdentifier : NSObject <NSCopying>
{
    NSString *_methodName;
    NSString *_suiteName;
}

@property(copy) NSString *suiteName; // @synthesize suiteName=_suiteName;
@property(readonly, copy) NSString *methodName; // @synthesize methodName=_methodName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *displayName;
@property(readonly, copy) NSString *languageAgnosticIdentifierString;
@property(readonly, copy) NSString *identifierString;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifierString:(id)arg1;
- (id)initWithClassName:(id)arg1 methodName:(id)arg2;
- (id)initWithSuiteName:(id)arg1;

@end
