//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@interface NSButton (GKAdditions)
+ (id)buttonWithType:(long long)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
@property(nonatomic) BOOL userInteractionEnabled;
- (id)titleForState:(unsigned long long)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)_gkConfigForNavbar;
- (void)setButtonKind:(int)arg1;
- (id)initWithButtonKind:(int)arg1 theme:(id)arg2;
- (id)initWithButtonKind:(int)arg1;
@end

