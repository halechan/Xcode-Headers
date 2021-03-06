//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IBFoundation/IBICBundleIconSetRepSlot.h>

@class IBICColorSpace, IBICLanguageDirection;

@interface IBICAppIconSetRepSlot : IBICBundleIconSetRepSlot
{
    IBICColorSpace *_colorSpace;
    IBICLanguageDirection *_languageDirection;
}

+ (BOOL)idiomSupportsLanguageDirection:(id)arg1;
+ (BOOL)idiomSupportsColorSpace:(id)arg1;
+ (id)genesisSlotsForSlots:(id)arg1;
+ (id)orderedComponentClasses;
+ (id)slotWithIdiom:(id)arg1 size:(id)arg2 role:(id)arg3 subtype:(id)arg4 scale:(id)arg5 colorSpace:(id)arg6;
+ (Class)assetRepClass;
+ (Class)assetSetClass;
+ (id)slotFilterWithPlatformFilter:(id)arg1 idiomFilter:(id)arg2 sizeFilter:(id)arg3 scaleFilter:(id)arg4 roleFilter:(id)arg5 subtypeFilter:(id)arg6 colorSpaceFilter:(id)arg7 languageDirectionFilter:(id)arg8;
@property(retain, nonatomic) IBICLanguageDirection *languageDirection; // @synthesize languageDirection=_languageDirection;
@property(retain, nonatomic) IBICColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void).cxx_destruct;
- (id)baseSlotWithoutSecondaryVariations;
@property(readonly, nonatomic) BOOL hasLanguageDirection;
@property(readonly, nonatomic) BOOL hasColorSpace;
- (id)shortDisplayNameConsideringCounterparts:(id)arg1;
- (long long)compareDisplayOrder:(id)arg1;
- (void)captureComponents;

@end

