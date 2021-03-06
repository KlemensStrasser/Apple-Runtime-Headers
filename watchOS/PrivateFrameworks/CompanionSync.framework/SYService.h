//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/SYStateLoggable-Protocol.h>
#import <CompanionSync/SYSyncEngineResponder-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSString, PBCodable, SYDevice, SYPersistentStore, SYSession, SYSyncEngine, SYVectorClock, _SYMultiSuspendableQueue, _SYQueuedStartSession;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity, SYServiceDelegate;

@interface SYService : NSObject <SYSyncEngineResponder, SYStateLoggable>
{
    NSString *_serviceName;
    int _defaultPriority;
    NSDictionary *_defaultOptions;
    NSDictionary *_customIDSOptions;
    SYSession *_currentSession;
    id <SYServiceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_incomingIOQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    _SYMultiSuspendableQueue *_sessionQueue;
    NSObject<OS_dispatch_source> *_processSignalSource;
    SYPersistentStore *_persistentStore;
    SYSyncEngine *_syncEngine;
    SYVectorClock *_vectorClock;
    NSMutableSet *_rejectingV1SyncSessions;
    NSString *_inFlightSyncRequestIdentifier;
    _SYQueuedStartSession *_queuedStartSession;
    SYDevice *_targetedDevice;
    NSMutableArray *_onSessionEnd;
    NSObject<OS_os_activity> *_serviceActivity;
    unsigned long long _stateHandle;
    struct os_unfair_lock_s _flagLock;
    struct {
        unsigned int isMaster:1;
        unsigned int hasChanges:1;
        unsigned int needsReset:1;
        unsigned int hasPairingStore:1;
        unsigned int isRunning:1;
        unsigned int registeredForPairingNotifications:1;
        unsigned int remoteProtocolVersion:3;
        unsigned int remoteDeviceIsWatch:1;
        unsigned int isObservingRemoteDeviceProperties:1;
        unsigned int requestedEngineType:3;
        unsigned int assignedEngineType:3;
        unsigned int suspendedForQWS:1;
    } _flags;
    NSString *_peerID;
    int _sendingBufferCap;
    int _engineType;
    NSString *_generationID;
    double _defaultMessageTimeout;
    double _sessionStalenessInterval;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *generationID; // @synthesize generationID=_generationID;
@property(nonatomic) int engineType; // @synthesize engineType=_engineType;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) int sendingBufferCap; // @synthesize sendingBufferCap=_sendingBufferCap;
@property(nonatomic) double sessionStalenessInterval; // @synthesize sessionStalenessInterval=_sessionStalenessInterval;
@property(nonatomic) double defaultMessageTimeout; // @synthesize defaultMessageTimeout=_defaultMessageTimeout;
@property(readonly, nonatomic) _SYMultiSuspendableQueue *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property(readonly, nonatomic) NSObject<OS_os_activity> *serviceActivity; // @synthesize serviceActivity=_serviceActivity;
@property(readonly, nonatomic) SYPersistentStore *persistentStore; // @synthesize persistentStore=_persistentStore;
@property(readonly, nonatomic) SYSyncEngine *syncEngine; // @synthesize syncEngine=_syncEngine;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_defaultOptions;
@property(nonatomic) int priority; // @synthesize priority=_defaultPriority;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_serviceName;
- (void)_swapSessionForVersionChange;
- (void)_peerRejectedVersion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleError:(id)arg1;
- (_Bool)_handleEndSessionResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleRestartSessionResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleSyncBatchResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleStartSessionResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleResetResponse:(id)arg1 error:(id *)arg2;
- (void)_handleEndSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleRestartSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleSyncBatch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleResetRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleStartSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_request:(id)arg1 hasValidSessionIDForSession:(id)arg2 response:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_enqueueIncomingStartSessionRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_sessionFromIncomingStartRequest:(id)arg1;
- (void)currentDeviceConnectionChanged:(_Bool)arg1;
- (void)currentDeviceProximityChanged:(_Bool)arg1;
- (void)serializeForIncomingSession:(CDUnknownBlockType)arg1;
- (void)deliveredMessageWithID:(id)arg1 context:(id)arg2;
- (void)sentMessageWithID:(id)arg1 context:(id)arg2;
- (void)enqueuedMessageWithID:(id)arg1 context:(id)arg2;
- (void)handleSyncError:(id)arg1 forMessageWithIdentifier:(id)arg2;
- (void)handleFileTransfer:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_claimOwnershipOfFileAtURL:(id)arg1 error:(id *)arg2;
- (void)handleOutOfBandData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleSyncResponse:(id)arg1 ofType:(unsigned short)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleSyncRequest:(id)arg1 ofType:(unsigned short)arg2 response:(CDUnknownBlockType)arg3;
- (_Bool)willAcceptMessageWithHeader:(id)arg1 messageID:(id)arg2;
@property(readonly, nonatomic) NSDictionary *extraTransportOptions;
- (void)_postVersionRejectionMessageForMessageWithID:(id)arg1;
- (_Bool)_shouldSession:(id)arg1 fromPeer:(id)arg2 supercedeSession:(id)arg3 ofAge:(double)arg4 collisionDetected:(_Bool *)arg5;
- (id)_chooseBetweenCollidingSessions:(id)arg1:(id)arg2;
- (void)sessionFailedToCancelMessageUUIDs:(id)arg1;
- (void)_wrapUpCurrentSession:(id)arg1;
- (void)sessionDidEnd:(id)arg1 withError:(id)arg2;
- (id)_newMessageHeader;
- (void)_copyPeerClockFromMessageHeaderIfNecessary:(id)arg1;
- (void)_suspend;
- (void)_downgradeEngineForVersion:(int)arg1;
- (void)_upgradeEngineTo:(int)arg1;
- (void)_swapEngineTo:(int)arg1;
- (_Bool)_initializeMessaging:(id *)arg1;
- (id)_makeSyncEngineOfType:(int)arg1;
- (void)_vectorClockUpdated;
- (_Bool)_initializeServiceDB:(id *)arg1;
- (id)_pathForDataStore;
- (void)setNeedsResetSync;
- (void)setHasChangesAvailable;
- (void)_sendResetRequest;
- (void)_processPendingChanges;
- (id)_makeSessionForDeltaSync:(_Bool)arg1;
@property(readonly, nonatomic) PBCodable *stateForLogging;
@property(readonly, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
- (void)suspend;
- (_Bool)resume:(id *)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
@property(readonly) SYSession *currentSession;
@property(readonly, nonatomic) _Bool targetIsConnected;
@property(readonly, nonatomic) _Bool targetIsInProximity;
@property(readonly, nonatomic) _Bool isMasterStore;
- (void)_whenSessionEnds:(CDUnknownBlockType)arg1;
- (void)_dealWithPotentiallyStallingCurrentSession;
- (void)_signalPairingStoreUnavailable;
- (void)_signalPairingStoreAvailable;
- (void)_setupPairingStoreWithDevice:(id)arg1;
- (void)_removePairingStoreDevice;
- (void)_deviceRemoved:(id)arg1;
- (void)_deviceTargetabilityChanged:(id)arg1;
- (void)_switchToNewTargetedDevice:(id)arg1;
- (void)_ifDelegateImplements:(SEL)arg1 do:(CDUnknownBlockType)arg2 then:(CDUnknownBlockType)arg3;
- (void)_deviceOSInfoChanged:(id)arg1;
- (void)_updateMetaProtocolInfoForDevice:(id)arg1;
- (_Bool)_protocolVersion:(int)arg1 supportsEngineType:(int)arg2;
- (void)_setProtocolVersionForRemoteOSVersion:(id)arg1 build:(id)arg2 remoteIsWatch:(_Bool)arg3 switchingEngines:(_Bool)arg4;
- (void)_setupPairingNotifications;
- (void)dealloc;
- (id)initWithService:(id)arg1 priority:(int)arg2 qos:(unsigned int)arg3 asMasterStore:(_Bool)arg4 options:(id)arg5;
- (id)initWithService:(id)arg1 priority:(int)arg2 asMasterStore:(_Bool)arg3 options:(id)arg4;
- (id)init;
- (id)dataStreamWithMetadata:(id)arg1 options:(id)arg2 identifier:(id *)arg3 error:(id *)arg4;
- (void)dataStreamWithMetadata:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)sendData:(id)arg1 options:(id)arg2 identifier:(id *)arg3 error:(id *)arg4;
- (void)sendData:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool hasPairingStore;
@property(copy, nonatomic) NSDictionary *customIDSOptions;
- (_Bool)_v1_handleBatchEndResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_v1_handleBatchChunkAck:(id)arg1 error:(id *)arg2;
- (_Bool)_v1_handleFullSyncRequestAck:(id)arg1 error:(id *)arg2;
- (void)_v1_handleChangeMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_v1_handleBatchSyncEnd:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_v1_handleBatchSyncChunk:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_v1_handleBatchSyncStart:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_v1_handleSyncAllObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_v1_handleFullSyncRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

