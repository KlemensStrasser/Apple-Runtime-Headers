//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKClinicalSourceAuthorizationController, HKSource;

@interface HKClinicalAuthorizationDisplayController : NSObject
{
    HKClinicalSourceAuthorizationController *_authorizationController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HKClinicalSourceAuthorizationController *authorizationController; // @synthesize authorizationController=_authorizationController;
@property(readonly, copy, nonatomic) HKSource *source;
- (id)currentTimeTitleForReadAuthorizationModeFooterWithSelectedMode:(int)arg1 formatBlock:(CDUnknownBlockType)arg2;
- (id)committedTitleForReadAuthorizationModeFooterWithSelectedMode:(int)arg1 formatBlock:(CDUnknownBlockType)arg2;
- (id)currentTimeDisplayStringForReadAuthorizationFooter;
- (id)_displayStringForReadAuthorizationDate:(id)arg1;
- (id)_displayReadAuthorizationDateForMode:(int)arg1;
- (id)initWithAuthorizationController:(id)arg1;
- (id)init;

@end

