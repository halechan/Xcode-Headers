//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceControlUI/IDECommandHandler-Protocol.h>
#import <IDESourceControlUI/IDECommandHandlerVendor-Protocol.h>

@interface IDESourceControlUI.SourceControlDebugCommandHandler : NSObject <IDECommandHandlerVendor, IDECommandHandler>
{
    // Error parsing type: , name: stashEnabled
    // Error parsing type: , name: trainyardEnabled
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
- (CDUnknownBlockType).cxx_destruct;
- (void)showConflictResolutionWindow:(id)arg1;
- (void)switchEnabledTrainyard:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)init;
@property(nonatomic) BOOL trainyardEnabled; // @synthesize trainyardEnabled;
@property(nonatomic) BOOL stashEnabled; // @synthesize stashEnabled;

@end

