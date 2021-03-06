//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSStackView.h>

@class NSImageView, NSTextField;

@interface LUI2BatteryView : NSStackView
{
    NSTextField *_batteryTextField;
    NSImageView *_batteryImageView;
}

@property(retain) NSImageView *batteryImageView; // @synthesize batteryImageView=_batteryImageView;
@property(retain) NSTextField *batteryTextField; // @synthesize batteryTextField=_batteryTextField;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBatteryPercentage:(id)arg1;
- (void)setBatteryImage:(id)arg1;
- (void)_setupBatteryView;

@end

