//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SBPressPrecedenceArbiter : NSObject
{
    unsigned long long _volumeAndLockButtonPriority;
    long long _homeButtonType;
    _Bool _isMusicPlayingSomewhere;
    NSArray *_hardwareButtons;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *hardwareButtons; // @synthesize hardwareButtons=_hardwareButtons;
- (unsigned long long)_currentButtonPriority;
- (void)_applyButtonPriority:(unsigned long long)arg1;
- (void)_updateButtonPrioritiesForClientIsPlayingNotification:(id)arg1;
- (void)_updateButtonPrioritiesForNotification:(id)arg1;
- (void)_updateButtonPriority;
- (void)_initializeButtonPriorities;
- (_Bool)_shouldArbitrateLockAndVolumeHardwareButtonPriorities;
- (id)initWithHomeButtonType:(long long)arg1;

@end

