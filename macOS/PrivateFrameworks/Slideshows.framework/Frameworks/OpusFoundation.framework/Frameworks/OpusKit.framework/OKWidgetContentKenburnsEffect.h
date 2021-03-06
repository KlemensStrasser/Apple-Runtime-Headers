//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKWidgetContentEffect.h>

@class NSDictionary;

@interface OKWidgetContentKenburnsEffect : OKWidgetContentEffect
{
    NSDictionary *_settings;
    double _animationStartTime;
    double _animationCurrentTime;
}

+ (id)supportedSettings;
- (void)stopAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (double)animationCurrentTime;
- (void)applyAnimationModification;
- (void)applyLayerValueOnAnimation;
- (void)applyEndAnimation;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)startAnimationWithView:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)applySettings;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)init;

@end

