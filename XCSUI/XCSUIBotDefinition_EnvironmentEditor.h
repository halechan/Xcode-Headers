//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/NSTableViewDataSource-Protocol.h>
#import <XCSUI/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTGradientImageButton, DVTTableView, NSMutableArray, NSMutableDictionary, NSString, XCSUIBotDefinitionContext;

@interface XCSUIBotDefinition_EnvironmentEditor : IDEViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    BOOL _preventGoFowardOrFinish;
    BOOL _viewIsInstalled;
    XCSUIBotDefinitionContext *_botDefinitionContext;
    NSMutableDictionary *_environmentVariables;
    NSMutableArray *_environmentVariablesArray;
    NSMutableArray *_arguments;
    DVTTableView *_argumentsTableView;
    DVTGradientImageButton *_addArgumentButton;
    DVTGradientImageButton *_removeArgumentButton;
    DVTTableView *_environmentVariablesTableView;
    DVTGradientImageButton *_addEnvironmentVariableButton;
    DVTGradientImageButton *_removeEnvironmentVariableButton;
    DVTBorderedView *_tableBorderedView;
    DVTBorderedView *_argumentsTableBorderedView;
}

@property __weak DVTBorderedView *argumentsTableBorderedView; // @synthesize argumentsTableBorderedView=_argumentsTableBorderedView;
@property __weak DVTBorderedView *tableBorderedView; // @synthesize tableBorderedView=_tableBorderedView;
@property __weak DVTGradientImageButton *removeEnvironmentVariableButton; // @synthesize removeEnvironmentVariableButton=_removeEnvironmentVariableButton;
@property __weak DVTGradientImageButton *addEnvironmentVariableButton; // @synthesize addEnvironmentVariableButton=_addEnvironmentVariableButton;
@property __weak DVTTableView *environmentVariablesTableView; // @synthesize environmentVariablesTableView=_environmentVariablesTableView;
@property __weak DVTGradientImageButton *removeArgumentButton; // @synthesize removeArgumentButton=_removeArgumentButton;
@property __weak DVTGradientImageButton *addArgumentButton; // @synthesize addArgumentButton=_addArgumentButton;
@property __weak DVTTableView *argumentsTableView; // @synthesize argumentsTableView=_argumentsTableView;
@property(retain, nonatomic) NSMutableArray *arguments; // @synthesize arguments=_arguments;
@property(retain, nonatomic) NSMutableArray *environmentVariablesArray; // @synthesize environmentVariablesArray=_environmentVariablesArray;
@property(retain, nonatomic) NSMutableDictionary *environmentVariables; // @synthesize environmentVariables=_environmentVariables;
@property(nonatomic) BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
@property(nonatomic) BOOL preventGoFowardOrFinish; // @synthesize preventGoFowardOrFinish=_preventGoFowardOrFinish;
@property(retain, nonatomic) XCSUIBotDefinitionContext *botDefinitionContext; // @synthesize botDefinitionContext=_botDefinitionContext;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)didEndEditingArgument:(id)arg1;
- (void)removeBuildArgument:(id)arg1;
- (void)addBuildArgument:(id)arg1;
- (void)didEndEditingEnvVarValue:(id)arg1;
- (void)didEndEditingEnvVarName:(id)arg1;
- (void)removeEnvironmentVariable:(id)arg1;
- (void)addEnvironmentVariable:(id)arg1;
- (BOOL)canGoForward;
- (void)commitChanges;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

