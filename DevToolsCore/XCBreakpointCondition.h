//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/PBXObject.h>

@class NSString;

@interface XCBreakpointCondition : PBXObject
{
    NSString *_conditionString;
    BOOL _hasError;
}

+ (id)archivableAttributes;
- (BOOL)isEditable;
- (void)purify;
- (BOOL)useDebuggerSideImplementation;
- (id)conditionString;
- (void)setConditionString:(id)arg1;
- (void)dealloc;
- (void)setIsValid:(BOOL)arg1;
- (BOOL)isValid;
- (void)setupInSession:(id)arg1 onBreakpoint:(id)arg2 withIdentifier:(long long)arg3;

@end
