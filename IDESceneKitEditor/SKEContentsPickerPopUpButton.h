//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "DVTWindowActivationStateObserver.h"
#import "IDEInspectorPropertyEnablable.h"
#import "NSDraggingSource.h"
#import "NSMenuDelegate.h"

@class DVTObservingToken, NSDictionary, NSMenu, NSString;

@interface SKEContentsPickerPopUpButton : NSView <DVTWindowActivationStateObserver, NSMenuDelegate, IDEInspectorPropertyEnablable, NSDraggingSource>
{
    NSMenu *_contentsMenu;
    struct CGRect _popUpButtonArrowsRect;
    struct CGRect _contentsPreviewRect;
    struct CGRect _contentsLabelRect;
    struct CGRect _wellRect;
    struct CGRect _contentsLabelTitleRect;
    BOOL _acceptsImages;
    BOOL _acceptsColors;
    NSDictionary *_imageStateDictionary;
    id <DVTCancellable> _windowActivationObservation;
    id _contentsValueBindingController;
    NSString *_contentsValueBindingKeyPath;
    DVTObservingToken *_contentsValueBindingObservation;
    BOOL _acceptsNil;
    BOOL _acceptsNonFilePathImages;
    BOOL _enabled;
    BOOL _active;
    BOOL _highlighted;
    id _contents;
    id _target;
    SEL _action;
    id <SKEContentsPickerPopUpButtonDataSource> _delegate;
    unsigned long long _controlSize;
}

+ (id)imageStateDictionaryForControlSize:(unsigned long long)arg1;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned long long controlSize; // @synthesize controlSize=_controlSize;
@property __weak id <SKEContentsPickerPopUpButtonDataSource> delegate; // @synthesize delegate=_delegate;
@property SEL action; // @synthesize action=_action;
@property(retain) id target; // @synthesize target=_target;
@property(retain, nonatomic) id contents; // @synthesize contents=_contents;
@property BOOL acceptsNonFilePathImages; // @synthesize acceptsNonFilePathImages=_acceptsNonFilePathImages;
@property BOOL acceptsNil; // @synthesize acceptsNil=_acceptsNil;
- (void).cxx_destruct;
@property(retain) id objectValue;
- (void)mouseDown:(id)arg1;
- (BOOL)isMouseEventInColorWellRect:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawContentsLabel;
- (void)drawContents;
- (void)drawPopUpButtonArrows;
- (void)drawFocusRing;
- (id)effectiveAttributedTitle;
- (id)attributedTitleForTitle:(id)arg1;
- (id)titleAttributes;
- (double)wellHeight;
- (id)effectiveImageForControlPart:(unsigned long long)arg1;
- (id)effectivePopUpButtonArrowsRightCapImage;
- (double)horizontalMenuOffset;
- (double)verticalMenuOffset;
- (void)sizeRectsForDrawing;
- (double)verticalTitleOffset;
- (double)baseline;
- (double)heightThatFits;
- (double)widthForPopUpButton;
- (CDStruct_d2b197d1)shadowInset;
- (struct CGRect)insetRectForWellRect:(struct CGRect)arg1;
- (struct CGRect)wellRectForContentsPreviewRect:(struct CGRect)arg1;
- (id)imageStateDictionary;
- (void)invalidateImageStateDictionary;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)observedContentsValueDidChangeToValue:(id)arg1;
- (void)displayColorPanel:(id)arg1;
- (void)takeColorFromColorChooser:(id)arg1;
- (void)takeColorFromColorPanel:(id)arg1;
- (void)takeContentsFromPopUpMenu:(id)arg1;
- (void)setNilContents:(id)arg1;
- (void)sendAction;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)beginImageDragForEvent:(id)arg1;
- (void)beginColorDragForEvent:(id)arg1;
- (id)imageForDraggedColor:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)colorPanelColorChanged:(id)arg1;
- (void)colorPanelWillClose:(id)arg1;
- (void)window:(id)arg1 didChangeActivationState:(long long)arg2;
- (void)contentsPickerDidBecomeActive:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)performClick:(id)arg1;
- (void)displayColorPanel;
- (BOOL)canBecomeKeyView;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)showContentsMenu;
- (double)minimumPopUpMenuWidth;
- (struct CGPoint)popUpMenuLocation;
- (void)populateContentsMenu;
- (id)swatchImageForColor:(id)arg1 withSize:(struct CGSize)arg2;
- (BOOL)isShowingTitle;
- (id)titleFont;
- (id)effectiveSwatchBorderColor;
- (id)effectiveTextColor;
- (BOOL)contentsIsAllowedNil;
- (BOOL)contentsIsImage;
- (BOOL)contentsIsColor;
@property BOOL acceptsColors;
@property BOOL acceptsImages;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

