//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface AFSiriActivationContext : NSObject <NSCopying, NSSecureCoding>
{
    int _source;
    int _event;
    unsigned int _options;
    NSString *_deviceID;
    NSDictionary *_userInfo;
    unsigned long long _timestamp;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, nonatomic) unsigned int options; // @synthesize options=_options;
@property(readonly, nonatomic) int event; // @synthesize event=_event;
@property(readonly, nonatomic) int source; // @synthesize source=_source;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)_descriptionWithIndent:(unsigned int)arg1;
- (id)description;
- (id)initWithTimestamp:(unsigned long long)arg1 source:(int)arg2 event:(int)arg3 options:(unsigned int)arg4 deviceID:(id)arg5 userInfo:(id)arg6;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

