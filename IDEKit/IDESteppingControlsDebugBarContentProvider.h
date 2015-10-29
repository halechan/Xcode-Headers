//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEDebugBarContentProvider.h>

@class DVTGradientImageButton, DVTObservingToken, IDEStepGradientImageButton;

@interface IDESteppingControlsDebugBarContentProvider : IDEDebugBarContentProvider
{
    IDEStepGradientImageButton *_stepOverButton;
    IDEStepGradientImageButton *_stepInButton;
    DVTGradientImageButton *_stepOutButton;
    DVTObservingToken *_currentStackFrameObserverToken;
}

- (void).cxx_destruct;
- (void)stepOut:(id)arg1;
- (void)stepInByInstruction:(id)arg1;
- (void)stepInSuspendingOtherThreads:(id)arg1;
- (void)stepIn:(id)arg1;
- (void)stepOverByInstruction:(id)arg1;
- (void)stepOverSuspendingOtherThreads:(id)arg1;
- (void)stepOver:(id)arg1;
- (BOOL)_controlShiftKeyOnlyInCurrentEvent;
- (BOOL)_controlKeyOnlyInCurrentEvent;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (void)currentStackFrameDidChange:(id)arg1;
- (void)wasAttachedToDebugBar:(id)arg1;
@property(readonly) BOOL hasRealDebugSession;
- (void)currentDebugSessionStateDidChange;
- (void)currentDebugSessionDidChange;
- (void)workspaceDidFinishLoading;
- (id)_createStepOutButton;
- (id)_createStepInButton;
- (id)_createStepOverButton;
- (id)init;

@end
