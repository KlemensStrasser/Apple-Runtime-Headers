//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CUISmallBlurLocal : CIFilter
{
    CIImage *inputImage;
}

+ (id)filterWithName:(id)arg1;
- (id)outputImage;
- (struct CGRect)regionOf:(int)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;

@end

