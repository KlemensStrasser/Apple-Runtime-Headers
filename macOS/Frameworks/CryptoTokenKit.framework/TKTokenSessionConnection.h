//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKClientTokenProtocol-Protocol.h>

@class NSMutableDictionary, NSString, TKTokenConnection;

__attribute__((visibility("hidden")))
@interface TKTokenSessionConnection : NSObject <TKClientTokenProtocol>
{
    long long _sessionIDCounter;
    TKTokenConnection *_tokenConnection;
    NSMutableDictionary *_sessions;
    NSMutableDictionary *_initialKeepAlives;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *initialKeepAlives; // @synthesize initialKeepAlives=_initialKeepAlives;
@property(readonly, nonatomic) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
@property(readonly, nonatomic) TKTokenConnection *tokenConnection; // @synthesize tokenConnection=_tokenConnection;
- (void)session:(id)arg1 deleteObjectWithObjectID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 createObjectWithAttributes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 objectID:(id)arg2 operation:(long long)arg3 data:(id)arg4 algorithms:(id)arg5 parameters:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)session:(id)arg1 getAttributesOfObjectID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 evaluateAccessControl:(id)arg2 forOperation:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)session:(id)arg1 getAdvertisedItemsWithReply:(CDUnknownBlockType)arg2;
- (void)withSessionID:(id)arg1 invoke:(CDUnknownBlockType)arg2;
- (void)endSession:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)startSessionWithLAContext:(id)arg1 parameters:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)initWithTokenConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

