//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNotification, NSPopover, NSWindow;

@protocol NSPopoverDelegate <NSObject>

@optional
- (void)popoverDidClose:(NSNotification *)arg1;
- (void)popoverWillClose:(NSNotification *)arg1;
- (void)popoverDidShow:(NSNotification *)arg1;
- (void)popoverWillShow:(NSNotification *)arg1;
- (NSWindow *)detachableWindowForPopover:(NSPopover *)arg1;
- (BOOL)popoverShouldDetach:(NSPopover *)arg1;
- (BOOL)popoverShouldClose:(NSPopover *)arg1;
@end

