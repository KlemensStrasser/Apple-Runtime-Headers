//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/WBSFormsMetadataProvider-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SFFormsMetadataProvider : NSObject <WBSFormsMetadataProvider>
{
    NSDictionary *_frameHandleToForms;
}

- (void).cxx_destruct;
- (void)enumerateFormsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int formCount;
- (id)initWithFrameHandleToFormsDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

