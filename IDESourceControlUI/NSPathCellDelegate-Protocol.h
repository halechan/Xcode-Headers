//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDESourceControlUI/NSObject-Protocol.h>

@class NSMenu, NSOpenPanel, NSPathCell;

@protocol NSPathCellDelegate <NSObject>

@optional
- (void)pathCell:(NSPathCell *)arg1 willPopUpMenu:(NSMenu *)arg2;
- (void)pathCell:(NSPathCell *)arg1 willDisplayOpenPanel:(NSOpenPanel *)arg2;
@end
