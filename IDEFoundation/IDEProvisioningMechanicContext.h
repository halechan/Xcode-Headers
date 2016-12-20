//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IDEProvisioningManager, IDEProvisioningMechanic, NSString;

@interface IDEProvisioningMechanicContext : NSObject <DVTInvalidation>
{
    IDEProvisioningMechanic *_mechanic;
    IDEProvisioningManager *_provisioningManager;
}

+ (void)initialize;
@property(retain, nonatomic) IDEProvisioningManager *provisioningManager; // @synthesize provisioningManager=_provisioningManager;
@property(retain, nonatomic) IDEProvisioningMechanic *mechanic; // @synthesize mechanic=_mechanic;
- (void).cxx_destruct;
- (id)makeRepairForRepairable:(id)arg1;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
