//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INCurrencyAmount, INPerson, NSString;

@protocol INRequestPaymentIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSString *note;
@property(copy, nonatomic) INCurrencyAmount *currencyAmount;
@property(copy, nonatomic) INPerson *payer;
- (id)init;
@end

