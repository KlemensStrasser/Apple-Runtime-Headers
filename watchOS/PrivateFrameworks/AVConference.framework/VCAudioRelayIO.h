//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/NSCopying-Protocol.h>
#import <AVConference/VCBasebandCodecNotifications-Protocol.h>

@class NSString;
@protocol VCBasebandCodecNotifications;

@interface VCAudioRelayIO : NSObject <NSCopying, VCBasebandCodecNotifications>
{
    _Bool _usePacketThread;
    struct PacketThread_s *_packetThread;
    _Bool _isRunning;
    unsigned long _micTimestamp;
    struct AudioStreamBasicDescription _micFormat;
    CDUnknownFunctionPointerType _micCallback;
    void *_micCallbackContext;
    struct opaqueVCAudioBufferList *_micBuffer;
    unsigned long _speakerTimestamp;
    struct AudioStreamBasicDescription _speakerFormat;
    CDUnknownFunctionPointerType _speakerCallback;
    void *_speakerCallbackContext;
    struct opaqueVCAudioBufferList *_speakerBuffer;
    CDUnknownFunctionPointerType _updateRemoteCodecInfoCallback;
    void *_updateRemoteCodecInfoContext;
    float _micPowerRMS;
    float _speakerPowerRMS;
    CDUnknownBlockType _startCompletionHandler;
    struct _VCRemoteCodecInfo _remoteCodecInfo;
    id _relay;
}

@property void *updateRemoteCodecInfoContext; // @synthesize updateRemoteCodecInfoContext=_updateRemoteCodecInfoContext;
@property CDUnknownFunctionPointerType updateRemoteCodecInfoCallback; // @synthesize updateRemoteCodecInfoCallback=_updateRemoteCodecInfoCallback;
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property float speakerPowerRMS; // @synthesize speakerPowerRMS=_speakerPowerRMS;
@property float micPowerRMS; // @synthesize micPowerRMS=_micPowerRMS;
@property(readonly) struct PacketThread_s *packetThread; // @synthesize packetThread=_packetThread;
@property _Bool usePacketThread; // @synthesize usePacketThread=_usePacketThread;
@property(copy) CDUnknownBlockType startCompletionHandler; // @synthesize startCompletionHandler=_startCompletionHandler;
@property unsigned long micTimestamp; // @synthesize micTimestamp=_micTimestamp;
@property unsigned long speakerTimestamp; // @synthesize speakerTimestamp=_speakerTimestamp;
@property(readonly, nonatomic) struct opaqueVCAudioBufferList *speakerBuffer; // @synthesize speakerBuffer=_speakerBuffer;
@property void *speakerCallbackContext; // @synthesize speakerCallbackContext=_speakerCallbackContext;
@property CDUnknownFunctionPointerType speakerCallback; // @synthesize speakerCallback=_speakerCallback;
@property struct AudioStreamBasicDescription speakerFormat; // @synthesize speakerFormat=_speakerFormat;
@property(readonly, nonatomic) struct opaqueVCAudioBufferList *micBuffer; // @synthesize micBuffer=_micBuffer;
@property void *micCallbackContext; // @synthesize micCallbackContext=_micCallbackContext;
@property CDUnknownFunctionPointerType micCallback; // @synthesize micCallback=_micCallback;
@property struct AudioStreamBasicDescription micFormat; // @synthesize micFormat=_micFormat;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;
- (void)printStreamFormats;
- (void)closeRecordings;
- (void)createRecordingsWithName:(id)arg1;
- (void)destroyPacketThread;
- (_Bool)createPacketThreadWithIOBufferDuration:(double)arg1 name:(id)arg2 error:(id *)arg3;
- (void)createAudioBuffersWithIOBufferDuration:(double)arg1;
@property id <VCBasebandCodecNotifications> relay;
@property(nonatomic) const struct _VCRemoteCodecInfo *remoteCodecInfo;
- (void)dealloc;
- (_Bool)isEqualToRelayIO:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isInitialized;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

