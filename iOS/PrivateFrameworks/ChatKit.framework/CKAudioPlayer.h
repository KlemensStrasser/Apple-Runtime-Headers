//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKInternalAudioPlayerDelegate-Protocol.h>

@class CADisplayLink, CKInternalAudioPlayer, CKMediaObject, NSString;
@protocol CKAudioPlayerDelegate;

__attribute__((visibility("hidden")))
@interface CKAudioPlayer : NSObject <CKInternalAudioPlayerDelegate>
{
    CKMediaObject *_mediaObject;
    id <CKAudioPlayerDelegate> _delegate;
    CKInternalAudioPlayer *_audioPlayer;
    CADisplayLink *_displayLink;
    double _prevCurrentTime;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) double prevCurrentTime; // @synthesize prevCurrentTime=_prevCurrentTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) CKInternalAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) __weak id <CKAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void)displayLinkFired:(id)arg1;
- (void)internalAudioPlayerDidPrepareAudioForPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)internalAudioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
@property(nonatomic) float volume;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)prepareToPlay;
- (void)pause;
- (void)stop;
@property(readonly, nonatomic) _Bool usesAVPlayer;
- (void)playAfterDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFileURL:(id)arg1;
- (id)initWithMediaObject:(id)arg1 shouldUseAVPlayer:(_Bool)arg2;
- (id)initWithMediaObject:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

