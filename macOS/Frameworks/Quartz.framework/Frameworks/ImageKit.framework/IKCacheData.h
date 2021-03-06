//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKCacheDatabase, IKCacheManager, IKCacheNode;

__attribute__((visibility("hidden")))
@interface IKCacheData : NSObject
{
    IKCacheManager *_parent;
    IKCacheDatabase *_db;
    IKCacheNode *_lastRequestedNode;
    int _lastRequestedSize;
    unsigned long long _lastRequestedUID;
}

- (id)database;
- (void)setParent:(id)arg1;
- (id)parent;
- (unsigned long long)unshareEntriesWithUIDIfNeeded:(id)arg1 cacheManager:(id)arg2;
- (void)removeObjectWithUID:(unsigned long long)arg1 withSize:(int)arg2 withKey:(int)arg3;
- (id)objectWithUID:(unsigned long long)arg1 withSize:(int)arg2 withKey:(int)arg3;
- (BOOL)storeImage:(id)arg1 withUID:(unsigned long long)arg2 withSize:(int)arg3;
- (void)removeCacheNodeWithUID:(unsigned long long)arg1 withSize:(int)arg2;
- (id)cacheNodeWithUID:(unsigned long long)arg1 withSize:(int)arg2;
- (id)nodeForUID:(unsigned long long)arg1 size:(int)arg2 createIfNeeded:(BOOL)arg3;
- (void)dealloc;
- (void)prepareChildsToDie;
- (id)init;

@end

