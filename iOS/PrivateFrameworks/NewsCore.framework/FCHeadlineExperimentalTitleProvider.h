//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCHeadlineExperimentalTitleProvider : NSObject
{
    _Bool _shouldShowAlternateHeadlines;
    NSString *_feldsparID;
}

+ (_Bool)isDebugModeEnabled;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowAlternateHeadlines; // @synthesize shouldShowAlternateHeadlines=_shouldShowAlternateHeadlines;
@property(readonly, copy, nonatomic) NSString *feldsparID; // @synthesize feldsparID=_feldsparID;
- (id)metadataForDefaultHeadlineWithTitle:(id)arg1;
- (id)_debugHeadlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3;
- (id)_headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3;
- (id)headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3;
- (id)initWithShouldShowAlternateHeadlines:(_Bool)arg1;

@end

