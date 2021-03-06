//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FudPersonalizationRequest, NSData, NSDictionary, NSError, NSString;

@protocol AUServiceProtocol
- (void)personalizationResponse:(FudPersonalizationRequest *)arg1 response:(NSData *)arg2 status:(NSError *)arg3;
- (void)queryDeviceList:(void (^)(NSArray *))arg1;
- (void)finishWithOptions:(NSDictionary *)arg1;
- (void)applyFirmwareWithOptions:(NSDictionary *)arg1;
- (void)prepareFirmwareWithOptions:(NSDictionary *)arg1;
- (void)downloadFirmwareWithOptions:(NSDictionary *)arg1;
- (void)findFirmwareWithOptions:(NSDictionary *)arg1 remote:(BOOL)arg2;
- (void)bootstrapWithOptions:(NSDictionary *)arg1;
- (void)deviceClassAttached:(NSString *)arg1 options:(NSDictionary *)arg2 withReply:(void (^)(BOOL, NSDictionary *))arg3;
@end

