//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REExportedInterface-Protocol.h>

@class NSArray, NSString;

@protocol REElementDataSourceControllerProperties <REExportedInterface>
@property(readonly, nonatomic) unsigned int updateCount;
@property(readonly, nonatomic) _Bool hasDataAvailable;
@property(readonly, nonatomic) _Bool allowsLocationUse;
@property(readonly, nonatomic) NSArray *allProvidedElements;
@property(readonly, nonatomic) NSArray *supportedSections;
@property(readonly, nonatomic) Class dataSourceClass;
@property(readonly, nonatomic) NSString *name;
@end

