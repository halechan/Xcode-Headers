//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEProductsUI/DVTCrashChartScaffoldView.h>

@class NSArray;

@interface DVTCrashChartOccurrenceCircleView : DVTCrashChartScaffoldView
{
    BOOL _needsLayerUpdate;
    NSArray *_dataSet;
}

@property(copy, nonatomic) NSArray *dataSet; // @synthesize dataSet=_dataSet;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)viewDidChangeBackingProperties;
- (id)initWithFrame:(struct CGRect)arg1;

@end

