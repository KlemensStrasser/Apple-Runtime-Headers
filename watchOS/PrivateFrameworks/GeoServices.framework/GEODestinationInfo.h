//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEODestinationInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _Bool _hasDisplayAddress;
    _Bool _hasDisplayName;
    _Bool _hasSpokenAddress;
    _Bool _hasSpokenName;
    struct {
        unsigned int has_hasDisplayAddress:1;
        unsigned int has_hasDisplayName:1;
        unsigned int has_hasSpokenAddress:1;
        unsigned int has_hasSpokenName:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasHasSpokenAddress;
@property(nonatomic) _Bool hasSpokenAddress;
@property(nonatomic) _Bool hasHasDisplayAddress;
@property(nonatomic) _Bool hasDisplayAddress;
@property(nonatomic) _Bool hasHasSpokenName;
@property(nonatomic) _Bool hasSpokenName;
@property(nonatomic) _Bool hasHasDisplayName;
@property(nonatomic) _Bool hasDisplayName;

@end

