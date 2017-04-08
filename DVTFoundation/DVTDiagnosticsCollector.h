//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTFilePath, DVTStackBacktrace, NSString;

@interface DVTDiagnosticsCollector : NSObject <DVTInvalidation>
{
    DVTFilePath *_path;
    NSString *_extensionIdentifier;
    NSString *_extensionName;
    CDUnknownBlockType _handler;
}

+ (void)initialize;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *extensionName; // @synthesize extensionName=_extensionName;
@property(copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(retain, nonatomic) DVTFilePath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)_copyResourcesFromPaths:(id)arg1 errors:(id *)arg2;
- (BOOL)writeDictionary:(id)arg1 toFileNamed:(id)arg2;
- (BOOL)runToolAtPath:(id)arg1 arguments:(id)arg2 outputFileName:(id)arg3 error:(id *)arg4;
- (BOOL)runTool:(unsigned long long)arg1;
- (void)copyResourcesFromPaths:(id)arg1;
- (void)endCollectingWithErrors:(id)arg1;
- (void)startCollecting;
- (void)primitiveInvalidate;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 path:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
