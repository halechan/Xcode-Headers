//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableColumn.h>

@class GPUBufferViewerTableHeaderCell, NSString;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerTableColumn : NSTableColumn
{
    NSString *_subTitle;
}

@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(retain) GPUBufferViewerTableHeaderCell *headerCell; // @dynamic headerCell;

@end
