//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Geode/DGOperationCoding-Protocol.h>
#import <Geode/NSCopying-Protocol.h>

@class NSString;

@interface DGRedEyeSpot : NSObject <NSCopying, DGOperationCoding>
{
    struct CGPoint _center;
    double _radius;
    double _sensitivity;
}

+ (id)spotWithCenter:(struct CGPoint)arg1 radius:(double)arg2 sensitivity:(double)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isAuto;
- (double)sensitivity;
- (double)radius;
- (struct CGPoint)center;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

