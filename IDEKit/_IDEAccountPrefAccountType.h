//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface _IDEAccountPrefAccountType : NSObject
{
    NSString *_displayName;
    NSImage *_icon;
    long long _accountType;
}

@property(nonatomic) long long accountType; // @synthesize accountType=_accountType;
@property(copy, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;

@end
