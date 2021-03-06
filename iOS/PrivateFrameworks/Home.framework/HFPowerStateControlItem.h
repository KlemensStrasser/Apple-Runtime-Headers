//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFPrimaryStateControlItem.h>

#import <Home/HFPrimaryStateWriter-Protocol.h>

@class NSSet, NSString;

@interface HFPowerStateControlItem : HFPrimaryStateControlItem <HFPrimaryStateWriter>
{
    NSSet *_auxiliaryTargetValueTuples;
}

+ (id)_powerStateTargetValues;
+ (Class)valueClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *auxiliaryTargetValueTuples; // @synthesize auxiliaryTargetValueTuples=_auxiliaryTargetValueTuples;
- (id)_allTargetValues;
- (_Bool)supportsItemRepresentingServices:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)toggleValue;
- (id)togglePrimaryState;
- (id)writePrimaryState:(long long)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (_Bool)canCopyWithCharacteristicOptions:(id)arg1;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

