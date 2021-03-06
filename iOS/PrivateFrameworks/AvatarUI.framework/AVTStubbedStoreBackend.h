//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTStoreBackend-Protocol.h>

@class NSString;
@protocol AVTAvatarRecordChangeTracker, AVTStoreBackendDelegate;

@interface AVTStubbedStoreBackend : NSObject <AVTStoreBackend>
{
}

@property(readonly, nonatomic) id <AVTAvatarRecordChangeTracker> recordChangeTracker;
@property(nonatomic) __weak id <AVTStoreBackendDelegate> backendDelegate;
- (_Bool)canCreateAvatarWithError:(id *)arg1;
- (id)duplicateAvatarRecord:(id)arg1 error:(id *)arg2;
- (_Bool)deleteAvatarWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)saveAvatars:(id)arg1 error:(id *)arg2;
- (_Bool)saveAvatar:(id)arg1 error:(id *)arg2;
- (id)avatarsForFetchRequest:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

