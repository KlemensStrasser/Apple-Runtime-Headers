//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/SYChange-Protocol.h>

@class NSString;
@protocol SYObject;

__attribute__((visibility("hidden")))
@interface SYObjectWrapper : NSObject <SYChange>
{
    int _type;
    id <SYObject> _wrappedObject;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SYObject> wrappedObject; // @synthesize wrappedObject=_wrappedObject;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) int changeType;
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (id)initWithSYObject:(id)arg1 type:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

