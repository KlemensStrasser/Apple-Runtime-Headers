//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPersistentContainer;

@interface NGMReplayManager : NSObject
{
    NSPersistentContainer *_persistentContainer;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (_Bool)deleteExpiredSendingDestinations;
- (_Bool)deleteReceivingCountersForKey:(id)arg1;
- (id)registeredPrekeyForNGMPrekey:(id)arg1 objectContext:(id)arg2;
- (_Bool)processFetchRequestAndValidate:(id)arg1 counter:(unsigned int)arg2 commit:(_Bool)arg3 theirIdentity:(id)arg4 prekey:(id)arg5 error:(id *)arg6;
- (CDUnknownBlockType)validateIncomingCounter:(unsigned int)arg1 prekey:(id)arg2 publicIdentity:(id)arg3 error:(id *)arg4;
- (unsigned int)counterForDestinationWithIdentityKey:(id)arg1 sendingIdentity:(id)arg2 error:(id *)arg3 success:(_Bool *)arg4;
- (id)computeDestinationHashForIncomingMessageFrom:(id)arg1 toLocalKey:(id)arg2;
- (id)computeDestinationHashForOutgoingMessageTo:(id)arg1 withLocalKey:(id)arg2;
- (id)init;
- (id)persistentStoreDescriptionWithError:(id *)arg1;
- (id)dbNameFromProcess;

@end

