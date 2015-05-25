//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCNView.h"

@class SCNNode;

@interface DBGInteractiveSceneView : SCNView
{
    SCNNode *lastNodeMousedOver;
    BOOL _mouseDownIsClick;
    struct CGPoint _mousePosition;
    struct CGPoint _lastMousePosition;
    SCNNode *_activeRangeSliderNode;
    int _nodeContentMode;
    id <DBGInteractiveSceneViewDelegate> _eventDelegate;
}

@property(nonatomic) int nodeContentMode; // @synthesize nodeContentMode=_nodeContentMode;
@property __weak id <DBGInteractiveSceneViewDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (float)projectedAreaOfNode:(id)arg1;
- (id)appropriateNodeFromHitTestResult:(id)arg1;
- (id)appropriateResultFromHitTestResults:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)filterHitTestResults:(id)arg1 hitLocation:(struct CGPoint)arg2;
- (id)filteredHitTestResultsFromGestureRecognizer:(id)arg1;
- (id)filteredHitTestResultsFromEvent:(id)arg1;
- (id)_filteredHitTestResultFromLocation:(struct CGPoint)arg1;
- (BOOL)nodeIsPartOfRangeSlider:(id)arg1;
- (id)rangeSliderNodeInHitTestResults:(id)arg1;
- (id)init;

@end
