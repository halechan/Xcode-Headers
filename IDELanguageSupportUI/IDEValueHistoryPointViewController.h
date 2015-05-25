//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDELanguageSupportUI/IDEValueHistoryToyViewController.h>

#import "DVTLineGraphLayerDataSource.h"

@class DVTGraph, NSMutableArray, NSString;

@interface IDEValueHistoryPointViewController : IDEValueHistoryToyViewController <DVTLineGraphLayerDataSource>
{
    NSMutableArray *_mutableContents;
    DVTGraph *_graphView;
    struct _DVTGraphBounds _graphBounds;
}

+ (id)displayableReflectionTags;
@property struct _DVTGraphBounds graphBounds; // @synthesize graphBounds=_graphBounds;
@property(retain) DVTGraph *graphView; // @synthesize graphView=_graphView;
@property(retain) NSMutableArray *mutableContents; // @synthesize mutableContents=_mutableContents;
- (void).cxx_destruct;
- (id)lineDataForBounds:(struct _DVTGraphBounds)arg1;
- (id)_pointValueFromResult:(id)arg1;
- (void)_setViewsStartingAtIndex:(unsigned long long)arg1 fromResults:(id)arg2;
- (void)renderResultsForceRedraw:(BOOL)arg1;
- (void)playgroundExecutionEndedAndCompleted:(BOOL)arg1;
- (struct CGSize)preferredContentSizeConstrainedToSize:(struct CGSize)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

