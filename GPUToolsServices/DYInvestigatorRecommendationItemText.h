//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUToolsServices/DYInvestigatorRecommendationItem.h>

@class NSAttributedString;

@interface DYInvestigatorRecommendationItemText : DYInvestigatorRecommendationItem
{
    NSAttributedString *value;
}

@property(retain, nonatomic) NSAttributedString *value; // @synthesize value;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithString:(id)arg1;
- (id)initWithAttributedString:(id)arg1;

@end

