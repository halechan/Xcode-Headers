//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDEPegasusSourceEditor/NSTableViewDataSource-Protocol.h>
#import <IDEPegasusSourceEditor/NSTableViewDelegate-Protocol.h>

@class DVTTableView, NSLayoutConstraint;

@interface IDEPegasusSourceEditor.CodeRollSymbolicEditSlice : NSViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    // Error parsing type: , name: editor
    // Error parsing type: , name: tableView
    // Error parsing type: , name: bottomPaddingConstraint
    // Error parsing type: , name: overridingFontSize
    // Error parsing type: , name: heightConstraint
    // Error parsing type: , name: category
    // Error parsing type: , name: changes
    // Error parsing type: , name: disableAll
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)cellClicked:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)propertyValuesChanged;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithCategory:(id)arg1 changes:(id)arg2 editor:(id)arg3;
@property(nonatomic) BOOL disableAll; // @synthesize disableAll;
@property(nonatomic, retain) NSLayoutConstraint *bottomPaddingConstraint; // @synthesize bottomPaddingConstraint;
@property(nonatomic, retain) DVTTableView *tableView; // @synthesize tableView;

@end

