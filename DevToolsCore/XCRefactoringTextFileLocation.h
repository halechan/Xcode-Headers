//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCRefactoringFileLocation.h>

@interface XCRefactoringTextFileLocation : XCRefactoringFileLocation
{
    struct _XCRefactoringLineInfo _lineInfo;
}

- (id)description;
- (struct _XCRefactoringLineInfo)lineInfo;
- (long long)compareFileLocationNoPath:(id)arg1;
- (BOOL)isEqualToFileLocation:(id)arg1;
- (id)initWithFilePath:(id)arg1 lineInfo:(struct _XCRefactoringLineInfo)arg2;

@end

