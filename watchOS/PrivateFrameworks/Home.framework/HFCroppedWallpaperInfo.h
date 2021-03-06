//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@interface HFCroppedWallpaperInfo : NSObject <NSCopying>
{
    int _source;
    float _scale;
    struct CGPoint _center;
}

@property(readonly, nonatomic) float scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(readonly, nonatomic) int source; // @synthesize source=_source;
- (id)dictionaryRepresentation;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSource:(int)arg1 center:(struct CGPoint)arg2 scale:(float)arg3;

@end

