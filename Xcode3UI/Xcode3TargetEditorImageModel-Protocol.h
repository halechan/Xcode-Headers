//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Xcode3UI/NSObject-Protocol.h>

@class DVTFilePath, DVTVersion, NSString;

@protocol Xcode3TargetEditorImageModel <NSObject>
- (DVTVersion *)minimumOSVersion;
- (NSString *)nameSuffix;
- (int)imageType;
- (DVTFilePath *)imageFilePath;
- (struct CGSize)imageSize;
- (NSString *)orientation;
- (NSString *)device;
- (NSString *)scale;
@end

