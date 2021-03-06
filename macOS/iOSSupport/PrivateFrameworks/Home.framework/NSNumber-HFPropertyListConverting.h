//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNumber.h>

#import <Home/HFPropertyListConvertible-Protocol.h>

@class NSString;

@interface NSNumber (HFPropertyListConverting) <HFPropertyListConvertible>
- (id)hf_smallerNumber:(id)arg1;
- (id)hf_largerNumber:(id)arg1;
- (long long)hf_compareAbsoluteValue:(id)arg1;
- (id)hf_valueRoundedToNearestStepValue:(id)arg1 relativeToBaseValue:(id)arg2;
@property(readonly, copy, nonatomic) NSNumber *hf_absoluteValue;
@property(readonly, nonatomic) BOOL hf_isSignedValue;
@property(readonly, nonatomic) BOOL hf_isFloatValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

