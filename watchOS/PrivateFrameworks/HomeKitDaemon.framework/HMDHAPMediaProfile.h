//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDMediaProfile.h>

@interface HMDHAPMediaProfile : HMDMediaProfile
{
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (void)_updateCurrentMediaState:(id)arg1 volumePercentage:(id)arg2 muted:(id)arg3 message:(id)arg4;
- (_Bool)_updateAudioControl:(id)arg1;
- (void)handleCharacteristicsUpdated:(id)arg1;
- (void)handleAccessoryConfigured:(id)arg1;
- (void)handleHomeCharacteristicValuesChanged:(id)arg1;
- (void)_updateCharacteristicChanges;
- (void)_handleCharacteristicChanges:(id)arg1;
- (id)_mediaSessionStateFromProfile;
- (_Bool)_updateRefreshPlayback:(id)arg1;
- (_Bool)_updatePlayback:(id)arg1;
- (id)_smartSpeakerMutedWriteRequestWithMuted:(id)arg1;
- (id)_smartSpeakerMutedReadRequest;
- (id)_smartSpeakerMutedCharacteristic;
- (id)_smartSpeakerVolumeWriteRequestWithVolumePercentage:(id)arg1;
- (id)volumeWriteRequestWithVolumePercentage:(id)arg1;
- (id)_smartSpeakerVolumeReadRequest;
- (id)_smartSpeakerVolumeCharacteristic;
- (id)_smartSpeakerCurrentMediaStateReadRequest;
- (id)_smartSpeakerCurrentMediaStateCharacteristic;
- (id)_smartSpeakerTargetMediaStateWriteRequestWithPlaybackState:(id)arg1;
- (id)playStateWriteRequestWithPlaybackState:(int)arg1;
- (id)_smartSpeakerTargetMediaStateCharacteristic;
- (id)_smartSpeakerService;
- (unsigned int)capability;
- (void)registerForNotifications;
- (id)initWithMediaServices:(id)arg1;

@end

