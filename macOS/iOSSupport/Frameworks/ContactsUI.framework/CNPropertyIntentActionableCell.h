//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNPropertyIntentActionableCell : CNPropertySimpleTransportCell
{
    NSArray *_actions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void)transportButton3Clicked:(id)arg1;
- (void)transportButton2Clicked:(id)arg1;
- (void)transportButton1Clicked:(id)arg1;
- (id)transportsMapping;
- (void)updateTransportButtons;
- (void)performDefaultAction;
- (BOOL)shouldPerformDefaultAction;
- (id)defaultContext;

@end

