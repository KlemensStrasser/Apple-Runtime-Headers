//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SlalomWriteOperation : NSObject
{
    unsigned short serviceCode;
    unsigned short blockNumber;
    unsigned short offsets;
}

@property unsigned short offsets; // @synthesize offsets;
@property unsigned short blockNumber; // @synthesize blockNumber;
@property unsigned short serviceCode; // @synthesize serviceCode;
- (id)description;

@end

