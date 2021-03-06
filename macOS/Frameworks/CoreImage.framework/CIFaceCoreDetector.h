//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIDetector.h>

@class CIContext, FCRFaceDetector, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIFaceCoreDetector : CIDetector
{
    CIContext *context;
    NSMutableDictionary *featureOptions;
    _Bool _tracking;
    FCRFaceDetector *faceCoreDetector;
}

@property(retain) FCRFaceDetector *faceCoreDetector; // @synthesize faceCoreDetector;
@property(retain, nonatomic) CIContext *context; // @synthesize context;
- (id)featuresInImage:(id)arg1;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithContext:(id)arg1 options:(id)arg2;
- (id)createFaceCoreDataFromCIImage:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3;
- (id)adjustedImageFromImage:(id)arg1 orientation:(int)arg2 inverseCTM:(struct CGAffineTransform *)arg3;
- (struct CGAffineTransform)ctmForImageWithBounds:(struct CGRect)arg1 orientation:(int)arg2;

@end

