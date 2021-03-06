//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CMPocketStateDelegate-Protocol.h>

@class CMPocketStateManager, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface SBPocketStateMonitor : NSObject <CMPocketStateDelegate>
{
    CMPocketStateManager *_pocketStateManager;
    long long _pocketState;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long pocketState; // @synthesize pocketState=_pocketState;
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithCMPocketStateManager:(id)arg1 calloutQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

