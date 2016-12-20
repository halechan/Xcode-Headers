//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol DBGSBAddress <NSObject>
- (unsigned long long)GetLoadAddress:(id <DBGSBTarget>)arg1;
- (id <DBGSBLineEntry>)GetLineEntry;
- (unsigned long long)GetOffset;
- (id <DBGSBModule>)GetModule;
- (id <DBGSBSymbol>)GetSymbol;
- (id <DBGSBSymbolContext>)GetSymbolContext:(unsigned int)arg1;
- (id)initWithConnection:(id)arg1;
@end
