//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBIconLocationPresenting-Protocol.h>
#import <SpringBoard/SBIconViewQuerying-Protocol.h>

@class SBDockIconListView, SBFloatingDockViewController;

@protocol SBFloatingDockSuggestionsViewProviding <SBIconViewQuerying, SBIconLocationPresenting>
@property(readonly, nonatomic) SBDockIconListView *listView;
@property(nonatomic) __weak SBFloatingDockViewController *floatingDockViewController;
- (void)dockFolderDidEndTransitioning;
- (void)dockFolderWillBeginTransitioning;
- (void)dockViewDidResignVisible;
- (void)dockViewWillResignVisible;
- (void)dockViewDidBecomeVisible;
- (void)dockViewWillBecomeVisible;
@end

