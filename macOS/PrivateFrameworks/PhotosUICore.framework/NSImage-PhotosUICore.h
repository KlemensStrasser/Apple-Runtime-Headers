//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImage.h>

@interface NSImage (PhotosUICore)
+ (id)px_roundedCornerMaskImage:(CDStruct_2bd92d94)arg1 size:(struct CGSize)arg2;
+ (id)px_imageFromSolidColor:(id)arg1;
+ (id)px_imageNamed:(id)arg1;
- (id)px_debugImageWithStrokeRect:(struct CGRect)arg1 color:(id)arg2;
- (BOOL)px_isLargerThan:(id)arg1;
@property(readonly, nonatomic) struct CGSize px_pixelSize;
- (id)px_imageByCroppingRect:(struct CGRect)arg1 pixelTargetSize:(struct CGSize)arg2 cornerRadius:(double)arg3;
- (id)px_imageWithCornerRadius:(double)arg1;
@property(readonly, nonatomic) struct CGImage *px_CGImage;
- (id)px_tintedImageWithColor:(id)arg1;
@end

