//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol AXSBVoiceOverSwipeDetectorDelegate;

@interface AXSBVoiceOverSwipeDetectorView : UIView
{
    UILabel *_titleLabel;
    UIImageView *_bgImageView;
    _Bool _swipeDetected;
    id <AXSBVoiceOverSwipeDetectorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AXSBVoiceOverSwipeDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)_cancelVOSwipeActivation:(id)arg1;
- (void)_swipeDetected:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

