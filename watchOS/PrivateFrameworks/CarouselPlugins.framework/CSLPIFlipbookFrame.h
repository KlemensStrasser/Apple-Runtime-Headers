//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarouselPlugins/CSLSFrameSpecifier-Protocol.h>

@class NSDate, NSString;
@protocol CSLSFrameSpecifier;

@interface CSLPIFlipbookFrame : NSObject <CSLSFrameSpecifier>
{
    NSDate *_animationStartDate;
    NSDate *_animationEndDate;
    unsigned int _index;
    id <CSLSFrameSpecifier> _frameSpecifier;
    unsigned long long _machContinuousTimeStamp;
    double _caMediaTimeStamp;
}

+ (id)frameWithAnimationStartDate:(id)arg1 animationEndDate:(id)arg2 index:(unsigned int)arg3 frameSpecifier:(id)arg4;
+ (id)loggingStringForMachContinuousTime:(unsigned long long)arg1;
+ (id)loggingStringForCAMediaTime:(double)arg1;
+ (id)shortLoggingStringForAnimationMinute:(id)arg1;
+ (id)loggingStringForAnimationMinute:(id)arg1;
+ (id)loggingStringForPresentationTime:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double caMediaTimeStamp; // @synthesize caMediaTimeStamp=_caMediaTimeStamp;
@property(nonatomic) unsigned long long machContinuousTimeStamp; // @synthesize machContinuousTimeStamp=_machContinuousTimeStamp;
@property(readonly, nonatomic) id <CSLSFrameSpecifier> frameSpecifier; // @synthesize frameSpecifier=_frameSpecifier;
@property(readonly, nonatomic) unsigned int index; // @synthesize index=_index;
@property(readonly, nonatomic) NSDate *animationEndDate; // @synthesize animationEndDate=_animationEndDate;
@property(readonly, nonatomic) NSDate *animationStartDate; // @synthesize animationStartDate=_animationStartDate;
@property(readonly, nonatomic) NSDate *presentationTime;
@property(readonly, copy) NSString *description;
- (id)initWithAnimationStartDate:(id)arg1 animationEndDate:(id)arg2 index:(unsigned int)arg3 frameSpecifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) float fraction;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

