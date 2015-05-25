//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DebuggerUI/DBGSimpleNode.h>

@class DBGOffScreenPositionCalculator, NSMutableArray;

@interface DBGNode : DBGSimpleNode
{
    BOOL _ignoreForRepositioning;
    DBGSimpleNode *_contentHostNode;
    DBGSimpleNode *_attachmentHostNode;
    NSMutableArray *_nodesPositionInfluenced;
    DBGOffScreenPositionCalculator *_positionCalculator;
}

+ (id)nodeWithGeometry:(id)arg1;
+ (id)nodeWithIdentifier:(id)arg1;
+ (id)node;
@property(retain) DBGOffScreenPositionCalculator *positionCalculator; // @synthesize positionCalculator=_positionCalculator;
@property(retain) NSMutableArray *nodesPositionInfluenced; // @synthesize nodesPositionInfluenced=_nodesPositionInfluenced;
@property BOOL ignoreForRepositioning; // @synthesize ignoreForRepositioning=_ignoreForRepositioning;
@property(retain) DBGSimpleNode *attachmentHostNode; // @synthesize attachmentHostNode=_attachmentHostNode;
@property(retain) DBGSimpleNode *contentHostNode; // @synthesize contentHostNode=_contentHostNode;
- (void).cxx_destruct;
- (BOOL)getAttachmentsBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (BOOL)getContentBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (id)attachmentNodes;
- (void)addAttachmentNode:(id)arg1;
- (id)contentNodes;
- (void)addContentNode:(id)arg1;
- (id)init;

@end
