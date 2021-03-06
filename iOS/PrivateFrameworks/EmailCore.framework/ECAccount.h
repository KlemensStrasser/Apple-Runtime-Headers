//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailCore/EFLoggable-Protocol.h>
#import <EmailCore/EFPubliclyDescribable-Protocol.h>

@class ACAccount, ACAccountCredential, ACAccountStore, NSArray, NSDictionary, NSString;

@interface ECAccount : NSObject <EFLoggable, EFPubliclyDescribable>
{
    _Bool _sslIsDirectIsSet;
    ACAccountStore *_accountStore;
    NSString *_accountDescription;
    NSString *_accountDirectoryTildeAbbreviatedPath;
    ACAccount *_systemAccount;
    NSDictionary *_properties;
}

+ (id)standardSSLPorts;
+ (id)standardPorts;
+ (id)log;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) ACAccount *systemAccount; // @synthesize systemAccount=_systemAccount;
@property(copy, nonatomic) NSString *accountDirectoryTildeAbbreviatedPath; // @synthesize accountDirectoryTildeAbbreviatedPath=_accountDirectoryTildeAbbreviatedPath;
@property(readonly, nonatomic) _Bool sslIsDirectIsSet; // @synthesize sslIsDirectIsSet=_sslIsDirectIsSet;
@property(readonly, copy, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
- (void)clearSSLIsDirect;
- (_Bool)setSslIsDirectIsSet;
@property(nonatomic) _Bool sslIsDirect;
- (void)clearUsesSSL;
@property(nonatomic) _Bool usesSSL;
- (id)usesSSLObject;
@property(readonly, nonatomic) long long defaultSecurePortNumber;
@property(readonly, nonatomic) long long defaultPortNumber;
@property(readonly, copy, nonatomic) NSArray *standardSSLPorts;
@property(readonly, copy, nonatomic) NSArray *standardPorts;
@property(nonatomic) long long portNumber;
- (id)portNumberObject;
- (void)setDataClassProperty:(id)arg1 forKey:(id)arg2;
- (id)dataClassPropertyForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *dataclassProperties;
@property(copy, nonatomic) NSString *archiveMailboxName;
@property(copy, nonatomic) NSString *toDosMailboxName;
@property(copy, nonatomic) NSString *notesMailboxName;
@property(copy, nonatomic) NSString *junkMailboxName;
@property(copy, nonatomic) NSString *trashMailboxName;
@property(copy, nonatomic) NSString *sentMessagesMailboxName;
@property(copy, nonatomic) NSString *outboxMailboxName;
@property(copy, nonatomic) NSString *draftsMailboxName;
@property(nonatomic) _Bool deleteMessagesInPlace;
@property(nonatomic) long long numberOfDaysToKeepJunk;
@property(nonatomic) long long numberOfDaysToKeepTrash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)refresh;
@property(readonly, nonatomic) _Bool isAuthenticated;
@property(readonly, nonatomic) _Bool hasPasswordCredential;
@property(nonatomic) _Bool configureDynamically;
@property(nonatomic) _Bool allowInsecureAuthentication;
@property(copy, nonatomic) NSString *authenticationScheme;
@property(readonly, nonatomic) _Bool isPersonaAccount;
@property(readonly, nonatomic) NSString *personaIdentifier;
@property(readonly, nonatomic) _Bool isGmailAccount;
@property(readonly, nonatomic) _Bool isYahooAccount;
@property(readonly, nonatomic) _Bool isAppleAccount;
- (_Bool)isEnabledForDataclass:(id)arg1;
- (id)enabledDataclasses;
@property(nonatomic) _Bool isEnabled;
- (void)setOAuth2Token:(id)arg1 refreshToken:(id)arg2;
@property(readonly, copy, nonatomic) NSString *oauthToken;
@property(copy, nonatomic) NSString *password;
@property(readonly, copy, nonatomic) NSString *username;
- (id)_hostnameFromParentAccount:(id)arg1;
@property(copy, nonatomic) NSString *hostname;
@property(readonly, copy, nonatomic) ACAccountCredential *credendtial;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *accountTypeIdentifier;
- (void)renewCredentialsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithSystemAccount:(id)arg1;
- (id)initWithSystemAccount:(id)arg1 accountStore:(id)arg2;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

