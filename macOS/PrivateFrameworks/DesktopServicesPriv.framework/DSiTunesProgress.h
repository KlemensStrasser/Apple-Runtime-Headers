//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DSiTunesProgress : NSObject
{
    TNSRef_b16f0fdb _progress;
    struct TNSRef<AMPDevice, void> _device;
    struct TNodePtr _deviceNode;
    struct vector<TKeyValueObserver, std::__1::allocator<TKeyValueObserver>> _observers;
}

+ (struct TNodePtr)nodeForDevice:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sendUpdate;
- (TNSRef_b16f0fdb)progress;
- (void)aboutToTearDown;
- (id)initWithDevice:(id)arg1 andProgress:(id)arg2;

@end

