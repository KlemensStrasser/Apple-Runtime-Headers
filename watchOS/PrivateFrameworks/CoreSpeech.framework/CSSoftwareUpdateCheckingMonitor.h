//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSoftwareUpdateCheckingMonitor : CSEventMonitor
{
    int _notifyToken;
    _Bool _isSoftwareUpdateCheckingRunning;
}

+ (id)sharedInstance;
- (void)_notifyObserver:(id)arg1 withSoftwareUpdateCheckingRunning:(_Bool)arg2;
- (void)_didReceiveSoftwareUpdateCheckingStateChanged:(_Bool)arg1;
- (void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(_Bool)arg1;
- (_Bool)isSoftwareUpdateCheckingRunning;
- (unsigned char)_softwareUpdateCheckingState;
- (_Bool)_checkSoftwareUpdateCheckingState;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

@end

