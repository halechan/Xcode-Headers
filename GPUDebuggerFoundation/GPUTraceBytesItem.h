//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceResourceItem.h>

@interface GPUTraceBytesItem : GPUTraceResourceItem
{
    unsigned long long _bytesType;
    unsigned long long _bindingIndex;
}

@property(readonly, nonatomic) unsigned long long bindingIndex; // @synthesize bindingIndex=_bindingIndex;
@property(readonly, nonatomic) unsigned long long bytesType; // @synthesize bytesType=_bytesType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithController:(id)arg1 parent:(id)arg2 encoderObject:(const void *)arg3 containerID:(unsigned long long)arg4 sharegroupID:(unsigned long long)arg5 label:(id)arg6 bindingIndex:(unsigned long long)arg7 bytesType:(unsigned long long)arg8;

@end
