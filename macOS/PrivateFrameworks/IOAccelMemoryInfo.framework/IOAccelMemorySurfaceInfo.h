//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IOAccelMemorySurfaceInfo : NSObject
{
    unsigned int surfaceID;
    unsigned int width;
    unsigned int height;
    NSString *pixelFormat;
    NSString *surfaceBuffer;
    id _expansionData;
}

@property(retain) NSString *surfaceBuffer; // @synthesize surfaceBuffer;
@property(retain) NSString *pixelFormat; // @synthesize pixelFormat;
@property unsigned int height; // @synthesize height;
@property unsigned int width; // @synthesize width;
@property unsigned int surfaceID; // @synthesize surfaceID;
- (void)dealloc;

@end

