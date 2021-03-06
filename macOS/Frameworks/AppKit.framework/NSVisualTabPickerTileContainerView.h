//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AppKit/NSVisualTabPickerNewTabViewDelegate-Protocol.h>
#import <AppKit/NSVisualTabPickerThumbnailDataSource-Protocol.h>
#import <AppKit/NSVisualTabPickerThumbnailDelegate-Protocol.h>

@class NSMutableArray, NSString, NSTextField, NSVisualTabPickerGridView;
@protocol NSVisualTabPickerTileContainerDataSource, NSVisualTabPickerTileContainerDelegate;

__attribute__((visibility("hidden")))
@interface NSVisualTabPickerTileContainerView : NSView <NSVisualTabPickerNewTabViewDelegate, NSVisualTabPickerThumbnailDataSource, NSVisualTabPickerThumbnailDelegate>
{
    NSMutableArray *_thumbnailViews;
    NSView *_3DContainerView;
    NSTextField *_title;
    BOOL _didSetTileConstraints;
    id <NSVisualTabPickerTileContainerDataSource> _dataSource;
    id <NSVisualTabPickerTileContainerDelegate> _delegate;
    NSVisualTabPickerGridView *_visualTabPickerGridView;
    long long _tileContainerType;
}

+ (struct CGPoint)offsetBetweenStackedThumbnails;
+ (double)thumbnailYOffset;
- (void).cxx_destruct;
@property(nonatomic) long long tileContainerType; // @synthesize tileContainerType=_tileContainerType;
@property(nonatomic) __weak NSVisualTabPickerGridView *visualTabPickerGridView; // @synthesize visualTabPickerGridView=_visualTabPickerGridView;
@property(nonatomic) __weak id <NSVisualTabPickerTileContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <NSVisualTabPickerTileContainerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (struct CATransform3D)_tile3DTransform;
- (struct CGRect)_tileFrameForTileWithIndex:(unsigned long long)arg1;
- (void)_updateTilesLayout;
- (void)_createTileAtIndex:(unsigned long long)arg1;
- (struct CGRect)_containerTileFrame;
- (void)_setUpTiles;
- (void)_setUp3DContainerForTiles;
- (void)_createNewTabContainerView;
- (id)_createTitleTextField;
- (void)_setUpTitleView;
- (void)_showCloseButtonAndExposeBorderIfNeededWithMouseLocation:(struct CGPoint)arg1;
- (void)mouseMoved:(id)arg1;
- (void)didRequestNewTabForNSVisualTabPickerNewTabView:(id)arg1;
- (void)didCloseVisualTabPickerThumbnailView:(id)arg1;
- (void)didSelectVisualTabPickerThumbnailView:(id)arg1;
- (BOOL)canCloseTabInNSVisualTabPickerThumbnailView:(id)arg1;
- (BOOL)highlightStateForVisualTabPickerTileThumbnailView:(id)arg1;
- (id)imageForVisualTabPickerTileThumbnailView:(id)arg1;
- (id)viewForVisualTabPickerTileThumbnailView:(id)arg1;
- (id)titleForNSVisualTabPickerThumbnailView:(id)arg1;
- (void)cleanupAnimationsForThumbnailAtIndex:(unsigned long long)arg1;
- (void)animateToolbarForThumbnailAtIndex:(unsigned long long)arg1 image:(id)arg2 height:(double)arg3 gridAnimation:(long long)arg4;
- (void)animateSidebarForThumbnailAtIndex:(unsigned long long)arg1 image:(id)arg2 width:(double)arg3 gridAnimation:(long long)arg4;
- (void)willStartAnimationExitAtIndex:(unsigned long long)arg1;
- (struct CGRect)thumbnailContainerFrameForThumbnailAtIndex:(unsigned long long)arg1;
- (void)_startStackFoldingAnimation:(long long)arg1 animationDuration:(double)arg2 indexOfSelectedTile:(unsigned long long)arg3;
- (void)startTiltAnimation:(long long)arg1 animationDuration:(double)arg2 indexOfSelectedTile:(unsigned long long)arg3;
- (void)layout;
- (void)willStartExitAnimation;
- (void)entryAnimationHasFinished;
- (void)hideCloseButtons;
- (unsigned long long)numberOfTilesInContainer;
- (void)reloadTileAtIndex:(unsigned long long)arg1;
- (void)removeTileAtIndex:(unsigned long long)arg1;
- (void)addTileAtIndex:(unsigned long long)arg1;
- (void)selectedTabDidChange;
- (void)setHidden:(BOOL)arg1;
- (id)makeBackingLayer;
- (void)setFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1 visualTabPickerGridView:(id)arg2 containerType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

