//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEMLKitModelEditor/NSObject-Protocol.h>

@class NSImage, NSString;

@protocol IDECapsuleViewController <NSObject>
@property(nonatomic, readonly) NSString *titleForDisplay;

@optional
- (void)removeItems:(id)arg1;
- (void)addItems:(id)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)remove:(id)arg1;
@property(nonatomic, readonly) BOOL disclosedByDefault;
@property(nonatomic, readonly) NSString *footerLabel;
@property(nonatomic, readonly) BOOL canDrag;
@property(nonatomic, readonly) BOOL canUndisclose;
@property(nonatomic) BOOL canRemoveItems;
@property(nonatomic) BOOL canAddItems;
@property(nonatomic, readonly) BOOL canRename;
@property(nonatomic, readonly) BOOL canRemove;
@property(nonatomic, readonly) BOOL canSelect;
@property(nonatomic, readonly) NSImage *icon;
@end

