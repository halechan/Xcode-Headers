//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDETargetEditorSectionViewController.h>

@class DVTGradientImageButton, DVTObservingToken, IDEiOSTargetEditor, NSPopUpButton, Xcode3InfoEditorClassNamesConformingToProtocolProvider, Xcode3TargetEditor;

@interface IDEComplicationsConfigurationViewController : IDETargetEditorSectionViewController
{
    NSPopUpButton *_complicationsAssetCatalogPopUpButton;
    DVTGradientImageButton *_assetCatalogGoToButton;
    IDEiOSTargetEditor *_targetEditor;
    Xcode3TargetEditor *_innerTargetEditor;
    DVTObservingToken *_innerTargetEditorObserver;
    Xcode3InfoEditorClassNamesConformingToProtocolProvider *_conformingProtocolProvider;
}

+ (id)keyPathsForValuesAffectingComplicationsController;
+ (id)keyPathsForValuesAffectingComplicationsFamilyExtraLarge;
+ (id)keyPathsForValuesAffectingComplicationsFamilyCircularSmall;
+ (id)keyPathsForValuesAffectingComplicationsFamilyUtilitarianLarge;
+ (id)keyPathsForValuesAffectingComplicationsFamilyUtilitarianSmallFlat;
+ (id)keyPathsForValuesAffectingComplicationsFamilyUtilitarianSmall;
+ (id)keyPathsForValuesAffectingComplicationsFamilyModularLarge;
+ (id)keyPathsForValuesAffectingComplicationsFamilyModularSmall;
@property(retain) Xcode3InfoEditorClassNamesConformingToProtocolProvider *conformingProtocolProvider; // @synthesize conformingProtocolProvider=_conformingProtocolProvider;
@property(retain) DVTObservingToken *innerTargetEditorObserver; // @synthesize innerTargetEditorObserver=_innerTargetEditorObserver;
@property(retain) Xcode3TargetEditor *innerTargetEditor; // @synthesize innerTargetEditor=_innerTargetEditor;
@property(retain, nonatomic) IDEiOSTargetEditor *targetEditor; // @synthesize targetEditor=_targetEditor;
@property __weak DVTGradientImageButton *assetCatalogGoToButton; // @synthesize assetCatalogGoToButton=_assetCatalogGoToButton;
@property __weak NSPopUpButton *complicationsAssetCatalogPopUpButton; // @synthesize complicationsAssetCatalogPopUpButton=_complicationsAssetCatalogPopUpButton;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)titleForDisplay;
- (void)selectAssetCatalogSet:(id)arg1;
- (void)refreshAssetCatalogPopUpButton;
- (void)goToAssetCatalogSet:(id)arg1;
- (id)classesConformingToProtocol;
- (id)complicationsController;
- (void)setComplicationsController:(id)arg1;
- (BOOL)complicationsFamilyExtraLarge;
- (void)setComplicationsFamilyExtraLarge:(BOOL)arg1;
- (BOOL)complicationsFamilyCircularSmall;
- (void)setComplicationsFamilyCircularSmall:(BOOL)arg1;
- (BOOL)complicationsFamilyUtilitarianLarge;
- (void)setComplicationsFamilyUtilitarianLarge:(BOOL)arg1;
- (BOOL)complicationsFamilyUtilitarianSmallFlat;
- (void)setComplicationsFamilyUtilitarianSmallFlat:(BOOL)arg1;
- (BOOL)complicationsFamilyUtilitarianSmall;
- (void)setComplicationsFamilyUtilitarianSmall:(BOOL)arg1;
- (BOOL)complicationsFamilyModularLarge;
- (void)setComplicationsFamilyModularLarge:(BOOL)arg1;
- (BOOL)complicationsFamilyModularSmall;
- (void)setComplicationsFamilyModularSmall:(BOOL)arg1;
- (BOOL)_complicationsFamiliesArrayContainsFamilyKeyNamed:(id)arg1;
- (void)_setComplicationsArrayWithFamilyKeyNamed:(id)arg1 includeKey:(BOOL)arg2;
- (id)_complicationsFamiliesArray;
- (void)viewDidLoad;
- (id)initWithTargetEditor:(id)arg1;

@end

