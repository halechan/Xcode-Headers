//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class NSArray, NSPopUpButton;
@protocol ITunesSoftwareApplicationDescription;

@interface IDEDistributionAppRecordSelectionViewController : IDEViewController
{
    NSArray *_applicationRecords;
    id <ITunesSoftwareApplicationDescription> _selectedApplicationRecord;
    NSPopUpButton *_appRecordPopUpButton;
}

@property(retain) NSPopUpButton *appRecordPopUpButton; // @synthesize appRecordPopUpButton=_appRecordPopUpButton;
@property(retain, nonatomic) id <ITunesSoftwareApplicationDescription> selectedApplicationRecord; // @synthesize selectedApplicationRecord=_selectedApplicationRecord;
- (void).cxx_destruct;
- (void)selectAppRecord:(id)arg1;
@property(retain) NSArray *applicationRecords; // @synthesize applicationRecords=_applicationRecords;
- (id)nibName;

@end

