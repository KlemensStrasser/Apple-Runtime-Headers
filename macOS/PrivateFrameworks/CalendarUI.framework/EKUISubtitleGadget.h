//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarUI/EKUISingleViewGadget.h>

@class CalUILabel, NSLayoutConstraint;

@interface EKUISubtitleGadget : EKUISingleViewGadget
{
    CalUILabel *_subtitleLabel;
    NSLayoutConstraint *_zeroHeightConstraint;
}

- (void).cxx_destruct;
@property(retain) NSLayoutConstraint *zeroHeightConstraint; // @synthesize zeroHeightConstraint=_zeroHeightConstraint;
@property(retain) CalUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
- (BOOL)shouldDisplay;

@end

