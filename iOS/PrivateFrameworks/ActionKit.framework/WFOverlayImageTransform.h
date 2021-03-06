//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFOverlayImageTransform : NSObject
{
    double _rotation;
    double _scale;
    double _opacity;
    struct CGPoint _center;
    struct CGRect _bounds;
}

@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (void)applyToImageFile:(id)arg1 withOverlayImage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initForCenteringImage:(id)arg1 inBackgroundImage:(id)arg2;
- (id)initWithCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 rotation:(double)arg3 scale:(double)arg4 opacity:(double)arg5;
- (id)init;

@end

