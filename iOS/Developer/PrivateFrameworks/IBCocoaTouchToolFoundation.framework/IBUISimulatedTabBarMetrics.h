//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/IBUISimulatedBarMetrics.h>

@class UIColor;

@interface IBUISimulatedTabBarMetrics : IBUISimulatedBarMetrics
{
    _Bool _translucent;
    UIColor *_tintColor;
    UIColor *_barTintColor;
}

+ (id)simulatedTabBarMetricsWithStyle:(long long)arg1 translucent:(_Bool)arg2 tintColor:(id)arg3 barTintColor:(id)arg4;
+ (id)defaultMetrics;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(readonly, copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic, getter=isTranslucent) _Bool translucent; // @synthesize translucent=_translucent;
- (id)description;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 translucent:(_Bool)arg2 tintColor:(id)arg3 barTintColor:(id)arg4;

@end

