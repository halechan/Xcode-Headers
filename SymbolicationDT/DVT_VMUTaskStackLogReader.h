//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SymbolicationDT/VMUStackLogReader-Protocol.h>

@class DVT_VMUTaskMemoryScanner, DVT_VMUVMRegionTracker, NSString;

@interface DVT_VMUTaskStackLogReader : NSObject <VMUStackLogReader>
{
    unsigned int _task;
    BOOL _usesLiteMode;
    DVT_VMUTaskMemoryScanner *_scanner;
    DVT_VMUVMRegionTracker *_regionTracker;
}

@property(nonatomic) __weak DVT_VMUTaskMemoryScanner *scanner; // @synthesize scanner=_scanner;
@property(readonly) BOOL usesLiteMode; // @synthesize usesLiteMode=_usesLiteMode;
- (void).cxx_destruct;
- (int)enumerateRecords:(CDUnknownBlockType)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (id)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (id)sourcePathForPCaddress:(unsigned long long)arg1;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (struct _VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1;
- (id)functionNameForPCaddress:(unsigned long long)arg1;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long *)arg2;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(BOOL)arg3 stackFramesBuffer:(unsigned long long *)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(unsigned long long *)arg3;
- (unsigned long long)liteModeStackIDforVMregionAddress:(unsigned long long)arg1;
- (unsigned long long)liteModeStackIDforAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
@property(readonly) DVT_VMUVMRegionTracker *regionTracker;
@property(readonly) BOOL inspectingLiveProcess;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
