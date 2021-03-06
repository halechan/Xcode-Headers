//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <Xcode3UI/NSOutlineViewDataSource-Protocol.h>
#import <Xcode3UI/NSOutlineViewDelegate-Protocol.h>

@class DVTBorderedView, IDEWorkspace, NSArray, NSOutlineView, NSString, XCSwiftPackageReference;

@interface Xcode3AddPackageProductDependencyViewController : IDEViewController <NSOutlineViewDelegate, NSOutlineViewDataSource>
{
    NSArray *_packageReferencesSnapshot;
    NSArray *_availablePackageReferences;
    NSString *_productName;
    IDEWorkspace *_hostWorkspace;
    CDUnknownBlockType _completionBlock;
    long long _indexOfPackageReference;
    DVTBorderedView *_borderedView;
    NSOutlineView *_outlineView;
    NSString *_filterString;
}

+ (id)keyPathsForValuesAffectingShouldEnableAddButton;
+ (id)keyPathsForValuesAffectingPackageReference;
@property(copy) NSString *filterString; // @synthesize filterString=_filterString;
@property __weak NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property long long indexOfPackageReference; // @synthesize indexOfPackageReference=_indexOfPackageReference;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property __weak IDEWorkspace *hostWorkspace; // @synthesize hostWorkspace=_hostWorkspace;
@property(copy) NSString *productName; // @synthesize productName=_productName;
@property(copy) NSArray *availablePackageReferences; // @synthesize availablePackageReferences=_availablePackageReferences;
- (void).cxx_destruct;
- (void)search:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)filteredPackageReferences;
- (void)reloadOutline;
- (void)primitiveInvalidate;
- (void)viewDidLoad;
- (void)cancelButtonClicked:(id)arg1;
- (void)addButtonClicked:(id)arg1;
@property(readonly) BOOL shouldEnableAddButton;
@property(readonly) XCSwiftPackageReference *packageReference;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

