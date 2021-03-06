//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <ReplayKit/RPVideoOverlayButton-Protocol.h>

@interface RPFlatVideoOverlayButton : UIButton <RPVideoOverlayButton>
{
    long long _style;
    id _target;
    SEL _action;
}

- (void).cxx_destruct;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (id)_createOverlayImageWithBackgroundWhite:(double)arg1 backgroundAlpha:(double)arg2 glyphAlpha:(double)arg3;
- (id)_highlightedButtonImage;
- (id)_normalButtonImage;
- (void)_handleTap:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (long long)style;
- (id)initWithStyle:(long long)arg1;

@end

