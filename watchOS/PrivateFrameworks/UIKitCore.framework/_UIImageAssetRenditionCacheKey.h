//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIImageAssetRenditionCacheKey : NSObject
{
    UIColor *resolvedTintColor;
    NSString *appearanceName;
    struct CGSize _size;
    unsigned int _drawMode;
    struct {
        unsigned int bold:1;
        unsigned int letterpress:1;
    } _flags;
}

+ (id)keyWithSize:(struct CGSize)arg1 unresolvedTintColor:(id)arg2 traitCollection:(id)arg3 bold:(_Bool)arg4 letterpress:(_Bool)arg5 drawMode:(unsigned int)arg6;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;

@end

