//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DBGThread.h"

#import "DBGNavigableItemPerformance.h"

@class NSImage;

@interface DBGThread (DBGNavigableItemPropertySupport) <DBGNavigableItemPerformance>
+ (id)keyPathsForValuesAffectingStatusIcon;
- (double)heightOfRow;
- (BOOL)isGroupHeader:(id)arg1;
- (id)sortValue;
@property(readonly) NSImage *statusIcon;
@end
