//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface HUNoiseSample : NSObject
{
    NSDate *_sampleDate;
    float _splValue;
    float _sampleDuration;
}

- (void).cxx_destruct;
@property(nonatomic) float sampleDuration; // @synthesize sampleDuration=_sampleDuration;
@property(nonatomic) float splValue; // @synthesize splValue=_splValue;
@property(retain, nonatomic) NSDate *sampleDate; // @synthesize sampleDate=_sampleDate;
- (id)initWithSampleDate:(id)arg1 splValue:(float)arg2 andDuration:(float)arg3;

@end

