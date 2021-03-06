//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionURLOpener-Protocol.h>

@class LSApplicationWorkspace, NSString;

@interface CNUIUserActionWorkspaceURLOpener : NSObject <CNUIUserActionURLOpener>
{
    LSApplicationWorkspace *_workspace;
}

+ (id)openConfigurationWithEndpoint:(id)arg1 isSensitive:(_Bool)arg2;
+ (id)urlCouldNotBeOpenedErrorWithURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) LSApplicationWorkspace *workspace; // @synthesize workspace=_workspace;
- (id)openURL:(id)arg1 isSensitive:(_Bool)arg2 connectionEndpoint:(id)arg3 withScheduler:(id)arg4;
- (id)openURL:(id)arg1 isSensitive:(_Bool)arg2 withScheduler:(id)arg3;
- (id)openURL:(id)arg1 withScheduler:(id)arg2;
- (id)initWithWorkspace:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

