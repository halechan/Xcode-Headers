//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/TestGlassOutlineNodeAdapter.h>

@interface TestGlassBundleList : TestGlassOutlineNodeAdapter
{
    BOOL _showFrameworks;
}

+ (id)nodeForFrameworkList;
+ (id)nodeForBundleList;
- (void)displayObjectInfoFor:(id)arg1 withinFace:(id)arg2;
- (BOOL)isDataNodeExpandable:(id)arg1;
- (void)instantiateChildrenForDataNode:(id)arg1;
- (id)dataNode:(id)arg1 objectValueForTableColumn:(id)arg2;
- (id)bundles;

@end

