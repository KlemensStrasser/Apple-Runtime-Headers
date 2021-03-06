//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NWNetworkAgent-Protocol.h>

@class NSString, NSUUID, NWNetworkAgentRegistration;
@protocol NENexusAgentDelegate;

@interface NENexusAgent : NSObject <NWNetworkAgent>
{
    _Bool active;
    _Bool supportsBrowseRequests;
    _Bool nexusProvider;
    NSUUID *agentUUID;
    NSString *agentDescription;
    NWNetworkAgentRegistration *_registration;
    unsigned int _frameType;
    NSObject<NENexusAgentDelegate> *_delegate;
}

+ (id)agentFromData:(id)arg1;
+ (id)agentType;
+ (id)agentDomain;
- (void).cxx_destruct;
@property __weak NSObject<NENexusAgentDelegate> *delegate; // @synthesize delegate=_delegate;
@property unsigned int frameType; // @synthesize frameType=_frameType;
@property(retain) NWNetworkAgentRegistration *registration; // @synthesize registration=_registration;
@property(nonatomic, getter=isNexusProvider) _Bool nexusProvider; // @synthesize nexusProvider;
@property(nonatomic) _Bool supportsBrowseRequests; // @synthesize supportsBrowseRequests;
@property(copy, nonatomic) NSString *agentDescription; // @synthesize agentDescription;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active;
@property(copy, nonatomic) NSUUID *agentUUID; // @synthesize agentUUID;
- (void)unassertAgentWithOptions:(id)arg1;
- (_Bool)assertAgentWithOptions:(id)arg1;
- (_Bool)startAgentWithOptions:(id)arg1;
- (void)closeNexusWithOptions:(id)arg1;
- (_Bool)requestNexusWithOptions:(id)arg1;
@property(nonatomic, getter=isNetworkProvider) _Bool networkProvider;
@property(nonatomic, getter=isSpecificUseOnly) _Bool specificUseOnly;
@property(nonatomic, getter=isUserActivated) _Bool userActivated;
@property(nonatomic, getter=isKernelActivated) _Bool kernelActivated;
@property(nonatomic, getter=isVoluntary) _Bool voluntary;
- (id)copyAgentData;

// Remaining properties
@property(nonatomic) _Bool requiresAssert;
@property(nonatomic) _Bool supportsResolveRequests;
@property(nonatomic) _Bool updateClientsImmediately;

@end

