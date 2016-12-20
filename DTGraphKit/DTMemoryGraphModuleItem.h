//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DTGraphKit/DTMutableMemoryGraphItem.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DTMemoryGraphModuleItem : DTMutableMemoryGraphItem
{
    NSString *_path;
    BOOL _isMainExecutable;
    unsigned long long _modulePathSortIndex;
}

@property(readonly) unsigned long long modulePathSortIndex; // @synthesize modulePathSortIndex=_modulePathSortIndex;
@property(readonly) BOOL isMainExecutable; // @synthesize isMainExecutable=_isMainExecutable;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *path;
- (long long)itemKind;
- (id)description;
- (id)initWithModulePath:(id)arg1 graphIndex:(id)arg2 isMainExecutable:(BOOL)arg3;

@end
