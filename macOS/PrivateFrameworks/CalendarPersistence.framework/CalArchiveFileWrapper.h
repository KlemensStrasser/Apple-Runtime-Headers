//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileWrapper.h>

@class NSData;

@interface CalArchiveFileWrapper : NSFileWrapper
{
    NSData *_archiveData;
    int _archiveType;
    NSFileWrapper *_realFileWrapper;
}

- (void)getCompressedData:(id *)arg1 archiveType:(int *)arg2;
- (id)preferredFilename;
- (id)addSymbolicLinkWithDestination:(id)arg1 preferredFilename:(id)arg2;
- (id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2;
- (id)addFileWithPath:(id)arg1;
- (id)keyForFileWrapper:(id)arg1;
- (id)fileWrappers;
- (void)removeFileWrapper:(id)arg1;
- (id)addFileWrapper:(id)arg1;
- (id)serializedRepresentation;
- (BOOL)isSymbolicLink;
- (BOOL)isDirectory;
- (BOOL)isRegularFile;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 updateFilenames:(BOOL)arg3;
- (id)initWithData:(id)arg1 archiveType:(int)arg2;
- (void)finalize;
- (void)dealloc;

@end

