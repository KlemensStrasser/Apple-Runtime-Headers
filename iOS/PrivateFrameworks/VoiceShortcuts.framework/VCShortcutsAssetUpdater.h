//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VCUserDefaults;

@interface VCShortcutsAssetUpdater : NSObject
{
    VCUserDefaults *_defaults;
}

+ (_Bool)updateAsset;
+ (void)scheduleAssetUpdate;
- (void).cxx_destruct;
@property(readonly, nonatomic) VCUserDefaults *defaults; // @synthesize defaults=_defaults;
- (_Bool)updateVoiceShortcutsBlacklistWithAsset:(id)arg1;
- (_Bool)downloadAsset:(id)arg1;
- (_Bool)downloadAssetCatalog;
- (id)fetchLatestAsset;
- (_Bool)updateAsset;
- (id)init;

@end

