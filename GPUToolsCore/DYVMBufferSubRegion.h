//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSData.h>

@class DYVMBuffer;

__attribute__((visibility("hidden")))
@interface DYVMBufferSubRegion : NSData
{
    DYVMBuffer *_parent;
    struct _NSRange _range;
}

- (id)subdataWithRange:(struct _NSRange)arg1;
- (const void *)bytes;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithDYVMBuffer:(id)arg1 range:(struct _NSRange)arg2;

@end

