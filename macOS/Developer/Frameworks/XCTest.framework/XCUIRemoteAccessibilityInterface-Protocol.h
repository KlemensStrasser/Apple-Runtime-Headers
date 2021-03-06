//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCTest/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString, XCAccessibilityElement, XCTCapabilities, XCUIAccessibilityAction;

@protocol XCUIRemoteAccessibilityInterface <NSObject>
@property(readonly) BOOL axNotificationsIncludeElement;
@property(readonly) BOOL useLegacySnapshotPath;
@property(readonly) XCTCapabilities *remoteInterfaceCapabilities;
- (void)enableFauxCollectionViewCells:(void (^)(BOOL, NSError *))arg1;
- (void)setAXTimeout:(double)arg1 reply:(void (^)(NSError *))arg2;
- (void)requestElementAtPoint:(struct CGPoint)arg1 reply:(void (^)(XCAccessibilityElement *, NSError *))arg2;
- (void)fetchParameterizedAttribute:(NSString *)arg1 forElement:(XCAccessibilityElement *)arg2 parameter:(id)arg3 reply:(void (^)(id, NSError *))arg4;
- (void)setAttribute:(NSString *)arg1 value:(id)arg2 element:(XCAccessibilityElement *)arg3 reply:(void (^)(BOOL, NSError *))arg4;
- (void)fetchAttributes:(NSArray *)arg1 forElement:(XCAccessibilityElement *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)fetchSnapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3 reply:(void (^)(XCUIElementSnapshotRequestResult *, NSError *))arg4;
- (void)requestSnapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3 reply:(void (^)(XCElementSnapshot *, NSError *))arg4;
- (void)snapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3 reply:(void (^)(XCElementSnapshot *, NSError *))arg4;
- (void)performAccessibilityAction:(XCUIAccessibilityAction *)arg1 onElement:(XCAccessibilityElement *)arg2 value:(id)arg3 reply:(void (^)(NSError *))arg4;
- (void)unregisterForAccessibilityNotification:(int)arg1 registrationToken:(NSNumber *)arg2 reply:(void (^)(NSError *))arg3;
- (void)registerForAccessibilityNotification:(int)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)loadAccessibilityWithTimeout:(double)arg1 reply:(void (^)(BOOL, NSError *))arg2;
@end

