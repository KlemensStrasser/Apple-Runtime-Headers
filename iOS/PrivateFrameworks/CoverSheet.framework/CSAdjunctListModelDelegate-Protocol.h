//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoverSheet/NSObject-Protocol.h>

@class CSAdjunctListModel;
@protocol CSAdjunctListItemProviding;

@protocol CSAdjunctListModelDelegate <NSObject>
- (void)adjunctListModel:(CSAdjunctListModel *)arg1 didRemoveItem:(id <CSAdjunctListItemProviding>)arg2;
- (void)adjunctListModel:(CSAdjunctListModel *)arg1 didAddItem:(id <CSAdjunctListItemProviding>)arg2;
@end

