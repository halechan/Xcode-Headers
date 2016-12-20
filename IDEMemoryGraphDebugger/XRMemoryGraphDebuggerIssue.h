//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTRadarSupport_Issue.h"

@class NSString;

@interface XRMemoryGraphDebuggerIssue : NSObject <DVTRadarSupport_Issue>
{
    NSString *_memGraphIssueString;
    NSString *_memGraphIssueBriefString;
    unsigned long long _associatedRadarID;
}

@property(readonly, nonatomic) unsigned long long associatedRadarID; // @synthesize associatedRadarID=_associatedRadarID;
@property(retain) NSString *memGraphIssueBriefString; // @synthesize memGraphIssueBriefString=_memGraphIssueBriefString;
@property(retain) NSString *memGraphIssueString; // @synthesize memGraphIssueString=_memGraphIssueString;
- (void).cxx_destruct;
@property(readonly, nonatomic) id underlyingIssue;
@property(readonly, copy) NSString *attachLabelTitle;
@property(readonly, copy) NSString *stringRepresentation;
@property(readonly, copy) NSString *briefStringRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
