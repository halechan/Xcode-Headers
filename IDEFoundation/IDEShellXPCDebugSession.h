//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEDebugSession.h>

@protocol IDEDebugTopNavigableModel;

@interface IDEShellXPCDebugSession : IDEDebugSession
{
    id <IDEDebugTopNavigableModel> _topNavigableModel;
}

- (void)setTopNavigableModel:(id)arg1;
- (id)topNavigableModel;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithName:(id)arg1;
- (id)init;

@end
