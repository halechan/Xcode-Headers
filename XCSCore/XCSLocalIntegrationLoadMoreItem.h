//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XCSLocalBot;

@interface XCSLocalIntegrationLoadMoreItem : NSObject
{
    XCSLocalBot *_bot;
}

@property(retain, nonatomic) XCSLocalBot *bot; // @synthesize bot=_bot;
- (void).cxx_destruct;
- (BOOL)isIntegrationCompleted;
- (id)initWithBot:(id)arg1;

@end
