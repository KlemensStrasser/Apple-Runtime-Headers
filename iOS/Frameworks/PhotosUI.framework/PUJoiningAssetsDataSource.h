//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUAssetsDataSource.h>

@class NSArray, NSDictionary;

@interface PUJoiningAssetsDataSource : PUAssetsDataSource
{
    NSArray *__dataSources;
    long long __totalNumberOfSections;
    NSDictionary *__containedDataSourceInfoByIdentifier;
    NSArray *__containedDataSourceInfos;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *_containedDataSourceInfos; // @synthesize _containedDataSourceInfos=__containedDataSourceInfos;
@property(readonly, nonatomic) NSDictionary *_containedDataSourceInfoByIdentifier; // @synthesize _containedDataSourceInfoByIdentifier=__containedDataSourceInfoByIdentifier;
@property(readonly, nonatomic) long long _totalNumberOfSections; // @synthesize _totalNumberOfSections=__totalNumberOfSections;
@property(readonly, nonatomic) NSArray *_dataSources; // @synthesize _dataSources=__dataSources;
- (id)containedAssetsDataSourceAtIndexPath:(id)arg1;
- (long long)numberOfAssetsWithMaximum:(long long)arg1;
- (id)startingAssetReference;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)_externalIndexPathForLocalIndexPath:(id)arg1 inAssetsDataSource:(id)arg2;
- (id)_assetsDataSourceForExternalIndexPath:(id)arg1 outDataSourceIndex:(out long long *)arg2 outLocalIndexPath:(out id *)arg3;
- (id)initWithDataSources:(id)arg1;

@end

