//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PGGraph;

@interface PGSearchMetadataComputer : NSObject
{
    PGGraph *_graph;
}

- (void).cxx_destruct;
@property(readonly) PGGraph *graph; // @synthesize graph=_graph;
- (id)_blacklistedMeaningsByMeaning;
- (id)_sceneWhitelist;
- (id)_mePersonUUID;
- (id)searchMetadataWithOptions:(id)arg1;
- (id)initWithGraph:(id)arg1;

@end

