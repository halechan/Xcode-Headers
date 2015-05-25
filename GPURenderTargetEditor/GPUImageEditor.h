//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPURenderTargetEditor/GPUResourceEditor.h>

#import "GPURenderBufferViewStateCoordinationProtocol.h"
#import "GPUTraceBubbleOwner.h"

@class DVTBorderedView, DYRenderingAttributes, GPUPathControl, GPURenderBufferBezeledLabel, GPURenderBufferButton, GPURenderBufferView, GPUTraceResourceInfoBubble, GPUTraceResourceSettingsBubble, NSButton, NSImage, NSLayoutConstraint, NSObject<OS_dispatch_queue>, NSPopUpButton, NSSegmentedControl, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface GPUImageEditor : GPUResourceEditor <GPUTraceBubbleOwner, GPURenderBufferViewStateCoordinationProtocol>
{
    GPURenderBufferView *_imageView;
    DVTBorderedView *_bottomToolBar;
    NSSegmentedControl *_viewSegmentedControl;
    NSSegmentedControl *_orientationSegmentedControl;
    NSTextField *_viewSegmentedControlLabel;
    GPURenderBufferButton *_infoButton;
    GPURenderBufferButton *_settingsButton;
    GPURenderBufferBezeledLabel *_bezeledLabel;
    NSTextField *levelLabel;
    NSPopUpButton *levelSelector;
    GPUPathControl *_pathControl;
    NSButton *_pathControlSurround;
    NSLayoutConstraint *_toolbarHeightConstraint;
    NSObject<OS_dispatch_queue> *_queue;
    DYRenderingAttributes *_renderingAttributes;
    GPUTraceResourceInfoBubble *_infoBubble;
    BOOL _enableInfoBubblePopup;
    GPUTraceResourceSettingsBubble *_settingsBubble;
    NSLayoutConstraint *_labelConstraint;
    int _toolbarMode;
    id _controlKeyEventTap;
    NSImage *_zoomToFitIcon;
    NSImage *_zoomToActualIcon;
    NSString *_zoomToFitControlLabel;
    NSString *_freeZoomControlLabelFormat;
    struct CGPoint _scrollPoint;
    double _zoom;
    _Bool _zoomToFit;
    double _scaleX;
    double _scaleY;
    int _rotation;
    NSTextField *_imageLabel;
}

+ (id)assetBundle;
@property __weak NSTextField *imageLabel; // @synthesize imageLabel=_imageLabel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dumpImage:(id)arg1 asRaw:(BOOL)arg2;
- (void)settingsUpdate;
- (void)settingsToggleAlphaEnable;
- (void)settingsToggleBlueEnable;
- (void)settingsToggleGreenEnable;
- (void)settingsToggleRedEnable;
- (id)currentDisplayableItem;
- (void)settingsBubbleClosed;
- (void)showSettings:(id)arg1;
- (void)infoBubbleClosed;
- (void)reEnableInfoBubble;
- (void)showInfo:(id)arg1;
- (void)_showBezeledLabelWithString:(id)arg1 forTime:(double)arg2;
- (void)_showZoomLabelWithValue:(double)arg1 forTime:(double)arg2;
- (void)renderBufferViewDidChangeState:(id)arg1;
- (void)changeZoom:(id)arg1;
- (void)gpuZoomToFit:(id)arg1;
- (void)gpuZoomActual:(id)arg1;
- (void)gpuZoomOut:(id)arg1;
- (void)gpuZoomIn:(id)arg1;
- (void)_applyNewZoom:(double)arg1 operation:(int)arg2;
- (BOOL)_zoomToFitEnabled;
- (BOOL)_zoomOutEnabled;
- (BOOL)_zoomInEnabled;
- (void)changeOrientation:(id)arg1;
- (void)gpuFlipHorz:(id)arg1;
- (void)gpuFlipVert:(id)arg1;
- (void)gpuRotateCW:(id)arg1;
- (void)gpuRotateCCW:(id)arg1;
- (void)_updateOrientation:(BOOL)arg1;
- (void)_updateBufferButtonsState;
- (void)_updateToolbarState;
- (void)_switchToolbarMode:(int)arg1;
- (void)chooseImage:(id)arg1;
- (void)_updateImageChooser;
- (void)_updateImageView;
- (void)_updateUIForResourceAndAttributes;
- (void)updateLevelAndLayerMenu:(id)arg1;
- (void)_selectLevel:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)beginEditor;
- (void)_updateConstraints;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)_makeSegmentedControlImagesTemplates:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)supportedResourceProtocols;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

