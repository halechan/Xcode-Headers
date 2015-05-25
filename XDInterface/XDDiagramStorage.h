//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSMapTable, NSMutableArray, XDDiagramController;

@interface XDDiagramStorage : NSObject <NSCoding>
{
    XDDiagramController *_diagramController;
    NSMutableArray *_graphicsLayers;
    NSMutableArray *_graphics;
    NSMapTable *_objectValueToGraphicsPerfHash;
    id _dataSource;
    id _delegate;
    NSDictionary *_userInfo;
    struct _XDDiagramStorageFlags _dsFlags;
}

+ (void)initialize;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void)invalidateGraphic:(id)arg1;
- (BOOL)isInvalidateGraphicDisabled;
- (void)enableInvalidateGraphic;
- (void)disableInvalidateGraphic;
- (id)graphicWithObjectValue:(id)arg1;
- (id)graphicsWithObjectValue:(id)arg1;
- (void)removeGraphic:(id)arg1;
- (void)moveGraphic:(id)arg1 toIndex:(long long)arg2;
- (void)moveGraphicAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)insertGraphic:(id)arg1 atIndex:(long long)arg2;
- (void)addGraphic:(id)arg1;
- (id)graphics;
- (void)removeGraphicsLayer:(id)arg1;
- (void)moveGraphicsLayer:(id)arg1 toIndex:(long long)arg2;
- (void)moveGraphicsLayerAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)insertGraphicsLayer:(id)arg1 atIndex:(long long)arg2;
- (void)addGraphicsLayer:(id)arg1;
- (id)graphicsLayers;
- (id)undoManager;
- (void)_invalidateCacheForGraphic:(id)arg1 withOldObjectValue:(id)arg2;
- (id)_firstDiagramViewForDiagramStorage:(id)arg1;
- (id)diagramController;
- (void)setDiagramController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_removeGraphicFromCache:(id)arg1;
- (void)_addGraphicToCache:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)defaultOperationColor;
- (void)setDefaultOperationColor:(id)arg1;
- (id)defaultAttributeColor;
- (void)setDefaultAttributeColor:(id)arg1;
- (id)defaultNameColor;
- (void)setDefaultNameColor:(id)arg1;
- (id)defaultOperationFont;
- (void)setDefaultOperationFont:(id)arg1;
- (id)defaultAttributeFont;
- (void)setDefaultAttributeFont:(id)arg1;
- (id)defaultNameFont;
- (void)setDefaultNameFont:(id)arg1;

@end

