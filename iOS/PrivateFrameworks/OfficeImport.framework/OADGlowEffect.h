//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADEffect.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADGlowEffect : OADEffect
{
    OADColor *mColor;
    float mRadius;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setRadius:(float)arg1;
- (float)radius;
- (void)setColor:(id)arg1;
- (id)color;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

