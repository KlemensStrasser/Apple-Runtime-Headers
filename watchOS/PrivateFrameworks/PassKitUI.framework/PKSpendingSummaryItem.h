//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSString, PKSpendingSummary;

@interface PKSpendingSummaryItem : NSObject <PKDashboardItem>
{
    PKSpendingSummary *_spendingSummary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKSpendingSummary *spendingSummary; // @synthesize spendingSummary=_spendingSummary;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

