//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSKDocumentRoot.h>

@class TSSStylesheet, UIViewController;

@interface SXTextTangierDocumentRoot : TSKDocumentRoot
{
    UIViewController *_viewController;
    TSSStylesheet *_aStylesheet;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TSSStylesheet *aStylesheet; // @synthesize aStylesheet=_aStylesheet;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)stylesheet;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

