//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEContainerItem, IDEGroup, IDETemplateInstantiationContext, NSArray;

@protocol IDETemplateSupportingNavigator <NSObject>
- (IDEGroup *)defaultDestinationGroupForTemplateInstantiationWithDestinationIndex:(long long *)arg1;
- (void)addTemplateInstantiatedItems:(NSArray *)arg1 primaryItem:(IDEContainerItem *)arg2 shouldEdit:(BOOL)arg3;
- (void)setupTemplateContext:(IDETemplateInstantiationContext *)arg1;
@end

