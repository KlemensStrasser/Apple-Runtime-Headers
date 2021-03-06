//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBUserOnboardingChannelPickerComplete : PBCodable <NSCopying>
{
    NSMutableArray *_channelIds;
    int _channelPickerPresentationReason;
    NSMutableArray *_topicIds;
    int _totalChannelSelections;
    int _totalTopicSelections;
    BOOL _fromPersonalizeNews;
    struct {
        unsigned int channelPickerPresentationReason:1;
        unsigned int totalChannelSelections:1;
        unsigned int totalTopicSelections:1;
        unsigned int fromPersonalizeNews:1;
    } _has;
}

+ (Class)topicIdType;
+ (Class)channelIdType;
- (void).cxx_destruct;
@property(nonatomic) BOOL fromPersonalizeNews; // @synthesize fromPersonalizeNews=_fromPersonalizeNews;
@property(retain, nonatomic) NSMutableArray *topicIds; // @synthesize topicIds=_topicIds;
@property(retain, nonatomic) NSMutableArray *channelIds; // @synthesize channelIds=_channelIds;
@property(nonatomic) int totalTopicSelections; // @synthesize totalTopicSelections=_totalTopicSelections;
@property(nonatomic) int totalChannelSelections; // @synthesize totalChannelSelections=_totalChannelSelections;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsChannelPickerPresentationReason:(id)arg1;
- (id)channelPickerPresentationReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasChannelPickerPresentationReason;
@property(nonatomic) int channelPickerPresentationReason; // @synthesize channelPickerPresentationReason=_channelPickerPresentationReason;
@property(nonatomic) BOOL hasFromPersonalizeNews;
- (id)topicIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicIdsCount;
- (void)addTopicId:(id)arg1;
- (void)clearTopicIds;
- (id)channelIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelIdsCount;
- (void)addChannelId:(id)arg1;
- (void)clearChannelIds;
@property(nonatomic) BOOL hasTotalTopicSelections;
@property(nonatomic) BOOL hasTotalChannelSelections;

@end

