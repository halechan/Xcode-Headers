//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Xcode3UI/Xcode3TargetCoordinator.h>

@class DVTFilePath, NSDictionary, PBXTarget;

@interface Xcode3TargetInfoPlistCoordinator : Xcode3TargetCoordinator
{
    NSDictionary *_infoPlistDictionary;
    DVTFilePath *_infoPlistAssociateFilePath;
    BOOL _targetInfoPlistFileExists;
    PBXTarget *_pbxTarget;
}

@property(readonly) PBXTarget *pbxTarget; // @synthesize pbxTarget=_pbxTarget;
@property BOOL targetInfoPlistFileExists; // @synthesize targetInfoPlistFileExists=_targetInfoPlistFileExists;
- (void).cxx_destruct;
- (void)removeRequiredCapabilityWithKey:(id)arg1;
- (void)addRequiredCapabilityWithKey:(id)arg1;
- (BOOL)requiredCapabilitiesStateForKey:(id)arg1;
- (void)removeValue:(id)arg1 fromArrayForPlistSetting:(id)arg2;
- (void)addValue:(id)arg1 toArrayForPlistSetting:(id)arg2;
- (void)setValue:(id)arg1 forPlistSetting:(id)arg2;
- (id)valueForPlistSetting:(id)arg1 ofType:(Class)arg2;
- (id)valueForPlistSetting:(id)arg1;
- (id)_infoPlistDictionary;
- (void)primitiveInvalidate;
- (id)initWithTarget:(id)arg1;

@end

