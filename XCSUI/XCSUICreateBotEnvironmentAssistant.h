//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

@class XCSUIBotDefinition_EnvironmentEditor;

@interface XCSUICreateBotEnvironmentAssistant : IDEAssistant
{
    BOOL _preventGoNextOrFinish;
    BOOL _viewIsInstalled;
    XCSUIBotDefinition_EnvironmentEditor *_environmentEditor;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
+ (id)keyPathsForValuesAffectingCreateBotAssistantContext;
@property(retain, nonatomic) XCSUIBotDefinition_EnvironmentEditor *environmentEditor; // @synthesize environmentEditor=_environmentEditor;
@property(nonatomic) BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
- (void).cxx_destruct;
- (void)setPreventGoNextOrFinish:(BOOL)arg1;
- (BOOL)preventGoNextOrFinish;
- (BOOL)canGoForward;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)nextAssistantIdentifier;
- (id)createBotAssistantContext;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

@end
