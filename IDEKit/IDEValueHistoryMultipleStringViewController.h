//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEValueHistoryToyViewController.h>

@class NSTextStorage, NSTextView;

@interface IDEValueHistoryMultipleStringViewController : IDEValueHistoryToyViewController
{
    NSTextStorage *_textStorage;
    NSTextView *_textView;
}

+ (id)displayableReflectionTags;
@property(retain) NSTextView *textView; // @synthesize textView=_textView;
@property(retain) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)renderResultsForceRedraw:(BOOL)arg1;
- (void)playgroundExecutionEndedAndCompleted:(BOOL)arg1;
- (void)playgroundExecutionStarted;
- (id)toolTip;
- (double)preferredVerticalInset;
- (struct CGSize)preferredContentSizeConstrainedToSize:(struct CGSize)arg1;
- (unsigned long long)representationType;
- (void)viewDidLoad;
- (id)initWithToy:(id)arg1;

@end

