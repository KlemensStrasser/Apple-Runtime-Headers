//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class _TtC5JetUI18JetTraitCollection;

@interface NSView (JetUI)
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;
- (void)jet_traitCollectionDidChange:(id)arg1;
@property(nonatomic, readonly) _TtC5JetUI18JetTraitCollection *jet_traitCollection;
@property(nonatomic) BOOL jet_hasTraitCollection;
@property(nonatomic, readonly) struct CGRect jet_focusedFrame;
@property(nonatomic, readonly) BOOL hasContent;
@end

