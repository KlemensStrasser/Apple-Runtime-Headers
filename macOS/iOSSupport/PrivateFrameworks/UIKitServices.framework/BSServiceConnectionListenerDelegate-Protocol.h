//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitServices/NSObject-Protocol.h>

@class BSServiceConnection, BSServiceConnectionListener;
@protocol BSServiceConnectionHost, BSXPCDecoding;

@protocol BSServiceConnectionListenerDelegate <NSObject>
- (void)listener:(BSServiceConnectionListener *)arg1 didReceiveConnection:(BSServiceConnection<BSServiceConnectionHost> *)arg2 withContext:(id <BSXPCDecoding>)arg3;
@end

