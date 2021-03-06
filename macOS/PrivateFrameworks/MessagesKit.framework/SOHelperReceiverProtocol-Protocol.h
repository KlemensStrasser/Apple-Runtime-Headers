//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessagesKit/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol SOHelperReceiverProtocol <NSObject>
- (void)suspendConnectionWithCompletionBlock:(void (^)(void))arg1;
- (void)updateDefaults:(NSDictionary *)arg1;
- (void)updateDefaultsObject:(id)arg1 forKey:(NSString *)arg2;
- (void)updateProperties:(NSDictionary *)arg1;
- (void)setValue:(id)arg1 forControllerKey:(NSString *)arg2;
- (void)postNotification:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
@end

