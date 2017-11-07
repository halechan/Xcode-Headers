//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DTGraphKit/DTTimelineGraph.h>

@class DTTimelineDecoratedPlane, GPUTimelineGraphDataSource, GPUTimelineGraphOverlayView, GPUTimelineGraphTimelineDecorator, GPUTimelineRulerGraph, NSMutableArray, NSTimer, NSTrackingArea, NSView;
@protocol GPUTimelineGraphContextMenuProvider, GPUTimelineGraphTheme, GPUTimelineGraphTooltipView;

@interface GPUTimelineGraph : DTTimelineGraph
{
    NSMutableArray *_decorators;
    NSMutableArray *_planes;
    NSMutableArray *_groupPlanes;
    NSMutableArray *_groupPlaneChildIndexes;
    id <GPUTimelineGraphTheme> _theme;
    unsigned long long _durationInSelection;
    unsigned long long _itemUnderMouse;
    struct CGPoint _lastMousePosition;
    BOOL _isFiltering;
    BOOL _isZooming;
    GPUTimelineGraphTimelineDecorator *_timelineDecorator;
    NSTrackingArea *_mouseTrackingArea;
    NSTimer *_tooltipTimer;
    BOOL _shouldShowReferencePlane;
    BOOL _shouldShowTimeRuler;
    GPUTimelineGraphDataSource *_dataSource;
    unsigned long long _selectedIndex;
    id <GPUTimelineGraphContextMenuProvider> _contextMenuProvider;
    NSView<GPUTimelineGraphTooltipView> *_tooltipView;
    DTTimelineDecoratedPlane *_rulerPlane;
    GPUTimelineRulerGraph *_rulerGraph;
    GPUTimelineGraphOverlayView *_overlayView;
    unsigned long long _minNanosecondsPerPoint;
    unsigned long long _maxNanosecondsPerPoint;
    struct _NSRange _timelineSelectionRange;
}

@property(nonatomic) unsigned long long maxNanosecondsPerPoint; // @synthesize maxNanosecondsPerPoint=_maxNanosecondsPerPoint;
@property(nonatomic) unsigned long long minNanosecondsPerPoint; // @synthesize minNanosecondsPerPoint=_minNanosecondsPerPoint;
@property(retain, nonatomic) GPUTimelineGraphOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) GPUTimelineRulerGraph *rulerGraph; // @synthesize rulerGraph=_rulerGraph;
@property(readonly, nonatomic) DTTimelineDecoratedPlane *rulerPlane; // @synthesize rulerPlane=_rulerPlane;
@property(nonatomic) BOOL shouldShowTimeRuler; // @synthesize shouldShowTimeRuler=_shouldShowTimeRuler;
@property(retain, nonatomic) NSView<GPUTimelineGraphTooltipView> *tooltipView; // @synthesize tooltipView=_tooltipView;
@property(nonatomic) BOOL shouldShowReferencePlane; // @synthesize shouldShowReferencePlane=_shouldShowReferencePlane;
@property(retain, nonatomic) id <GPUTimelineGraphContextMenuProvider> contextMenuProvider; // @synthesize contextMenuProvider=_contextMenuProvider;
@property(readonly, nonatomic) struct _NSRange timelineSelectionRange; // @synthesize timelineSelectionRange=_timelineSelectionRange;
@property(readonly, nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) id <GPUTimelineGraphTheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) GPUTimelineGraphDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (void)zoomOut;
- (void)zoomIn;
- (unsigned long long)_zoomDelta;
- (void)scaleToFit;
- (struct CGRect)rectOfItemAtIndex:(unsigned long long)arg1;
- (void)selectCurrentGroup;
- (void)_snapSelectionToGroup:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (void)mouseMoved:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)_updateMousePositionFromEvent:(id)arg1;
- (void)_updateTooltipTimer:(struct CGPoint)arg1;
- (void)mouseExited:(id)arg1;
- (void)_updateMouseTrackingArea;
- (unsigned long long)currentDurationOnScreen;
- (unsigned long long)scaleNeededToDisplayDuration:(unsigned long long)arg1 withViewWidth:(double)arg2;
- (unsigned long long)scaleNeededToDisplayDuration:(unsigned long long)arg1;
- (void)setPlaneHandleWidth:(double)arg1;
- (void)setNanosecondOffset:(long long)arg1;
- (void)setNanosecondsPerPoint:(unsigned long long)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsZoomOutIndicatorForTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsZoomInIndicatorForTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsRangeIndicatorState:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearInspectionInfoForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsDisplayInspectionInfoForNanosecond:(unsigned long long)arg2 point:(struct CGPoint)arg3;
- (void)inputHandlerForGraph:(id)arg1 requestYOffset:(double)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondOffset:(long long)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondsPerPoint:(unsigned long long)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsSelectedTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerRequestsToClearSelectedTimeRangeForGraph:(id)arg1;
- (void)inputHandlerDidFinishSelectionForGraph:(id)arg1;
- (unsigned long long)_constraintNanosecondsOffset:(unsigned long long)arg1;
- (void)_updateOverlayView;
- (void)_updateTimelineSelectionRange;
- (void)rightMouseDown:(id)arg1;
- (const struct GPUTimelineGraphDataPlaneCell *)dataPlaneCellAtIndex:(unsigned long long)arg1 planeIndex:(unsigned long long)arg2;
- (const struct GPUTimelineGraphReferencePlaneCell *)referencePlaneCellAtIndex:(unsigned long long)arg1;
- (const struct GPUTimelineGraphDataPlaneCell *)currentDataPlaneCell:(unsigned long long)arg1;
- (const struct GPUTimelineGraphReferencePlaneCell *)currentReferencePlaneCell;
- (id)nameForPlane:(unsigned long long)arg1;
- (id)decoratorAtPoint:(struct CGPoint)arg1;
- (void)clearSelection;
- (void)selectIndex:(unsigned long long)arg1;
- (void)invalidateCellAtIndex:(unsigned long long)arg1;
- (void)scrollToEndOfTimeline;
- (void)_buildPlaneStructure:(BOOL)arg1 collapseGroups:(BOOL)arg2;
- (void)_buildPlanes;
- (void)setContextMenu:(id)arg1;
- (id)_planeFromDataSourcePlane:(unsigned long long)arg1;
- (void)boundsDidChange:(id)arg1;
- (void)invalidateGraph;
- (void)visiblePlanesChanged:(id)arg1;
- (void)visibleIndexesChanged:(id)arg1;
- (void)_setup;
- (void)reset;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end
