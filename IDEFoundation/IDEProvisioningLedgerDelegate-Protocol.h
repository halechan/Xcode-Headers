//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class IDEProvisioningLedger, IDEProvisioningLedgerEntry, NSError, NSString;

@protocol IDEProvisioningLedgerDelegate <NSObject>

@optional
- (void)provisioningLedger:(IDEProvisioningLedger *)arg1 didAddDetails:(NSString *)arg2 toLedgerEntry:(IDEProvisioningLedgerEntry *)arg3;
- (void)provisioningLedger:(IDEProvisioningLedger *)arg1 didCloseLedgerEntry:(IDEProvisioningLedgerEntry *)arg2 withError:(NSError *)arg3;
- (void)provisioningLedger:(IDEProvisioningLedger *)arg1 didOpenLedgerEntry:(IDEProvisioningLedgerEntry *)arg2;
@end
