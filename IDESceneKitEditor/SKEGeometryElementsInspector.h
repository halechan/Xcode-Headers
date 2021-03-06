//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDESceneKitEditor/SKEStaticTableViewInspector.h>

#import <IDESceneKitEditor/NSTableViewDataSource-Protocol.h>

@class DVTGradientImageButton, NSString;

@interface SKEGeometryElementsInspector : SKEStaticTableViewInspector <NSTableViewDataSource>
{
    DVTGradientImageButton *_quickLookButton;
    DVTGradientImageButton *_toolsButton;
}

+ (BOOL)wantsEditionBar;
+ (id)tableColumnTitles;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)convertAll:(id)arg1;
- (void)convertOne:(id)arg1;
- (void)toolsAction:(id)arg1;
- (void)quickLookAction:(id)arg1;
- (void)configureEditionBar;
- (void)viewDidInstall;
- (void)loadView;
- (void)primitiveInvalidate;
- (void)didSetInspectedObjects:(id)arg1;
- (void)initViewData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

