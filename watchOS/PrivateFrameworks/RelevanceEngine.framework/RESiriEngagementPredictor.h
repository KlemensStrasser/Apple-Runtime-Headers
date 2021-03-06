//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

#import <RelevanceEngine/RESiriEngagementPredictorProperties-Protocol.h>
#import <RelevanceEngine/REUpNextSiriObserver-Protocol.h>

@class NSString, REUpNextSiriServer, REUpNextTimer;

@interface RESiriEngagementPredictor : REPredictor <REUpNextSiriObserver, RESiriEngagementPredictorProperties>
{
    REUpNextSiriServer *_siriServer;
    REUpNextTimer *_siriDecayTimer;
    NSString *_lastSiriDomain;
    float _siriInfluence;
}

+ (id)supportedFeatures;
- (void).cxx_destruct;
@property(readonly, nonatomic) float siriInfluence;
@property(readonly, nonatomic) NSString *lastSiriDomain;
- (void)siriServer:(id)arg1 receivedCompletedRequestDomain:(id)arg2;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

