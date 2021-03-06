//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTCrashLog, DVTCrashPoint;

@interface DVTCrashPointSymbolicator : NSObject
{
    DVTCrashPoint *_crashPoint;
    DVTCrashLog *_unsymbolicatedCrashLog;
}

@property(retain, nonatomic) DVTCrashLog *unsymbolicatedCrashLog; // @synthesize unsymbolicatedCrashLog=_unsymbolicatedCrashLog;
@property(retain, nonatomic) DVTCrashPoint *crashPoint; // @synthesize crashPoint=_crashPoint;
- (void).cxx_destruct;
- (void)updateCrashPoint:(id)arg1 withSymbolicatedCrashLog:(id)arg2;
- (unsigned long long)indexMatchingCrashingFrameInFrames:(id)arg1;
- (id)initWithCrashPoint:(id)arg1 unsymbolicatedCrashLog:(id)arg2;

@end

