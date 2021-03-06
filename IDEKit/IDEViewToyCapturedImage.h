//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface IDEViewToyCapturedImage : NSObject
{
    struct CGImage *_imageRef;
    struct CGSize _remoteViewSize;
    NSDate *_captureDate;
}

+ (id)dummyImageWithCaptureDate:(id)arg1;
@property(readonly) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property(readonly) struct CGImage *imageRef; // @synthesize imageRef=_imageRef;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithCaptureDate:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 remoteViewSize:(struct CGSize)arg2 captureDate:(id)arg3;

@end

