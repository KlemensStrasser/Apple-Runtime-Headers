//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PLSearchResultSection : NSObject
{
    unsigned int _resultTypes;
    NSArray *_searchResults;
    unsigned long long _categoryMask;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(readonly, nonatomic) unsigned long long categoryMask; // @synthesize categoryMask=_categoryMask;
@property(readonly, nonatomic) unsigned int resultTypes; // @synthesize resultTypes=_resultTypes;
- (id)initWithResultTypes:(unsigned int)arg1 categoryMask:(unsigned long long)arg2 searchResults:(id)arg3;

@end

