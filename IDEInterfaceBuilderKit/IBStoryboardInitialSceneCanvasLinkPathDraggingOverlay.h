//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBCanvasOverlay.h>

@class IBStoryboardInitialSceneCanvasLinkPath, NSString;

@interface IBStoryboardInitialSceneCanvasLinkPathDraggingOverlay : IBCanvasOverlay
{
    IBStoryboardInitialSceneCanvasLinkPath *_linkPath;
    BOOL _selected;
    NSString *_title;
    CDStruct_f6143a38 _canvasLinkPathLine;
}

@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) CDStruct_f6143a38 canvasLinkPathLine; // @synthesize canvasLinkPathLine=_canvasLinkPathLine;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutTopDown;

@end

