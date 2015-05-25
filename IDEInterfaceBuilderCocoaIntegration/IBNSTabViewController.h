//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSRelationshipSegueModeledViewController.h>

#import "IBDocumentArchiving.h"

@class NSString, NSTabView;

@interface IBNSTabViewController : IBNSRelationshipSegueModeledViewController <IBDocumentArchiving>
{
    BOOL _canPropagateSelectedChildViewControllerTitle;
    long long _selectedTabViewItemIndex;
    long long _tabStyle;
    unsigned long long _transitionOptions;
    NSTabView *_tabView;
}

+ (id)keyPathsForValuesAffectingIbInspectedTabStyle;
+ (id)keyPathsForValuesAffectingIbSelectedTabViewItem;
+ (Class)ibViewClass;
@property(retain, nonatomic) NSTabView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) BOOL canPropagateSelectedChildViewControllerTitle; // @synthesize canPropagateSelectedChildViewControllerTitle=_canPropagateSelectedChildViewControllerTitle;
@property(nonatomic) unsigned long long transitionOptions; // @synthesize transitionOptions=_transitionOptions;
@property(nonatomic) long long tabStyle; // @synthesize tabStyle=_tabStyle;
@property(nonatomic) long long selectedTabViewItemIndex; // @synthesize selectedTabViewItemIndex=_selectedTabViewItemIndex;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)effectiveStoryboardIdentifierPrefix;
- (id)init;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)ibMakeDefaultView;
- (id)ibTitleForItemAtIndex:(long long)arg1;
- (id)ibTabViewDisplayItems;
@property(nonatomic) long long ibInspectedTabStyle;
- (id)ibSelectedTabViewItem;
- (void)setIbSelectedTabViewItem:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibEditorViewWithSuggestedSize:(struct CGSize)arg1 forDocument:(id)arg2;
- (Class)ibEditorClass;
- (id)ibDefaultItemForNewInstances;
- (id)ibDefaultViewForNewInstances;
- (id)ibRelationshipSegueTrackingViewProperties;
- (id)ibRelationshipSegueTrackingItemLocalizableProperties;
- (id)ibRelationshipSegueTrackingItemProperties;
- (BOOL)ibCanBeValidTriggerSegueSource;
- (id)ibRelationshipSegueBadgeImage;
- (id)ibRelationshipSegueDefaultImage;
- (id)ibRelationshipSegueTrackingItemProperty;
- (id)ibRelationshipSegueTrackingItemsProperty;
- (id)ibImageForOwnedScene;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

