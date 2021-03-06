//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HexFiend/NSMutableCopying-Protocol.h>

@class HFBTreeNode;

@interface HFBTree : NSObject <NSMutableCopying>
{
    unsigned int depth;
    HFBTreeNode *root;
}

- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 toEntriesStartingAtOffset:(unsigned long long)arg2 withUserInfo:(void *)arg3;
- (id)allEntries;
- (id)entryEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)removeEntryAtOffset:(unsigned long long)arg1;
- (void)removeAllEntries;
- (id)entryContainingOffset:(unsigned long long)arg1 beginningOffset:(unsigned long long *)arg2;
- (void)insertEntry:(id)arg1 atOffset:(unsigned long long)arg2;
- (unsigned long long)length;
- (void)checkIntegrityOfBTreeStructure;
- (void)checkIntegrityOfCachedLengths;
- (void)dealloc;
- (id)init;

@end

