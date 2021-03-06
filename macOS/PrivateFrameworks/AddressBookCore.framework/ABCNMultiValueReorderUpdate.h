//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBookCore/ABCNMultiValueUpdate-Protocol.h>

@class NSOrderedSet, NSString;

@interface ABCNMultiValueReorderUpdate : NSObject <ABCNMultiValueUpdate>
{
    NSOrderedSet *_identifiers;
}

@property(readonly, copy) NSString *description;
- (long long)compareIndexOfIdentifier:(id)arg1 toIndexOfIdentifier:(id)arg2;
- (void)applyToABMutableMultiValue:(id)arg1 transform:(CDUnknownBlockType)arg2;
- (void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2;
- (void)dealloc;
- (id)initWithIdentifiers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

