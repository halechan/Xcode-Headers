//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSAdministration/XCSAdministration.AdministrationRecipe.h>

@class NSString;

@interface XCSAdministration.StartServerRecipe : XCSAdministration.AdministrationRecipe
{
    // Error parsing type: , name: buildServiceUsername
    // Error parsing type: , name: sharedDataPath
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)plan;
- (id)initWithBuildServiceUsername:(id)arg1 sharedDataPath:(id)arg2;
@property(nonatomic, readonly) NSString *sharedDataPath; // @synthesize sharedDataPath;
@property(nonatomic, readonly) NSString *buildServiceUsername; // @synthesize buildServiceUsername;

@end

