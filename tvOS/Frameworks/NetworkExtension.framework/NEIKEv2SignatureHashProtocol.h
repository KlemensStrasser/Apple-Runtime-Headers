//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@interface NEIKEv2SignatureHashProtocol : NSObject <NSCopying>
{
    unsigned long long _hashType;
}

@property(nonatomic) unsigned long long hashType; // @synthesize hashType=_hashType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithHashType:(unsigned long long)arg1;

@end

