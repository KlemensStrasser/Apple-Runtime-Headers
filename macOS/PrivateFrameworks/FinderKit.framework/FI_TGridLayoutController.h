//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FI_TGridLayoutController : NSObject
{
    struct CGRect _anchoredCellFrame;
}

- (void)_buildOccupiedGridMap:(const vector_e1abc270 *)arg1 inIndexesToTryToSnap:(id)arg2 outIndexesToSnap:(id)arg3 outIndexesToPlace:(id)arg4;
- (vector_e1abc270)occupyGridSpots:(unsigned long long)arg1;
- (vector_e1abc270)findAvailableAnchorPoints:(unsigned long long)arg1 occupiedAnchorPoints:(const vector_e1abc270 *)arg2;
- (_Bool)snapIndexes:(id)arg1 ofAnchorPointsToGrid:(vector_e1abc270 *)arg2 unique:(_Bool)arg3;
- (unsigned long long)nextMajorIndexFromIndex:(unsigned long long)arg1;
- (struct CGPoint)anchorForIndex:(unsigned long long)arg1;
- (struct CGPoint)_anchorForIndex:(unsigned long long)arg1 totalNumGridSpots:(unsigned long long)arg2;
- (struct CGSize)gridSize;
@property struct CGRect anchoredCellFrame; // @dynamic anchoredCellFrame;
- (id)delegate;

@end

