//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreFoundation/CKBook.h>

#import <StoreFoundation/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface CKDAAPPurchasedItem : CKBook <NSSecureCoding>
{
    NSDictionary *_daapDictionary;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSDictionary *daapDictionary; // @synthesize daapDictionary=_daapDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

