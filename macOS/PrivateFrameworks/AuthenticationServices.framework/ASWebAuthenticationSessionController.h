//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthenticationServices/ASWebAuthenticationSessionRequestDelegate-Protocol.h>
#import <AuthenticationServices/_ASWebAuthenticationSessionRequestHandling-Protocol.h>

@class ASWebAuthenticationSessionLaunchAgentProxy, ASWebAuthenticationSessionRequestClient, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ASWebAuthenticationSessionController : NSObject <_ASWebAuthenticationSessionRequestHandling, ASWebAuthenticationSessionRequestDelegate>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    ASWebAuthenticationSessionLaunchAgentProxy *_launchAgentProxy;
    ASWebAuthenticationSessionRequestClient *_client;
    NSMutableSet *_requests;
}

- (void).cxx_destruct;
- (void)_fulfillRequest:(id)arg1 withCallbackURL:(id)arg2 error:(id)arg3;
- (void)authenticationSessionRequest:(id)arg1 didCancelWithError:(id)arg2;
- (void)authenticationSessionRequest:(id)arg1 didCompleteWithCallbackURL:(id)arg2;
- (void)disconnectFromAuthenticationSessionRequestServer;
- (void)cancelAuthenticationSessionRequest:(id)arg1;
- (void)beginAuthenticationSessionRequest:(id)arg1;
- (void)noteNewRequestsAreAvailable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

