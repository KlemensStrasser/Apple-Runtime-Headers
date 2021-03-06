//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityEvents/NSCopying-Protocol.h>

@interface AXEGestureEvent : NSObject <NSCopying>
{
    BOOL _isGestureEvent;
    BOOL _isDockControl;
    BOOL _isFluidTouchGesture;
    BOOL _symbolicHotKeyTreatAsKeyDown;
    unsigned long long _hidEventType;
    double _gestureProgress;
    double _zoomValue;
    double _zoomDeltaX;
    double _zoomDeltaY;
    double _rotationValue;
    double _scrollX;
    double _scrollY;
    double _scrollZ;
    double _swipeProgress;
    double _swipePositionX;
    double _swipePositionY;
    double _swipeVelocityX;
    double _swipeVelocityY;
    double _swipeVelocityZ;
    double _eventContextOriginX;
    double _eventContextOriginY;
    long long _symbolicHotKeyValue;
}

+ (BOOL)isGestureEvent:(struct __CGEvent *)arg1;
+ (id)eventFromCGEvent:(struct __CGEvent *)arg1;
@property(nonatomic) BOOL symbolicHotKeyTreatAsKeyDown; // @synthesize symbolicHotKeyTreatAsKeyDown=_symbolicHotKeyTreatAsKeyDown;
@property(nonatomic) long long symbolicHotKeyValue; // @synthesize symbolicHotKeyValue=_symbolicHotKeyValue;
@property(nonatomic) double eventContextOriginY; // @synthesize eventContextOriginY=_eventContextOriginY;
@property(nonatomic) double eventContextOriginX; // @synthesize eventContextOriginX=_eventContextOriginX;
@property(nonatomic) double swipeVelocityZ; // @synthesize swipeVelocityZ=_swipeVelocityZ;
@property(nonatomic) double swipeVelocityY; // @synthesize swipeVelocityY=_swipeVelocityY;
@property(nonatomic) double swipeVelocityX; // @synthesize swipeVelocityX=_swipeVelocityX;
@property(nonatomic) double swipePositionY; // @synthesize swipePositionY=_swipePositionY;
@property(nonatomic) double swipePositionX; // @synthesize swipePositionX=_swipePositionX;
@property(nonatomic) double swipeProgress; // @synthesize swipeProgress=_swipeProgress;
@property(nonatomic) double scrollZ; // @synthesize scrollZ=_scrollZ;
@property(nonatomic) double scrollY; // @synthesize scrollY=_scrollY;
@property(nonatomic) double scrollX; // @synthesize scrollX=_scrollX;
@property(nonatomic) double rotationValue; // @synthesize rotationValue=_rotationValue;
@property(nonatomic) double zoomDeltaY; // @synthesize zoomDeltaY=_zoomDeltaY;
@property(nonatomic) double zoomDeltaX; // @synthesize zoomDeltaX=_zoomDeltaX;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) double gestureProgress; // @synthesize gestureProgress=_gestureProgress;
@property(nonatomic) unsigned long long hidEventType; // @synthesize hidEventType=_hidEventType;
@property(nonatomic) BOOL isFluidTouchGesture; // @synthesize isFluidTouchGesture=_isFluidTouchGesture;
@property(nonatomic) BOOL isDockControl; // @synthesize isDockControl=_isDockControl;
@property(nonatomic) BOOL isGestureEvent; // @synthesize isGestureEvent=_isGestureEvent;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

