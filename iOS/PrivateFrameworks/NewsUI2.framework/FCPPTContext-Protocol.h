//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsUI2/NSObject-Protocol.h>

@class FCPPTTodayContentDescriptor, NSString;

@protocol FCPPTContext <NSObject>
- (void)d_logState;
@property(nonatomic) _Bool prefetchDisabled;
- (_Bool)isPrefetchDisabled;
@property(nonatomic, copy) NSString *forYouFeedIDOverride;
@property(nonatomic, retain) FCPPTTodayContentDescriptor *todayContentDescriptor;
@property(nonatomic) _Bool runningPPT;
- (_Bool)isRunningPPT;
@property(nonatomic, copy) NSString *testName;
@end

