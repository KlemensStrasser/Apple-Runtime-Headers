//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SOS/NSObject-Protocol.h>

@class CMAnomalyEvent, CMAnomalyManager;

@protocol CMAnomalyDelegate <NSObject>

@optional
- (void)anomalyManager:(CMAnomalyManager *)arg1 onAnomalyEvent:(CMAnomalyEvent *)arg2;
- (void)anomalyManager:(CMAnomalyManager *)arg1 didDetectAnomalyEvent:(CMAnomalyEvent *)arg2;
@end

