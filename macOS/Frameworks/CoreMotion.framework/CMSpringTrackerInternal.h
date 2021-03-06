//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMSpringTrackerInternal : NSObject
{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    BOOL fTrackingStarted;
    CDUnknownBlockType fHandler;
}

- (void)_querySpringDataFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_handleStartStopResponse:(shared_ptr_bdcc6d0f)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_stopWithHandler:(CDUnknownBlockType)arg1;
- (void)_startWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)_isTracking;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

