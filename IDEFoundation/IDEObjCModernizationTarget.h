//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEMigrationTarget.h>

@class NSString;

@interface IDEObjCModernizationTarget : IDEMigrationTarget
{
    BOOL _enabled;
    NSString *_subTitle;
}

@property BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, copy) NSString *subTitle; // @synthesize subTitle=_subTitle;
- (void).cxx_destruct;
- (void)updateBuildSettings;
- (id)warningMessage;
- (id)initWithBlueprint:(id)arg1 migrationContext:(id)arg2;

@end
