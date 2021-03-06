//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEModelFoundation/XDUMLNamedElementImp.h>

#import <IDEModelFoundation/XDUMLGeneralization-Protocol.h>

@class NSString;
@protocol XDUMLClassifier;

@interface XDUMLGeneralizationImp : XDUMLNamedElementImp <XDUMLGeneralization>
{
    id <XDUMLClassifier> _general;
    id <XDUMLClassifier> _specific;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setSpecific:(id)arg1;
- (void)setGeneral:(id)arg1;
- (void)remove;
- (id)specific;
- (id)general;
- (id)relatedElements;
- (id)sources;
- (id)targets;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

