//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData;

@interface NTPBTodayWidgetConfig : PBCodable <NSCopying>
{
    long long _minimumArticleExposureDurationToBePreseen;
    double _prerollLoadingTimeout;
    NSData *_externalAnalyticsConfigurationsData;
    unsigned int _minimumNumberOfTimesPreseenToBeSeen;
    NSData *_videoGroupsConfigData;
    struct {
        unsigned int minimumArticleExposureDurationToBePreseen:1;
        unsigned int prerollLoadingTimeout:1;
        unsigned int minimumNumberOfTimesPreseenToBeSeen:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *videoGroupsConfigData; // @synthesize videoGroupsConfigData=_videoGroupsConfigData;
@property(retain, nonatomic) NSData *externalAnalyticsConfigurationsData; // @synthesize externalAnalyticsConfigurationsData=_externalAnalyticsConfigurationsData;
@property(nonatomic) double prerollLoadingTimeout; // @synthesize prerollLoadingTimeout=_prerollLoadingTimeout;
@property(nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen; // @synthesize minimumNumberOfTimesPreseenToBeSeen=_minimumNumberOfTimesPreseenToBeSeen;
@property(nonatomic) long long minimumArticleExposureDurationToBePreseen; // @synthesize minimumArticleExposureDurationToBePreseen=_minimumArticleExposureDurationToBePreseen;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasVideoGroupsConfigData;
@property(readonly, nonatomic) BOOL hasExternalAnalyticsConfigurationsData;
@property(nonatomic) BOOL hasPrerollLoadingTimeout;
@property(nonatomic) BOOL hasMinimumNumberOfTimesPreseenToBeSeen;
@property(nonatomic) BOOL hasMinimumArticleExposureDurationToBePreseen;

@end

