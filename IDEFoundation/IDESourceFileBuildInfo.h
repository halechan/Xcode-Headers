//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IDESourceFileBuildInfo : NSObject
{
    NSString *_languageName;
    NSArray *_toolchainIdents;
    NSArray *_swiftCommandLine;
    NSString *_swiftBuiltProductsDir;
    NSArray *_clangCommandLine;
    NSString *_clangBuiltProductsDir;
    NSString *_clangPrefixFilePath;
    NSString *_clangPCHFilePath;
    NSString *_clangPCHHashCriteria;
    NSArray *_clangPCHCommandLine;
}

+ (id)sourceFileBuildInfoFromLegacyASTBuildInfoDictionaryRepresentation:(id)arg1;
@property(readonly) NSArray *clangPCHCommandLine; // @synthesize clangPCHCommandLine=_clangPCHCommandLine;
@property(readonly) NSString *clangPCHHashCriteria; // @synthesize clangPCHHashCriteria=_clangPCHHashCriteria;
@property(readonly) NSString *clangPCHFilePath; // @synthesize clangPCHFilePath=_clangPCHFilePath;
@property(readonly) NSString *clangPrefixFilePath; // @synthesize clangPrefixFilePath=_clangPrefixFilePath;
@property(readonly) NSString *clangBuiltProductsDir; // @synthesize clangBuiltProductsDir=_clangBuiltProductsDir;
@property(readonly) NSArray *clangCommandLine; // @synthesize clangCommandLine=_clangCommandLine;
@property(readonly) NSString *swiftBuiltProductsDir; // @synthesize swiftBuiltProductsDir=_swiftBuiltProductsDir;
@property(readonly) NSArray *swiftCommandLine; // @synthesize swiftCommandLine=_swiftCommandLine;
@property(readonly) NSArray *toolchainIdents; // @synthesize toolchainIdents=_toolchainIdents;
@property(readonly) NSString *languageName; // @synthesize languageName=_languageName;
- (void).cxx_destruct;
- (id)legacyDictionaryASTBuildInfoRepresentation;
- (id)initFromLegacyASTBuildInfoDictionaryRepresentation:(id)arg1;

@end
