//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "DBGInteractiveSceneViewDelegate.h"
#import "DBGRangeSliderDelegate.h"
#import "DBGSceneCameraDelegate.h"
#import "SCNSceneRendererDelegate.h"

@class DBGHostNode, DBGLayoutConstraintOverlayImageProvider, DBGLayoutConstraintSet, DBGOffScreenPositionCalculator, DBGRangeSliderNode, DBGSceneCamera, DBGSceneNode, DBGSimpleNode, DVTObservingToken, NSMutableArray, NSString, SCNNode;

@interface DBGSceneViewController : NSViewController <SCNSceneRendererDelegate, DBGInteractiveSceneViewDelegate, DBGSceneCameraDelegate, DBGRangeSliderDelegate>
{
    DBGSceneCamera *_camera;
    DBGSceneNode *_pivotNode;
    SCNNode *_rotationNode;
    SCNNode *_centeringNode;
    DBGHostNode *_rootHostNode;
    DBGRangeSliderNode *_rangeSliderNode;
    unsigned long long _rangeSliderLeft;
    unsigned long long _rangeSliderRight;
    DBGSimpleNode *_highlightedNode;
    DBGHostNode *_currentMasterView;
    DBGHostNode *_hostToRestoreAfterUnexplosion;
    BOOL _isShowConstraintsEnabled;
    BOOL _isIn3D;
    BOOL _isClippingEnabled;
    struct CGPoint _panLeftover;
    DBGOffScreenPositionCalculator *_offscreenPositionCalculator;
    NSMutableArray *_selectedViewInstances;
    NSMutableArray *_overlayNodes;
    DBGLayoutConstraintSet *_allConstraints;
    DBGLayoutConstraintOverlayImageProvider *_constraintOverlaySource;
    DVTObservingToken *_highlightedConstraintObserver;
    BOOL _shouldHaveLineWidth;
    int _nodeContentMode;
    unsigned long long _numberOfZPlanes;
    id <DBGSceneViewControllerDataSource> _dataSource;
    id <DBGSceneViewControllerDelegate> _delegate;
}

@property(nonatomic) BOOL shouldHaveLineWidth; // @synthesize shouldHaveLineWidth=_shouldHaveLineWidth;
@property(nonatomic) int nodeContentMode; // @synthesize nodeContentMode=_nodeContentMode;
@property __weak id <DBGSceneViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) id <DBGSceneViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property unsigned long long numberOfZPlanes; // @synthesize numberOfZPlanes=_numberOfZPlanes;
- (void).cxx_destruct;
- (void)renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3;
- (void)cameraDidZoomTo100Percent;
- (void)cameraIsUpdatingZoomFactor;
- (void)moveTo2DCentered:(BOOL)arg1;
- (void)zoom100Percent;
- (void)zoomOut;
- (void)zoomIn;
- (void)resetPivotNode;
- (void)updatePivotNodeWithNode:(id)arg1 withHitLocation:(struct SCNVector3)arg2;
- (void)enableClipping:(BOOL)arg1;
- (void)toggleClipping;
- (void)updateRenderingOrderWithRootNode:(id)arg1;
- (void)toggleShowConstraints;
- (void)sceneViewDidChangeFrameSize;
- (void)adjustCameraPanWithXValue:(double)arg1 YValue:(double)arg2;
- (void)adjustCameraPositionWithXValue:(double)arg1 YValue:(double)arg2;
- (void)updateNodesWithUpdatedCameraZoomFactorBelowRootNode:(id)arg1;
@property(readonly) double zoomFactor;
- (void)adjustCameraZoomLevelWithValue:(double)arg1;
- (void)hideViewsBelow:(id)arg1;
- (void)hideViewsAbove:(id)arg1;
- (void)hideViewsForNode:(id)arg1 withEvent:(id)arg2;
- (id)menuForNode:(id)arg1 withEvent:(id)arg2;
- (void)mouseUpAfterDrag;
- (void)removeCurrentHighlight;
- (void)mousedOverNode:(id)arg1;
- (void)mouseDoubleClickedAndHitNode:(id)arg1 withEvent:(id)arg2;
- (void)mouseClickedAndHitNode:(id)arg1 withEvent:(id)arg2;
- (void)mouseUpAfterDraggingRangeSliderNode:(id)arg1;
- (void)rangeSliderDidChange:(id)arg1;
- (void)draggedRangeSliderNode:(id)arg1 withEvent:(id)arg2 locationInSceneView:(struct CGPoint)arg3;
@property unsigned long long rangeSliderRight;
@property unsigned long long rangeSliderLeft;
- (void)distanceSliderChanged:(id)arg1;
- (void)updatePresentedConstraintSet;
- (BOOL)_selectedObjectsAreSameOrContainChildConstraints:(id)arg1;
- (void)updateWithSelectedViewObjects:(id)arg1;
- (void)updateViewWithIdentifier:(id)arg1 withSnapshot:(id)arg2;
- (void)_finishInitializationByUpdatingUIWithRootView:(id)arg1;
- (void)initializeSceneWithRootView:(id)arg1;
- (void)loadDataWithRootObject:(id)arg1 constraintSet:(id)arg2 viewInstanceCreationOptions:(id)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
