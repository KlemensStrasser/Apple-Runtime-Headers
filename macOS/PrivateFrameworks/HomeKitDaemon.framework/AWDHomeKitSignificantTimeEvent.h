//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface AWDHomeKitSignificantTimeEvent : PBCodable <NSCopying>
{
    NSString *_significantEvent;
    BOOL _offsetPresent;
    struct {
        unsigned int offsetPresent:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL offsetPresent; // @synthesize offsetPresent=_offsetPresent;
@property(retain, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasOffsetPresent;
@property(readonly, nonatomic) BOOL hasSignificantEvent;

@end

