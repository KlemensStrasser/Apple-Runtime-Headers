//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface HMDDataStreamTransportCommand : NSObject <NSCopying>
{
    int _command;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
@property(nonatomic) int command; // @synthesize command=_command;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithCommand:(int)arg1;
- (id)init;

@end

