//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

__attribute__((visibility("hidden")))
@interface PUAssetSharedViewModelChange : PUViewModelChange
{
    BOOL _loadingStatusChanged;
    BOOL _saveProgressChanged;
    BOOL _saveStateChanged;
    BOOL _flippingFullSizeRenderStateChanged;
}

@property(nonatomic) BOOL flippingFullSizeRenderStateChanged; // @synthesize flippingFullSizeRenderStateChanged=_flippingFullSizeRenderStateChanged;
@property(nonatomic) BOOL saveStateChanged; // @synthesize saveStateChanged=_saveStateChanged;
@property(nonatomic) BOOL saveProgressChanged; // @synthesize saveProgressChanged=_saveProgressChanged;
@property(nonatomic) BOOL loadingStatusChanged; // @synthesize loadingStatusChanged=_loadingStatusChanged;
- (BOOL)hasChanges;

@end

