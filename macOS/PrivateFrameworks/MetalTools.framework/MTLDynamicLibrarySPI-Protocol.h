//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLDynamicLibrary-Protocol.h>

@class NSArray, NSObject, NSString;
@protocol OS_dispatch_data;

@protocol MTLDynamicLibrarySPI <MTLDynamicLibrary>
@property(readonly) const CDStruct_5af0f983 *libraryUUID;
@property(readonly) NSString *libraryPath;
@property(readonly) NSArray *linkedLibraries;
@property(readonly) NSArray *functionNames;
@property(readonly) NSObject<OS_dispatch_data> *binaryData;
@end

