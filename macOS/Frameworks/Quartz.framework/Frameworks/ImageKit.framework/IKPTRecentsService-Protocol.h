//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ImageKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol IKPTRecentsService <NSObject>
- (void)eraseRecents:(NSArray *)arg1 reply:(void (^)(void))arg2;
- (void)pushRecents:(NSArray *)arg1 thumbnails:(NSDictionary *)arg2 originalImagesInfo:(NSDictionary *)arg3 reply:(void (^)(void))arg4;
- (void)pullUserImageWithReply:(void (^)(NSData *))arg1;
- (void)pullOriginalImageNamed:(NSString *)arg1 reply:(void (^)(NSData *))arg2;
- (void)pullRecentsWithReply:(void (^)(NSArray *, NSDictionary *))arg1;
@end

