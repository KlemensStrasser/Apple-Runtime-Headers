//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSearchField.h>

@class GKCollectionViewDataSource;

@interface GKSearchBar : NSSearchField
{
    GKCollectionViewDataSource *_dataSource;
    long long _sectionIndex;
}

@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(retain, nonatomic) GKCollectionViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)dealloc;

@end

