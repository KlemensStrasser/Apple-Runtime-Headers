//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet;

@interface WBSMutableOrderedSet : NSObject
{
    NSMutableOrderedSet *_mutableOrderedSet;
    unsigned int _maximumCount;
}

- (void).cxx_destruct;
- (void)_moveObjectAtIndexToLast:(unsigned int)arg1;
- (void)markObjectAsRecentlyUsed:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objectAtIndexWithoutAffectingRecency:(unsigned int)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) NSArray *array;
- (id)initWithMaximumCount:(unsigned int)arg1;
- (id)init;

@end

