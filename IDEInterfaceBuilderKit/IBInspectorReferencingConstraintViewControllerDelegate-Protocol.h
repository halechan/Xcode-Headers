//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBInspectorReferencingConstraintViewController, NSEvent, NSView;

@protocol IBInspectorReferencingConstraintViewControllerDelegate <NSObject>
- (void)referencingConstraintViewControllerInitiatedRevealInEditor:(IBInspectorReferencingConstraintViewController *)arg1;
- (void)referencingConstraintViewControllerInitiatedDelete:(IBInspectorReferencingConstraintViewController *)arg1;
- (void)referencingConstraintViewControllerStopHighlightingConstraint:(IBInspectorReferencingConstraintViewController *)arg1;
- (void)referencingConstraintViewControllerStartHighlightingConstraint:(IBInspectorReferencingConstraintViewController *)arg1;
- (void)referencingConstraintViewControllerSelectConstraint:(IBInspectorReferencingConstraintViewController *)arg1 withEvent:(NSEvent *)arg2;
- (void)referencingConstraintViewControllerEditConstraint:(IBInspectorReferencingConstraintViewController *)arg1 sender:(NSView *)arg2;
@end

