//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class NSString, UIButton, UILabel;

@interface PKDashboardTitleHeaderView : PKDashboardCollectionViewCell
{
    UILabel *_titleLabel;
    UIButton *_actionButton;
    _Bool _isTemplateLayout;
    _Bool _isCompactUI;
    _Bool _useCompactTopInset;
    NSString *_actionTitle;
    CDUnknownBlockType _action;
}

+ (float)defaultHorizontalInset;
+ (id)defaultBackgroundColor;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(nonatomic) _Bool useCompactTopInset; // @synthesize useCompactTopInset=_useCompactTopInset;
- (void)_buttonPressed:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *titleLabel;
- (void)resetFonts;
- (void)createSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

