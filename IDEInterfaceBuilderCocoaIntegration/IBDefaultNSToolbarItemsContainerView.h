//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSToolbarItemsContainerView.h>

@class IBMutableIdentityDictionary;

@interface IBDefaultNSToolbarItemsContainerView : IBNSToolbarItemsContainerView
{
    IBMutableIdentityDictionary *realItemsByCopiedItem;
    IBMutableIdentityDictionary *realItemsByItemView;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)supportsDragFromCounterpart;
- (BOOL)wraps;
- (void)removeAllItems;
- (void)removeItemRepresentedByItemView:(id)arg1;
- (id)generateItemViewForToolbarItem:(id)arg1;
- (BOOL)canAddToolbarItem:(id)arg1;
- (id)toolbarItemForItemView:(id)arg1;
- (void)toolbarItemsContainerViewCommonInit;

@end

