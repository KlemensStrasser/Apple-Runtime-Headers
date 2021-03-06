//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICTableHeaderFooterView.h>

@class NSLayoutConstraint, UILabel;

@interface AKAuthorizationTableHeaderFooterView : PUICTableHeaderFooterView
{
    UILabel *_customTextLabel;
    float _customTextLabelPaddingFromTop;
    NSLayoutConstraint *_topConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) float customTextLabelPaddingFromTop; // @synthesize customTextLabelPaddingFromTop=_customTextLabelPaddingFromTop;
@property(readonly, nonatomic) UILabel *customTextLabel; // @synthesize customTextLabel=_customTextLabel;
- (void)updateConstraints;
- (void)_updateBaselineConstraints;
- (void)_setUpCustomTextLabel;
- (void)_setup;
- (id)initWithReuseIdentifier:(id)arg1;

@end

