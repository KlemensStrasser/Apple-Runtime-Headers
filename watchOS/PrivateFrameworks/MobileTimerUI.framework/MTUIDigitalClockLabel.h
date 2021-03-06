//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileTimerUI/MTUIDateLabel.h>

@class NSCalendar, NSDate;

@interface MTUIDigitalClockLabel : MTUIDateLabel
{
    NSCalendar *_calendar;
    NSDate *_baseDate;
    int _hour;
    int _minute;
}

- (void).cxx_destruct;
- (void)setTimeLabelText:(id)arg1;
- (void)forceSetHour:(int)arg1 minute:(int)arg2;
- (_Bool)setHour:(int)arg1 minute:(int)arg2;
- (void)refreshUI;
- (void)resetFontSizes;
- (void)significantTimeChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

