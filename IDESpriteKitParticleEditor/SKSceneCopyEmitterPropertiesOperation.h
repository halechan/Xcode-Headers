//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKDocumentOperation.h>

@class SKEmitterNode;

@interface SKSceneCopyEmitterPropertiesOperation : SKDocumentOperation
{
    SKEmitterNode *_sourceCopy;
    SKEmitterNode *_destCopy;
    SKEmitterNode *_node;
}

- (void).cxx_destruct;
- (BOOL)_performRevert;
- (BOOL)_performApply;
- (id)initWithDocument:(id)arg1 sourceNode:(id)arg2 destNode:(id)arg3;

@end
