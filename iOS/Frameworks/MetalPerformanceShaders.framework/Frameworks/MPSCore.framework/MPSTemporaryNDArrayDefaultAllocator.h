//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSCore/MPSNDArrayDefaultAllocator.h>

#import <MPSCore/MPSNDArrayAllocator-Protocol.h>

@class NSString;

@interface MPSTemporaryNDArrayDefaultAllocator : MPSNDArrayDefaultAllocator <MPSNDArrayAllocator>
{
}

+ (_Bool)supportsSecureCoding;
- (id)arrayForCommandBuffer:(id)arg1 arrayDescriptor:(id)arg2 kernel:(id)arg3;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

