//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface PKDashboardCollectionViewCell : UICollectionViewCell
{
    UIView *_separatorView;
    _Bool _showsBottomSeparator;
    _Bool _bottomSeparatorVisible;
    unsigned long long _maskType;
    struct CGRect _previousMaskBounds;
    unsigned long long _previousMaskType;
    _Bool _customHorizontalInset;
    double _horizontalInset;
    _Bool _wantsCustomAppearance;
    _Bool _wantsDefaultHighlightBehavior;
}

+ (id)defaultBackgroundColor;
+ (double)defaultHorizontalInset;
- (void).cxx_destruct;
@property(nonatomic) _Bool showsBottomSeparator; // @synthesize showsBottomSeparator=_showsBottomSeparator;
@property(nonatomic) _Bool wantsDefaultHighlightBehavior; // @synthesize wantsDefaultHighlightBehavior=_wantsDefaultHighlightBehavior;
@property(nonatomic) _Bool wantsCustomAppearance; // @synthesize wantsCustomAppearance=_wantsCustomAppearance;
- (void)setHighlighted:(_Bool)arg1;
- (double)_bottomSeparatorAlpha;
- (void)setBottomSeparatorVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateMask;
@property(nonatomic) unsigned long long maskType;
@property(nonatomic) double horizontalInset;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

