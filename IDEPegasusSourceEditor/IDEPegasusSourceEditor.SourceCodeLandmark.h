//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEPegasusSourceEditor/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class NSArray, NSImage, NSString;

@interface IDEPegasusSourceEditor.SourceCodeLandmark : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    // Error parsing type: , name: landmark
    // Error parsing type: , name: children
    // Error parsing type: , name: parent
    // Error parsing type: , name: owner
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)navigableItem_contentDocumentLocationInDocumentURL:(id)arg1;
@property(nonatomic, readonly) NSArray *navigableItem_childRepresentedObjects;
@property(nonatomic, readonly) BOOL navigableItem_isLeaf;
@property(nonatomic, readonly) NSImage *navigableItem_image;
@property(nonatomic, readonly) NSString *navigableItem_name;
- (void)invalidate;
- (void)primitiveInvalidate;
- (void)addWithChild:(id)arg1;
@property(nonatomic, readonly) NSString *typeName;
@property(nonatomic, readonly) NSString *displayName;

@end
