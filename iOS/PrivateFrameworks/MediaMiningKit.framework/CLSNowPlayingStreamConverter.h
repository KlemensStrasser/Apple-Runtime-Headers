//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLSNowPlayingStreamConverter : NSObject
{
    unsigned long long _options;
}

+ (id)recognizedMusicSources;
+ (unsigned long long)defaultOptions;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (_Bool)_canUseEvent:(id)arg1;
- (id)eventsFromDuetKnowledgeEvents:(id)arg1;
- (id)eventFromDuetKnoweledgeEvent:(id)arg1;
- (id)init;

@end

