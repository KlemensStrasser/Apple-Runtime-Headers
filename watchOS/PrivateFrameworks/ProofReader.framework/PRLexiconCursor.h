//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PRLexicon;

__attribute__((visibility("hidden")))
@interface PRLexiconCursor : NSObject
{
    PRLexicon *_lexicon;
    struct _LXCursor *_cursor;
}

- (void)enumerateCompletionEntries:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateCompletions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateCompletions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (double)terminationProbability;
- (double)prefixProbability;
- (_Bool)hasChildren;
- (_Bool)hasEntries;
- (_Bool)isValid;
- (void)advanceWithString:(id)arg1;
- (void)advanceWithCombinedCharacterSequence:(id)arg1;
- (void)_advance:(id)arg1;
- (void)dealloc;
- (id)initWithLexicon:(id)arg1;

@end

