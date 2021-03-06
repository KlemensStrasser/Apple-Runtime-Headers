//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRCommandOptionsProtobuf, _MRNowPlayingPlayerPathProtobuf;

@interface _MRSendCommandMessageProtobuf : PBCodable <NSCopying>
{
    int _command;
    _MRCommandOptionsProtobuf *_options;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    struct {
        unsigned int command:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property(retain, nonatomic) _MRCommandOptionsProtobuf *options; // @synthesize options=_options;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPlayerPath;
@property(readonly, nonatomic) _Bool hasOptions;
- (int)StringAsCommand:(id)arg1;
- (id)commandAsString:(int)arg1;
@property(nonatomic) _Bool hasCommand;
@property(nonatomic) int command; // @synthesize command=_command;

@end

