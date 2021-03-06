//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBTreeNodeViewControllerDelegate.h"
#import "SBViewControllerTransitionContextDelegate.h"

@class NSArray, NSHashTable, NSMutableArray, NSString, SBViewControllerTransitionContext;

@interface SBTreeNodeViewController : UIViewController <SBViewControllerTransitionContextDelegate, SBTreeNodeViewControllerDelegate>
{
    id <SBTreeNode> _treeNode;
    id <SBTreeNode> _fromExpandedChildTreeNode;
    id <SBTreeNode> _toExpandedChildTreeNode;
    SBTreeNodeViewController *_fromExpandedViewController;
    SBTreeNodeViewController *_toExpandedViewController;
    NSMutableArray *_expandedTreeNodes;
    long long _currentTransitionOperation;
    SBViewControllerTransitionContext *_currentTransition;
    CDUnknownBlockType _currentTransitionContinuation;
    CDUnknownBlockType _clientOperationCompletion;
    NSHashTable *_transitionObservers;
    id <SBTreeNodeViewControllerDelegate> _delegate;
    SBTreeNodeViewController *_parentTreeNodeViewController;
}

@property(nonatomic) __weak SBTreeNodeViewController *parentTreeNodeViewController; // @synthesize parentTreeNodeViewController=_parentTreeNodeViewController;
@property(nonatomic) __weak id <SBTreeNodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setFinalStateForViewController:(id)arg1;
- (void)_updateStateForViewController:(id)arg1;
- (void)_handleRemoveChildViewController:(id)arg1;
- (void)_handleWillRemoveChildViewController:(id)arg1;
- (void)_handleAddChildViewController:(id)arg1;
- (void)_handleWillAddChildViewController:(id)arg1;
- (void)_performOperation:(long long)arg1 animated:(_Bool)arg2 fromViewController:(id)arg3 fromTreeNode:(id)arg4 toViewController:(id)arg5 toTreeNode:(id)arg6 withContinuation:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_forwardToExpandedViewControllerNearestToTreeNode:(id)arg1 withNodeModifier:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;
- (void)_forwardToExpandedViewControllerNearestToTreeNode:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_transitionToExpandedTreeNode:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_setExpandedTreeNode:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_rootParentViewController;
- (_Bool)_shouldRemoveViewController:(id)arg1 afterTransitionFromViewController:(id)arg2 toViewController:(id)arg3;
- (_Bool)_shouldAddViewController:(id)arg1 afterTransitionFromViewController:(id)arg2 toViewController:(id)arg3;
- (_Bool)_shouldRemoveViewController:(id)arg1 afterTransitionFromViewController:(id)arg2 toViewController:(id)arg3 canceled:(_Bool)arg4;
- (_Bool)_shouldAddViewController:(id)arg1 afterTransitionFromViewController:(id)arg2 toViewController:(id)arg3 canceled:(_Bool)arg4;
- (_Bool)_shouldRemoveViewControllerAfterCurrentTransitionCompletes:(id)arg1;
- (_Bool)_shouldAddViewControllerAfterCurrentTransitionCompletes:(id)arg1;
- (struct CGRect)_finalFrameForViewController:(id)arg1 forTransitionFromViewController:(id)arg2 toViewController:(id)arg3;
- (struct CGRect)_initialFrameForViewController:(id)arg1 forTransitionFromViewController:(id)arg2 toViewController:(id)arg3;
@property(readonly, nonatomic) id <SBTreeNode> _expandedTreeNode;
@property(readonly, nonatomic) id <SBTreeNode> _toExpandedTreeNode;
@property(readonly, nonatomic) id <SBTreeNode> _fromExpandedTreeNode;
@property(readonly, nonatomic) SBTreeNodeViewController *_expandedViewController;
@property(retain, nonatomic, setter=_setToExpandedViewController:) SBTreeNodeViewController *_toExpandedViewController;
@property(retain, nonatomic, setter=_setFromExpandedViewController:) SBTreeNodeViewController *_fromExpandedViewController;
- (void)transitionDidFinish:(id)arg1;
- (void)transitionWillFinish:(id)arg1;
- (void)transitionDidReverse:(id)arg1;
- (void)transitionWillReverse:(id)arg1;
- (void)treeNodeViewController:(id)arg1 willPerformOperation:(long long)arg2 fromViewController:(id)arg3 fromTreeNode:(id)arg4 toViewController:(id)arg5 toTreeNode:(id)arg6 withTransitionCoordinator:(id)arg7;
- (id)treeNodeViewController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)treeNodeViewController:(id)arg1 animationControllerForOperation:(long long)arg2 animated:(_Bool)arg3 fromViewController:(id)arg4 fromTreeNode:(id)arg5 toViewController:(id)arg6 toTreeNode:(id)arg7;
- (id)treeNodeViewController:(id)arg1 destinationExpandedTreeNodeForTargetTreeNode:(id)arg2;
- (id)treeNodeViewController:(id)arg1 targetExpandedTreeNodeForProposedTreeNode:(id)arg2;
- (void)treeNodeViewController:(id)arg1 dismissedChildTreeNode:(id)arg2;
- (void)treeNodeViewController:(id)arg1 selectedChildTreeNode:(id)arg2;
- (id)treeNodeViewController:(id)arg1 viewControllerForChildTreeNode:(id)arg2;
@property(readonly, nonatomic) _Bool isTransitioning;
- (id)transitionCoordinator;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (struct CGRect)frameForChildTreeNodeViewController:(id)arg1 inState:(long long)arg2 withParentContainerSize:(struct CGSize)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withContainingExpandedTreeNode:(id)arg2 transitionCoordinator:(id)arg3;
- (void)removeViewFromHierarchyForChildTreeNodeViewController:(id)arg1;
- (void)addViewToHierarchyForChildTreeNodeViewController:(id)arg1;
- (void)removeChildTreeNodeViewController:(id)arg1;
- (void)addChildTreeNodeViewController:(id)arg1;
- (void)removeTransitionObserver:(id)arg1;
- (void)addTransitionObserver:(id)arg1;
@property(readonly, nonatomic) SBTreeNodeViewController *deepestExpandedDescendantViewController;
@property(readonly, nonatomic) SBTreeNodeViewController *expandedChildViewController;
- (void)setTopExpandedTreeNode:(id)arg1;
- (_Bool)isExpandedForContainingExpandedTreeNode:(id)arg1;
@property(readonly, nonatomic, getter=isExpanded) _Bool expanded;
@property(readonly, nonatomic) id <SBTreeNode> effectiveExpandedTreeNode;
@property(readonly, copy, nonatomic) NSArray *expandedTreeNodes;
@property(readonly, nonatomic) id <SBTreeNode> containingExpandedTreeNode;
- (id)indexPath;
- (void)setExpandedTreeNodes:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)popExpandedTreeNodeAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)pushExpandedTreeNode:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setExpandedTreeNode:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) id <SBTreeNode> treeNode;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

