//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCondition;

@interface RTTDictionaryManager : NSObject
{
    NSCondition *_condition;
    NSArray *_availableDictionaries;
}

+ (id)availableDictionaryAssetsUsingRemoteInfo:(_Bool)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *availableDictionaries; // @synthesize availableDictionaries=_availableDictionaries;
- (id)_ttyDictionaryAsset;
- (_Bool)_isStalledAutoDownloadAsset:(id)arg1;
- (_Bool)downloadAsset:(id)arg1 withError:(id *)arg2;
- (void)deleteIfNeeded;
- (void)downloadIfNeeded;
- (void)dealloc;
- (id)init;

@end

