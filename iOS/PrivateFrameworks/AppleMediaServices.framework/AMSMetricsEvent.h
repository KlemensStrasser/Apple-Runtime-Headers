//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>

@class ACAccount, NSDictionary, NSMutableDictionary, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface AMSMetricsEvent : NSObject <NSCopying>
{
    NSMutableDictionary *_underlyingDictionary;
    ACAccount *_account;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSNumber *_databasePID;
}

+ (_Bool)_isValidJSONProperty:(id)arg1;
+ (id)_topicFromAuthenticationContext:(id)arg1;
+ (id)_buyParamsStringFromAuthenticationContext:(id)arg1;
+ (id)_buyParamsFromString:(id)arg1;
+ (id)metricsAuthenticationAttemptDictionaryForAuthKitError:(id)arg1;
+ (id)createEventFromAuthenticationContext:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *databasePID; // @synthesize databasePID=_databasePID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)_setProperty:(id)arg1 forBodyKey:(id)arg2 clientOnly:(_Bool)arg3;
- (id)_propertyForBodyKey:(id)arg1 clientOnly:(_Bool)arg2;
- (void)setProperty:(id)arg1 forBodyKey:(id)arg2;
- (void)removePropertiesForKeys:(id)arg1;
- (id)propertyForBodyKey:(id)arg1;
- (void)addPropertiesWithDictionary:(id)arg1;
@property(retain, nonatomic) NSString *topic;
@property(retain, nonatomic) NSNumber *timezoneOffset;
@property(retain, nonatomic) NSString *osVersion;
@property(nonatomic) _Bool preventSampling;
@property(retain, nonatomic) NSNumber *eventVersion;
@property(retain, nonatomic) NSString *eventType;
@property(retain, nonatomic) NSNumber *eventTime;
@property(retain, nonatomic) NSString *diagnosticsSubmissionBugType;
@property(retain, nonatomic) NSString *clientEventID;
@property(retain, nonatomic) NSString *canaryIdentifier;
@property(retain, nonatomic) NSNumber *baseVersion;
@property(retain, nonatomic) NSString *appVersion;
@property(retain, nonatomic) NSString *app;
@property(readonly, nonatomic) NSMutableDictionary *underlyingDictionary; // @synthesize underlyingDictionary=_underlyingDictionary;
@property(readonly, nonatomic) NSDictionary *dictionaryForPosting;
@property(readonly, nonatomic) NSDictionary *databaseEventBody;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTopic:(id)arg1;
- (id)initWithUnderlyingDictionary:(id)arg1;
- (id)initWithDatabaseEventBody:(id)arg1;

@end

