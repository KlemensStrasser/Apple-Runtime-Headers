//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitMacHelper/UINSGraphicsContextStack-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UINSGraphicsContextStack : NSObject <UINSGraphicsContextStack>
{
}

+ (id)sharedInstance;
@property(readonly) BOOL currentContextIsFlipped;
- (BOOL)getCurrentContext:(struct CGContext **)arg1 type:(int *)arg2 auxInfo:(void **)arg3;
- (void)popContext;
- (void)pushContext:(struct CGContext *)arg1 type:(int)arg2 auxInfo:(void *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

