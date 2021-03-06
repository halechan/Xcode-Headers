//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTFoundation/DVTFindRegularExpressionDescriptor.h>

#import <DVTKit/DVTTextlikeFindDescriptor-Protocol.h>

@class NSAttributedString, NSString;

@interface DVTFindPatternDescriptor : DVTFindRegularExpressionDescriptor <DVTTextlikeFindDescriptor>
{
    NSAttributedString *_findAttributedString;
    unsigned long long _matchStyle;
}

+ (id)keyPathsForValuesAffectingDisplayAttributedString;
@property(readonly) NSAttributedString *findAttributedString; // @synthesize findAttributedString=_findAttributedString;
@property(readonly) unsigned long long matchStyle; // @synthesize matchStyle=_matchStyle;
- (void).cxx_destruct;
- (id)displayAttributedString;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAttributedString:(id)arg1 ignoreCase:(BOOL)arg2 matchStyle:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

