//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplay;

@interface CADisplayLink : NSObject
{
    void *_impl;
}

+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
+ (id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)invalidate;
- (int)actualFramesPerSecond;
@property(nonatomic) int preferredFramesPerSecond;
@property(readonly, nonatomic) double targetTimestamp;
@property(nonatomic) int frameInterval;
@property(nonatomic) int priority;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double timestamp;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (id)_initWithDisplayLinkItem:(struct DisplayLinkItem *)arg1;
@property(readonly, nonatomic) int minimumFrameDuration;
@property(readonly, nonatomic) double heartbeatRate;
@property(retain, nonatomic) id userInfo;
@property(readonly, nonatomic) double maximumRefreshRate;
@property(readonly, nonatomic) CADisplay *display;

@end

