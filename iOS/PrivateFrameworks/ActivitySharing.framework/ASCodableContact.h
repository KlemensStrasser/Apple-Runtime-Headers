//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class ASCodableRelationshipContainer, NSMutableArray, NSString;

@interface ASCodableContact : PBCodable <NSCopying>
{
    NSMutableArray *_destinations;
    NSString *_fullName;
    NSString *_linkedContactStoreIdentifier;
    ASCodableRelationshipContainer *_relationshipContainer;
    ASCodableRelationshipContainer *_remoteRelationshipContainer;
    NSString *_shortName;
}

+ (Class)destinationsType;
- (void).cxx_destruct;
@property(retain, nonatomic) ASCodableRelationshipContainer *remoteRelationshipContainer; // @synthesize remoteRelationshipContainer=_remoteRelationshipContainer;
@property(retain, nonatomic) ASCodableRelationshipContainer *relationshipContainer; // @synthesize relationshipContainer=_relationshipContainer;
@property(retain, nonatomic) NSMutableArray *destinations; // @synthesize destinations=_destinations;
@property(retain, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain, nonatomic) NSString *linkedContactStoreIdentifier; // @synthesize linkedContactStoreIdentifier=_linkedContactStoreIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRemoteRelationshipContainer;
@property(readonly, nonatomic) _Bool hasRelationshipContainer;
- (id)destinationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationsCount;
- (void)addDestinations:(id)arg1;
- (void)clearDestinations;
@property(readonly, nonatomic) _Bool hasShortName;
@property(readonly, nonatomic) _Bool hasFullName;
@property(readonly, nonatomic) _Bool hasLinkedContactStoreIdentifier;

@end

