//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLAlertSoundPolicySource-Protocol.h>

@class CUISAlertPolicy, NSString;

@interface CSLAlertClientSoundPolicy : NSObject <CSLAlertSoundPolicySource>
{
    CUISAlertPolicy *_presentationPolicy;
}

- (void).cxx_destruct;
@property(nonatomic) __weak CUISAlertPolicy *presentationPolicy; // @synthesize presentationPolicy=_presentationPolicy;
- (unsigned int)allowedAudioFeedbackForAlertName:(id)arg1 options:(unsigned int)arg2;
- (unsigned int)allowedAudioFeedbackForAlertName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

