//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSString;

@interface DVTChoice : NSObject
{
    NSString *_title;
    NSString *_toolTip;
    NSImage *_image;
    NSString *_identifier;
    id _representedObject;
    BOOL _enabled;
    NSImage *_alternateImage;
}

@property(retain) NSImage *alternateImage; // @synthesize alternateImage=_alternateImage;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly) id representedObject; // @synthesize representedObject=_representedObject;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSImage *image; // @synthesize image=_image;
@property(readonly, copy) NSString *toolTip; // @synthesize toolTip=_toolTip;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTitle:(id)arg1 toolTip:(id)arg2 image:(id)arg3 representedObject:(id)arg4;

@end

