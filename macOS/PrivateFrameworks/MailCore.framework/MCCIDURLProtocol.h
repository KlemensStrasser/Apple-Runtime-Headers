//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@interface MCCIDURLProtocol : NSURLProtocol
{
}

+ (void)unregisterDataProvider:(id)arg1;
+ (void)registerDataProvider:(id)arg1;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
- (void)stopLoading;
- (void)startLoading;

@end

