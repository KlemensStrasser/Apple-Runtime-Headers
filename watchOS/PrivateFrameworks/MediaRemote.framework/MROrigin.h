//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _MROriginProtobuf;

__attribute__((visibility("hidden")))
@interface MROrigin : NSObject
{
    int _identifier;
    int _type;
    NSString *_displayName;
}

+ (id)localOrigin;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) int identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isLocal) _Bool local;
- (id)data;
@property(readonly, nonatomic) _MROriginProtobuf *protobuf;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithIdentifier:(int)arg1 type:(int)arg2 displayName:(id)arg3;

@end

