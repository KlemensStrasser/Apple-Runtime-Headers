//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CSLSComplicationService : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)sharedComplicationService;
- (void).cxx_destruct;
- (void)_disconnect;
- (void)isComplicationBundleIDActive:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)activeComplicationBundleIDsWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

