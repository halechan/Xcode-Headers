//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractClassProvider.h>

@class NSMutableSet;

@interface IBMockClassProvider : IBAbstractClassProvider
{
    NSMutableSet *_partialClassDescriptions;
}

- (void).cxx_destruct;
- (void)removePartialClassDescriptionsWithSourceIdentifiers:(id)arg1 andAddPartialClassDescriptionsInSameUpdateCycle:(id)arg2;
- (void)removePartialClassDescriptionsWithSourceIdentifiers:(id)arg1;
- (void)removePartialClassDescriptionsWithSourceIdentifier:(id)arg1;
- (void)addPartialClassDescriptions:(id)arg1;
- (void)addPartialClassDescription:(id)arg1;
- (id)partialClassDescriptions;
- (id)init;

// Remaining properties
@property BOOL isUpdating; // @dynamic isUpdating;

@end

