//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class CALayer, UIImage;

__attribute__((visibility("hidden")))
@interface _UIBackButtonContainerView : UIView
{
    CALayer *_edgeMask;
    CALayer *_fillMask;
    _Bool _isRTL;
    UIImage *_edgeMaskImage;
    float _backButtonLeadingMargin;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRTL; // @synthesize isRTL=_isRTL;
@property(nonatomic) float backButtonLeadingMargin; // @synthesize backButtonLeadingMargin=_backButtonLeadingMargin;
@property(retain, nonatomic) UIImage *edgeMaskImage; // @synthesize edgeMaskImage=_edgeMaskImage;
@property(nonatomic) _Bool maskEnabled;

@end

