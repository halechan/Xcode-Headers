//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEDataModelClassUMLRepresentation, IDEDataModelDataTypeUMLRepresentation, NSString;

@interface IDEDataModelAttributeUMLRepresentation : NSObject
{
    NSString *_name;
    IDEDataModelDataTypeUMLRepresentation *_type;
    IDEDataModelClassUMLRepresentation *_ownerClass;
}

@property(readonly) IDEDataModelClassUMLRepresentation *ownerClass; // @synthesize ownerClass=_ownerClass;
@property(readonly) IDEDataModelDataTypeUMLRepresentation *type; // @synthesize type=_type;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 ownerClass:(id)arg2;
- (id)_typeNameForName:(id)arg1 ownerClass:(id)arg2;

@end
