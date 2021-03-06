//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDECommandManager : NSObject
{
}

+ (void)sendActionForCommandWithIdentifier:(id)arg1 from:(id)arg2;
+ (SEL)_actionForCommandWithIdentifier:(id)arg1;
+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
+ (id)_commandDefinitionIdentifierForSelector:(SEL)arg1;
+ (id)_commandExtensionForIdentifier:(id)arg1;
+ (void)cacheCommandDefinitionsAndHandlers;
+ (void)initialize;

@end

