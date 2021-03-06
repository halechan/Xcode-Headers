//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDELibraryController.h>

@class NSArray, NSMutableArray, NSString;

@interface GTFActionLibraryController : IDELibraryController
{
    NSString *_currentCustomGroupIdentifier;
    NSString *_currentSKLibraryTitle;
    NSMutableArray *_cachedSKLibraryAssets;
    NSMutableArray *_cachedSKELibraryAssets;
    NSArray *_currentObjectsForActionLibrary;
}

+ (id)activeController;
- (void).cxx_destruct;
- (id)sceneKitActionAssets;
- (id)spriteKitNamedActionAssets;
- (id)spriteKitActionAssets;
- (BOOL)canRemoveAsset:(id)arg1;
- (BOOL)canEditAsset:(id)arg1;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2;
- (BOOL)canCreateAssetsFromPasteboard:(id)arg1 targetingLibrarySourceIdentifier:(id *)arg2;
- (id)readableAssetPasteboardTypes;
@property(readonly, nonatomic) BOOL allowObjectLibrary;
- (void)libraryDidLoad;
- (void)refreshAssetsFromDocument:(id)arg1;
- (void)activeEditorDocumentDidChange:(id)arg1;
- (void)clearCurrentCustomGroupIdentifier;
- (void)populateObjectLibrary;
- (void)updateObjectsLibraryArrayForSKDocument:(id)arg1 forceUpdate:(BOOL)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

