//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEOpenQuicklyAbstractTableCellView.h>

@class NSImageView, NSTextField;

@interface IDEOpenQuicklyAlternateTableCellView : IDEOpenQuicklyAbstractTableCellView
{
    NSTextField *_titleField;
    NSImageView *_iconView;
}

@property(readonly) NSImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly) NSTextField *titleField; // @synthesize titleField=_titleField;
- (void).cxx_destruct;
- (void)arrangeSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

