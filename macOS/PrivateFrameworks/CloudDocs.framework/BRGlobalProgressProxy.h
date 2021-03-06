//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/BRProgressProxy.h>

#import <CloudDocs/BRProgressProxyDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRGlobalProgressProxy : BRProgressProxy <BRProgressProxyDelegate>
{
    NSString *_kind;
}

- (void).cxx_destruct;
- (id)progressProxy:(id)arg1 localizedDescriptionForProgress:(id)arg2;
- (BOOL)progressProxy:(id)arg1 shouldProxyProgress:(id)arg2;
- (id)initWithGlobalProgressKind:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

