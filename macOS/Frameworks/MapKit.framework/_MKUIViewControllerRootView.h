//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class _MKUIViewController;

@interface _MKUIViewControllerRootView : NSView
{
    _MKUIViewController *_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak _MKUIViewController *viewController; // @synthesize viewController=_viewController;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)layout;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewController:(id)arg1;

@end

