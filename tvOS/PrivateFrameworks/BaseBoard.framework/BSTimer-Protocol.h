//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol BSTimer <NSObject>
+ (id)scheduledTimerWithFireInterval:(double)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 handler:(void (^)(void))arg3;
@property(readonly, nonatomic) double fireInterval;
@property(readonly, nonatomic) double startTime;
@property(readonly, nonatomic, getter=isScheduled) _Bool scheduled;
- (void)cancel;
- (void)schedule;
- (id)initWithFireInterval:(double)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 handler:(void (^)(void))arg3;
@end

