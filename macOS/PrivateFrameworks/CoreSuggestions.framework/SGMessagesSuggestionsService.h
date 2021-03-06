//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/SGSuggestionsService.h>

#import <CoreSuggestions/SGSuggestionsServiceMessagesProtocol-Protocol.h>

@class NSMutableDictionary, SGMessagesDaemonConnection;
@protocol SGMessagesSuggestionsServiceDelegate;

@interface SGMessagesSuggestionsService : SGSuggestionsService <SGSuggestionsServiceMessagesProtocol>
{
    id <SGMessagesSuggestionsServiceDelegate> _delegate;
    SGMessagesDaemonConnection *_messagesDaemonConnection;
    NSMutableDictionary *_previousMessages;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *previousMessages; // @synthesize previousMessages=_previousMessages;
@property(retain) SGMessagesDaemonConnection *messagesDaemonConnection; // @synthesize messagesDaemonConnection=_messagesDaemonConnection;
@property __weak id <SGMessagesSuggestionsServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)harvestedSuggestionsFromMessages:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)harvestedSuggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)isMessageEligibleForSuggestions:(id)arg1;
- (void)sendContextForMessage:(id)arg1;
- (void)setupContextIfNeededForConversation:(id)arg1;
- (id)_remoteSuggestionManager;
- (void)setManagerForTesting:(id)arg1;
- (id)init;

@end

