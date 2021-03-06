//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTGradientImagePopUpButton.h>

#import <IDESceneKitEditor/SKEUIFactoryAppearanceControl-Protocol.h>

@class NSImage, NSString;

@interface SKEGradientImagePopUpButton : DVTGradientImagePopUpButton <SKEUIFactoryAppearanceControl>
{
    NSImage *_skeImage;
    NSImage *_skeInvertedImage;
    unsigned long long _skeAppearance;
}

- (void).cxx_destruct;
- (void)updateAccordingToAppearance;
@property(nonatomic) unsigned long long ske_appearance;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

