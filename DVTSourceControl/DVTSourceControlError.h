//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSMapTable;

@interface DVTSourceControlError : NSError
{
    NSMapTable *_objectsToErrors;
}

@property(retain) NSMapTable *objectsToErrors; // @synthesize objectsToErrors=_objectsToErrors;
- (void).cxx_destruct;
- (id)initWithMapTable:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;

@end
