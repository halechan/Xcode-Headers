//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Xcode3UI/Xcode3InfoController.h>

@class DVTExtension, NSArray, NSDictionary;

@interface Xcode3ExtensionBasedInfoController : Xcode3InfoController
{
    DVTExtension *_extension;
    NSArray *_slices;
    NSDictionary *_infoDictionary;
}

- (id)infoDictionary;
- (void).cxx_destruct;
- (id)initWithBlueprint:(id)arg1 extension:(id)arg2;
- (void)setInfoDictionary:(id)arg1;
- (void)_syncInfoDictionary;
- (id)slices;

@end

