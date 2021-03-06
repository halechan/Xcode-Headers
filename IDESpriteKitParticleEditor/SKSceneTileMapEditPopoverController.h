//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDESpriteKitParticleEditor/NSPopoverDelegate-Protocol.h>

@class DVTGradientImageButton, NSMutableArray, NSPopover, NSScrollView, NSString;
@protocol SKSceneTileMapEditPopoverDelegate;

@interface SKSceneTileMapEditPopoverController : DVTViewController <NSPopoverDelegate>
{
    BOOL _hasInstalled;
    BOOL _invalidateAfterClose;
    DVTGradientImageButton *_targetButton;
    double _contentHeight;
    BOOL _notifyOnClose;
    BOOL _allowButtonDelete;
    id <SKSceneTileMapEditPopoverDelegate> _delegate;
    NSPopover *_popover;
    NSMutableArray *_buttons;
    unsigned long long _maxColumns;
    unsigned long long _maxRows;
    double _horizontalButtonSpacing;
    double _verticalButtonSpacing;
    NSScrollView *_scrollView;
}

@property __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double verticalButtonSpacing; // @synthesize verticalButtonSpacing=_verticalButtonSpacing;
@property(nonatomic) double horizontalButtonSpacing; // @synthesize horizontalButtonSpacing=_horizontalButtonSpacing;
@property(nonatomic) unsigned long long maxRows; // @synthesize maxRows=_maxRows;
@property(nonatomic) unsigned long long maxColumns; // @synthesize maxColumns=_maxColumns;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) BOOL allowButtonDelete; // @synthesize allowButtonDelete=_allowButtonDelete;
@property(nonatomic) BOOL notifyOnClose; // @synthesize notifyOnClose=_notifyOnClose;
@property __weak NSPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) __weak id <SKSceneTileMapEditPopoverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rightMouseDown:(id)arg1;
- (void)deleteButton:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)_removeFromSuperviewAndInvalidate;
- (void)closePopoverAndInvalidate;
- (void)arrangeButtons;
- (void)viewDidAppear;
- (void)removeAllButtons;
- (void)viewDidInstall;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initUsingDefaultNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

