//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AVKit/AVInfoCollectionViewHorizontalLayoutDelegate-Protocol.h>
#import <AVKit/UICollectionViewDataSource-Protocol.h>

@class AVInfoMenuTransitioningAnimation, AVInfoPanelContentViewController, NSArray, NSIndexPath, NSLayoutConstraint, NSString, UICollectionView, UIView, UIVisualEffectView;
@protocol AVInfoMenuDelegate;

__attribute__((visibility("hidden")))
@interface AVInfoMenuController : UIViewController <UICollectionViewDataSource, AVInfoCollectionViewHorizontalLayoutDelegate>
{
    UIVisualEffectView *_dividerContainer;
    UIView *_divider;
    AVInfoPanelContentViewController *_selectedViewController;
    double _timeOfLastFocusChange;
    AVInfoMenuTransitioningAnimation *_transitioningAnimation;
    id <AVInfoMenuDelegate> _delegate;
    NSArray *_viewControllers;
    NSIndexPath *_selectedIndexPath;
    UICollectionView *_collectionView;
    UIView *_panelWrapperView;
    NSLayoutConstraint *_panelWrapperViewHeightConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *panelWrapperViewHeightConstraint; // @synthesize panelWrapperViewHeightConstraint=_panelWrapperViewHeightConstraint;
@property(readonly, nonatomic) UIView *panelWrapperView; // @synthesize panelWrapperView=_panelWrapperView;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) __weak id <AVInfoMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_interruptTransitioningAnimation;
- (_Bool)_isTransitioning;
- (void)transitionSelectionFrom:(id)arg1 to:(id)arg2 animated:(_Bool)arg3;
- (struct CGSize)preferredSizeForViewController:(id)arg1;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;
- (void)_focusIndexPath:(id)arg1;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)_viewControllerForIndexPath:(id)arg1;
- (id)_firstIndexPath;
- (id)_indexPathForIndex:(long long)arg1;
- (long long)_indexForIndexPath:(id)arg1;
@property(retain, nonatomic) AVInfoPanelContentViewController *selectedViewController;
@property(nonatomic) unsigned long long selectedIndex;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)divider;
- (id)dividerContainer;
@property(retain, nonatomic) UIView *backgroundView;
@property(readonly, nonatomic) UIView *menuView;
- (id)infoMenuLayout;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

