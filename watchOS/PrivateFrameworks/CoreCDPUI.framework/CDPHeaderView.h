//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, NSString, PUICHyphenatedLabel, UILabel;

@interface CDPHeaderView : UIView
{
    UILabel *_titleLabel;
    NSLayoutConstraint *_titleLabelFBLConstraint;
    PUICHyphenatedLabel *_detailLabel;
    NSLayoutConstraint *_detailLabelFBLConstraint;
    NSLayoutConstraint *_detailLabelLBLConstraint;
}

+ (void)_setupHeaderSpec;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateBaselineConstraints;
@property(retain, nonatomic) NSString *detailText;
@property(retain, nonatomic) NSString *titleText;
- (void)updateConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTitleText:(id)arg1 detailText:(id)arg2;

@end

