//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSKit/TSKSosBase.h>

@interface TSTCellUIDRegion : TSKSosBase
{
    vector_793e6c56 _cellUIDRangeList;
}

+ (id)cellUIDRegionFromRegion:(id)arg1 inTableModel:(id)arg2;
+ (id)cellUIDRegionFromRegion:(id)arg1 inTable:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: v24@0:8^{CellUIDRegionArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<TSP::UUIDRectArchive>=^{Arena}ii^{Rep}}}16, name: saveToMessage:
-     // Error parsing type: @24@0:8r^{CellUIDRegionArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<TSP::UUIDRectArchive>=^{Arena}ii^{Rep}}}16, name: initFromMessage:
- (vector_793e6c56)subRangesOfCellCount:(unsigned long long)arg1;
- (void)enumerateCellUIDUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCellUIDRangesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned long long cellCount;
- (id)pruneAgainstTable:(id)arg1;
- (id)cellRegionFromTable:(id)arg1;
- (id)initWithCellUIDRangeVector:(const vector_793e6c56 *)arg1;

@end

