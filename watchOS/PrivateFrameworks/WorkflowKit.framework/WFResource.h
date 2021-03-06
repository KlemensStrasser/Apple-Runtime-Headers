//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFApplicationStateObserver-Protocol.h>
#import <WorkflowKit/WFErrorRecoveryAttempting-Protocol.h>

@class NSDictionary, NSError, NSString;
@protocol OS_dispatch_queue;

@interface WFResource : NSObject <WFApplicationStateObserver, WFErrorRecoveryAttempting>
{
    _Bool _available;
    _Bool _shouldRefreshAvailability;
    NSError *_availabilityError;
    NSDictionary *_definition;
    NSObject<OS_dispatch_queue> *_stateAccessQueue;
}

+ (_Bool)alwaysMakeAvailable;
+ (_Bool)mustBeAvailableForDisplay;
+ (_Bool)refreshesAvailabilityOnApplicationResume;
+ (_Bool)isSingleton;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue; // @synthesize stateAccessQueue=_stateAccessQueue;
@property(readonly, nonatomic) _Bool shouldRefreshAvailability; // @synthesize shouldRefreshAvailability=_shouldRefreshAvailability;
@property(readonly, copy, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(int)arg2;
- (void)invalidateAvailability;
- (void)updateAvailability:(_Bool)arg1 withError:(id)arg2;
- (void)refreshAvailabilityWithNotification:(_Bool)arg1;
- (void)notifyResourcesAboutAvailabilityChange;
- (_Bool)shouldNotifyResourcesAfterAvailabilityUpdateWithForcedNotification:(_Bool)arg1;
- (void)refreshAvailabilityWithForcedNotification;
- (void)refreshAvailabilityWithNotification;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned int)arg2 userInterface:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)refreshAvailability;
- (id)_availabilityError;
- (_Bool)_isAvailable;
@property(readonly, nonatomic) NSError *availabilityError; // @synthesize availabilityError=_availabilityError;
@property(readonly, nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(readonly, copy, nonatomic) NSDictionary *eventDictionary;
- (void)dealloc;
- (id)init;
- (id)initWithDefinition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

