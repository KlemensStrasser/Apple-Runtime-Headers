//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Notes/NFNote.h>

#import <NotesUI/ICLegacyNote-Protocol.h>

@class NSString;

@interface NFNote (ICLegacyNote) <ICLegacyNote>
- (BOOL)isMarkedForDeletion;
- (void)markForDeletion;
- (BOOL)isPlainText;
- (id)creationDate;
- (void)setHtmlString:(id)arg1;
- (id)htmlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

