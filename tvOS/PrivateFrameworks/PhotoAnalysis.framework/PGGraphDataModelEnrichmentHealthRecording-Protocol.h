//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class NSDate;
@protocol PGGraphHealthRecording;

@protocol PGGraphDataModelEnrichmentHealthRecording <NSObject>
- (void)recordProcessingWasCancelledWithGraphHealthRecorder:(id <PGGraphHealthRecording>)arg1;
- (void)recordCurrentProcessingDate:(NSDate *)arg1 lastProcessingDate:(NSDate *)arg2 graphHealthRecorder:(id <PGGraphHealthRecording>)arg3;
@end

