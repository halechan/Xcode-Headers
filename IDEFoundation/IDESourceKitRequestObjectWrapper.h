//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDESourceKitRequestObjectWrapper : NSObject
{
    struct _sourcekit_object_s *_obj;
}

- (id)description;
- (struct _sourcekit_object_s *)sourceKitObject;
- (void)dealloc;
- (id)init;
- (id)initWithSourceKitObject:(struct _sourcekit_object_s *)arg1;

@end
