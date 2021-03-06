//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GPUDebuggerKit/GPUBufferViewerDataSourceViewController.h>

#import <GPUDebuggerKit/NSMenuDelegate-Protocol.h>
#import <GPUDebuggerKit/NSScrollViewDelegate-Protocol.h>
#import <GPUDebuggerKit/NSTabViewDelegate-Protocol.h>
#import <GPUDebuggerKit/NSTableViewDataSource-Protocol.h>

@class GPUBufferViewerDefaults, NSString, NSTableView, NSView;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerTableViewController : GPUBufferViewerDataSourceViewController <NSTableViewDataSource, NSTabViewDelegate, NSMenuDelegate, NSScrollViewDelegate>
{
    BOOL _performedInitialScroll;
    NSTableView *_tableView;
    NSView *_tableViewMarkersLabelContainer;
    GPUBufferViewerDefaults *_defaults;
    id <NSObject> _resizeObserver;
}

@property(retain, nonatomic) id <NSObject> resizeObserver; // @synthesize resizeObserver=_resizeObserver;
@property(nonatomic) BOOL performedInitialScroll; // @synthesize performedInitialScroll=_performedInitialScroll;
@property(retain, nonatomic) GPUBufferViewerDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) NSView *tableViewMarkersLabelContainer; // @synthesize tableViewMarkersLabelContainer=_tableViewMarkersLabelContainer;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (struct CGSize)sizeForDisplayingAllData;
- (void)updateMarkersLabelWithContentView:(id)arg1 origin:(struct CGPoint)arg2 disableAnimation:(BOOL)arg3;
- (void)scrollView:(id)arg1 didChangePresentationOrigin:(struct CGPoint)arg2 active:(BOOL)arg3;
- (void)didScrollInScrollView:(id)arg1;
- (void)contentViewFrameDidChange:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)showOrHideTableViewColumn:(id)arg1;
- (void)tableViewDoubleClick:(id)arg1;
- (void)copy:(id)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)scrollToRow0;
- (void)update;
- (void)setRepresentedObject:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

