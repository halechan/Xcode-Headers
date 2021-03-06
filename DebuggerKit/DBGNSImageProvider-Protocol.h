//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DebuggerKit/NSObject-Protocol.h>

@class DBGDataValue, NSDictionary, NSImage;

@protocol DBGNSImageProvider <NSObject>
@property(readonly) NSImage *image;
@property(readonly) BOOL hasImageBeenRetrieved;
- (void)cancel;
- (id)initWithDataValue:(DBGDataValue *)arg1 options:(NSDictionary *)arg2;
@end

