//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError;

@interface XCSimplePlainTextDeserializer : NSObject
{
    Class _charsToClasses[26];
    NSData *_inputData;
    CDStruct_cdb8c6f3 _inputStream;
    NSError *_error;
}

- (id)error;
- (id)data;
- (id)decodeObjectList;
- (id)decodeObject;
- (id)decodeString;
- (unsigned long long)decodeInteger;
- (Class)classForUppercaseAsciiCharacter:(BOOL)arg1;
- (void)setClass:(Class)arg1 forUppercaseAsciiCharacter:(BOOL)arg2;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)arg1;

@end

