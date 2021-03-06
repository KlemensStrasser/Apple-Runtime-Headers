//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface _PKSpringLoadingGestureRecognizer : UIGestureRecognizer
{
    _Bool _hasRecognized;
    double _stationaryFingerTimeout;
    UITouch *_gestureTouch;
    struct CGPoint _startLocation;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint startLocation; // @synthesize startLocation=_startLocation;
@property(retain, nonatomic) UITouch *gestureTouch; // @synthesize gestureTouch=_gestureTouch;
@property(nonatomic) _Bool hasRecognized; // @synthesize hasRecognized=_hasRecognized;
@property(nonatomic) double stationaryFingerTimeout; // @synthesize stationaryFingerTimeout=_stationaryFingerTimeout;
- (_Bool)_pointShouldBeRecognized:(struct CGPoint)arg1;
- (_Bool)_pointInsideRecognitionPossibleArea:(struct CGPoint)arg1;
- (void)_stationaryFingerTimerFired;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

