//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/NSCopying-Protocol.h>
#import <DVTKit/NSPasteboardReading-Protocol.h>
#import <DVTKit/NSPasteboardWriting-Protocol.h>
#import <DVTKit/NSSecureCoding-Protocol.h>

@class DVTFilterTokenComparisonType, DVTFilterTokenType, NSString;

@interface DVTFilterToken : NSObject <NSCopying, NSSecureCoding, NSPasteboardWriting, NSPasteboardReading>
{
    DVTFilterTokenType *_type;
    DVTFilterTokenComparisonType *_comparisonType;
    NSString *_stringValue;
}

+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) DVTFilterTokenComparisonType *comparisonType; // @synthesize comparisonType=_comparisonType;
@property(retain, nonatomic) DVTFilterTokenType *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)stringForm;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1 comparisonType:(id)arg2 value:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

