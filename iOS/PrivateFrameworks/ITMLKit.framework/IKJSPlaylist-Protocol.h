//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKJSMediaItem, JSValue, NSArray;

@protocol IKJSPlaylist <JSExport>
@property(nonatomic) long long repeatMode;
@property(nonatomic) long long endAction;
@property(readonly, nonatomic) unsigned long long length;
- (IKJSMediaItem *)item:(long long)arg1;
- (NSArray *)splice:(long long)arg1:(long long)arg2:(JSValue *)arg3;
- (IKJSMediaItem *)pop;
- (void)push:(IKJSMediaItem *)arg1;
- (id)init;
@end

