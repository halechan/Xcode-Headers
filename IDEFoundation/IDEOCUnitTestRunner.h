//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEStandardTestRunner.h>

@class NSOperationQueue;

@interface IDEOCUnitTestRunner : IDEStandardTestRunner
{
    NSOperationQueue *_commandLineArgsQueue;
}

- (void).cxx_destruct;
- (id)_scheduledTestArgumentsOperationForBuildParameters:(id)arg1 launchParameters:(id)arg2 runDestination:(id)arg3 workspace:(id)arg4 testRunIdentifier:(id)arg5 testRunIdentifiers:(id)arg6 actionResultsBundleWithBaselineOverridesFilePath:(id)arg7 error:(id *)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (id)defaultTestArgumentsOperationForBuildParameters:(id)arg1 launchParameters:(id)arg2 runDestination:(id)arg3 workspace:(id)arg4 error:(id *)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)testOperationsForExecutionEnvironment:(id)arg1 withBuildOperation:(id)arg2 buildParameters:(id)arg3 runDestination:(id)arg4 workspace:(id)arg5 error:(id *)arg6 launchParametersBlock:(CDUnknownBlockType)arg7;
- (id)_writeTestInvocationScope:(id)arg1 forTestBundlePath:(id)arg2 inWorkspace:(id)arg3 invertScope:(BOOL)arg4;
- (id)environmentVariablesForBuildParameters:(id)arg1 runDestination:(id)arg2 testRunIdentifier:(id)arg3 testRunIdentifiers:(id)arg4 error:(id *)arg5;
- (BOOL)treatMissingBaselinesAsTestFailuresForBuildParameters:(id)arg1;

@end

