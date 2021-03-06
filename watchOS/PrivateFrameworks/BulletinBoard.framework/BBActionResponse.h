//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BSServiceConnectionEndpoint, NSDictionary, NSString, NSURL;

@interface BBActionResponse : NSObject <NSSecureCoding>
{
    _Bool _didOpenApplication;
    int _actionType;
    unsigned int _actionActivationMode;
    int _actionBehavior;
    NSString *_actionID;
    NSURL *_actionLaunchURL;
    NSString *_bulletinRecordID;
    NSString *_bulletinPublisherID;
    NSDictionary *_bulletinContext;
    NSString *_bulletinButtonID;
    NSDictionary *_context;
    NSString *_originID;
    BSServiceConnectionEndpoint *_endpoint;
}

+ (_Bool)supportsSecureCoding;
+ (id)actionResponseForResponse:(id)arg1 bulletinRequest:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) BSServiceConnectionEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(copy, nonatomic) NSString *originID; // @synthesize originID=_originID;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *bulletinButtonID; // @synthesize bulletinButtonID=_bulletinButtonID;
@property(copy, nonatomic) NSDictionary *bulletinContext; // @synthesize bulletinContext=_bulletinContext;
@property(copy, nonatomic) NSString *bulletinPublisherID; // @synthesize bulletinPublisherID=_bulletinPublisherID;
@property(copy, nonatomic) NSString *bulletinRecordID; // @synthesize bulletinRecordID=_bulletinRecordID;
@property(copy, nonatomic) NSURL *actionLaunchURL; // @synthesize actionLaunchURL=_actionLaunchURL;
@property(copy, nonatomic) NSString *actionID; // @synthesize actionID=_actionID;
@property(nonatomic) _Bool didOpenApplication; // @synthesize didOpenApplication=_didOpenApplication;
@property(nonatomic) int actionBehavior; // @synthesize actionBehavior=_actionBehavior;
@property(nonatomic) unsigned int actionActivationMode; // @synthesize actionActivationMode=_actionActivationMode;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

