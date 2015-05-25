//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, XCConfigurationList, XCPropertyInfoContext;

@interface Xcode3BuildSettingsContext : NSObject
{
    XCConfigurationList *_configurationList;
    XCPropertyInfoContext *_propertyInfoContext;
}

@property(readonly) XCConfigurationList *configurations; // @synthesize configurations=_configurationList;
- (void).cxx_destruct;
@property(readonly) NSArray *buildConfigurationNames;
- (id)nameForBuildSetting:(id)arg1;
- (id)resolvedValueForBuildSetting:(id)arg1;
- (void)setValue:(id)arg1 forBuildSetting:(id)arg2 forConfigurationName:(id)arg3;
- (void)setValue:(id)arg1 forBuildSetting:(id)arg2;
- (id)valueForBuildSetting:(id)arg1 forConfigurationName:(id)arg2;
- (id)valueForBuildSetting:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (id)initWithProject:(id)arg1;

@end

