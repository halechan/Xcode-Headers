//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSString, XCSChangedString;

@interface XCSPlatformChanges : XCSObject
{
}

@property(readonly) NSString *upgradeString;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithVersion:(id)arg1 buildNumber:(id)arg2 validationErrors:(id *)arg3;

// Remaining properties
@property(retain, nonatomic) XCSChangedString *buildNumber; // @dynamic buildNumber;
@property(retain, nonatomic) XCSChangedString *version; // @dynamic version;

@end

