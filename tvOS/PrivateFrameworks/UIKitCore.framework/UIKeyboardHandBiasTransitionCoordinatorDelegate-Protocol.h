//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIKeyboardHandBiasTransitionContext, UIKeyboardHandBiasTransitionCoordinator, UIKeyboardKeyplaneTransition, UIPanGestureRecognizer, UIView;

@protocol UIKeyboardHandBiasTransitionCoordinatorDelegate <NSObject>
- (UIView *)hostViewForHandBiasTransition:(UIKeyboardHandBiasTransitionCoordinator *)arg1;
- (long long)currentHandBiasWithCoordinator:(UIKeyboardHandBiasTransitionCoordinator *)arg1;
- (void)finishHandBiasTransitionWithFinalBias:(long long)arg1;
- (UIKeyboardHandBiasTransitionContext *)prepareTransition:(UIKeyboardKeyplaneTransition *)arg1 forTargetHandBias:(long long)arg2 coordinator:(UIKeyboardHandBiasTransitionCoordinator *)arg3;
- (_Bool)gestureRecognizerShouldBegin:(UIPanGestureRecognizer *)arg1 forHandBiasCoordinator:(UIKeyboardHandBiasTransitionCoordinator *)arg2;
@end

