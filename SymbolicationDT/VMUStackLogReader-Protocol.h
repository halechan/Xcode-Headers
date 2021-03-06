//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SymbolicationDT/NSObject-Protocol.h>

@class DVT_VMUVMRegion, DVT_VMUVMRegionTracker, NSString;

@protocol VMUStackLogReader <NSObject>
@property(readonly) DVT_VMUVMRegionTracker *regionTracker;
@property(readonly) BOOL usesLiteMode;
@property(readonly) BOOL inspectingLiveProcess;
- (DVT_VMUVMRegion *)vmuVMRegionForAddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (NSString *)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (NSString *)sourcePathForPCaddress:(unsigned long long)arg1;
- (struct _VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1;
- (NSString *)functionNameForPCaddress:(unsigned long long)arg1;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long *)arg2;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(BOOL)arg3 stackFramesBuffer:(unsigned long long *)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(unsigned long long *)arg3;
- (int)enumerateRecords:(void (^)(unsigned int, unsigned long long, unsigned long long, unsigned long long))arg1;

@optional
- (unsigned long long)liteModeStackIDforVMregionAddress:(unsigned long long)arg1;
- (unsigned long long)liteModeStackIDforAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
@end

