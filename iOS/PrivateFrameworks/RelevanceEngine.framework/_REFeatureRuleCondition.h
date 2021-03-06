//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RECondition.h>

#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class REFeature;

@interface _REFeatureRuleCondition : RECondition <REAutomaticExportedInterface>
{
    REFeature *_firstFeature;
    long long _relation;
    REFeature *_secondFeature;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) REFeature *secondFeature; // @synthesize secondFeature=_secondFeature;
@property(readonly, nonatomic) long long relation; // @synthesize relation=_relation;
@property(readonly, nonatomic) REFeature *firstFeature; // @synthesize firstFeature=_firstFeature;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_inflectionFeatureValuePairs;
- (_Bool)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id *)arg3;
- (_Bool)_requiresTwoFeatures;
- (id)_notCondition;
- (id)_dependentFeatures;
- (id)initWithFeature:(id)arg1 relation:(long long)arg2 feature:(id)arg3;

@end

