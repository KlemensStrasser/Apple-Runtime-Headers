//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString;

@interface SANPSetRepeatMode : SADomainCommand
{
}

+ (id)setRepeatModeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setRepeatMode;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *repeatMode;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

