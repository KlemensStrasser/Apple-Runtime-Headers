//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFResourceAccessClient-Protocol.h>

@class NSString;

@interface PFResourceAccessToken : NSObject <PFResourceAccessClient>
{
    NSObject *_resource;
    int _stackDepth;
    void *_stack[10];
    char **_symbols;
    BOOL _invalidated;
    NSString *_reason;
}

- (void).cxx_destruct;
@property BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(readonly) NSObject *resource; // @synthesize resource=_resource;
@property(readonly) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy) NSString *description;
- (id)backtraceForLog;
- (void)resourceWillShutdown:(id)arg1;
- (void)dealloc;
- (id)initWithResource:(id)arg1 reason:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

