//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsShortcutStorage-Protocol.h>

@class NSArray, NSError, NSString;

@interface MapsSuggestionsFakeShortcutStorage : NSObject <MapsSuggestionsShortcutStorage>
{
    struct ReadWriteQueue _rwQueue;
    NSArray *_fakeResults;
    NSArray *_passedInput;
    NSError *_fakeError;
    unsigned int _calledLoad;
    unsigned int _calledAddOrUpdate;
    unsigned int _calledRemove;
    unsigned int _calledMove;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (unsigned int)calledMove;
- (unsigned int)calledRemove;
- (unsigned int)calledAddOrUpdate;
- (unsigned int)calledRequestLoad;
- (id)passedInput;
- (void)configureError:(id)arg1;
- (void)configureResults:(id)arg1;
- (void)setChangeHandler:(CDUnknownBlockType)arg1;
- (_Bool)moveShortcutToFront:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)moveShortcutToBack:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)moveShortcut:(id)arg1 toIndex:(int)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)removeShortcuts:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)addOrUpdateShortcuts:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)loadAllShortcutsWithHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

