//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEWelcomeWindowController.h"

#import "NSTouchBarDelegate.h"
#import "NSTouchBarProvider.h"

@class NSString, NSTouchBar;

@interface IDEWelcomeWindowController (DFRSupport) <NSTouchBarProvider, NSTouchBarDelegate>
- (id)_newProjectButton;
- (id)_newPlaygroundButton;
- (id)_newCheckoutButton;
- (id)_newCheckoutItemWithIdentifier:(id)arg1;
- (id)_newPlaygroundItemWithIdentifier:(id)arg1;
- (id)_newProjectItemWithIdentifier:(id)arg1;
- (id)_createTouchBar;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)updateTouchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSTouchBar *touchBar;
@end
