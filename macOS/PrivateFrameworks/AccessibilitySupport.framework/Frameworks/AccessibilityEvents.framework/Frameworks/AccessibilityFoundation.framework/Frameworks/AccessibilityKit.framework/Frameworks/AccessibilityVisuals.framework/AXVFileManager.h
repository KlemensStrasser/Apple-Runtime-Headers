//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXVFileManager : NSObject
{
}

+ (id)sharedManager;
- (BOOL)_createTemporarySubDirectory:(id)arg1;
- (id)_saveDirectoryForImageWithFileName:(id)arg1;
- (id)temporaryDirectoryPath;
- (id)saveImage:(id)arg1 fileName:(id)arg2;
- (id)saveImageRepresentationForView:(id)arg1 fileName:(id)arg2;

@end

