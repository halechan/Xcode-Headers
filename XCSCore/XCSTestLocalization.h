//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSString;

@interface XCSTestLocalization : XCSObject
{
    NSString *_language;
    NSString *_region;
}

+ (id)testLocalizationWithLanguage:(id)arg1 region:(id)arg2 validationErrors:(id *)arg3;
@property(retain, nonatomic) NSString *region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)_validateLanguage:(id)arg1 region:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithLanguage:(id)arg1 region:(id)arg2 validationErrors:(id *)arg3;

@end

