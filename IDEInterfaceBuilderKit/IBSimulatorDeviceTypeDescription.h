//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBGenericDeviceTypeDescription.h>

@class NSString;

@interface IBSimulatorDeviceTypeDescription : IBGenericDeviceTypeDescription
{
    NSString *_deviceTypeIdentifier;
}

+ (id)descriptionWithDeviceTypeIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *deviceTypeIdentifier; // @synthesize deviceTypeIdentifier=_deviceTypeIdentifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToDescription:(id)arg1;
- (id)identifier;
- (id)initWithDeviceTypeIdentifier:(id)arg1;

@end
