//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface REMDatabaseMigrationAccountInfo : NSObject
{
    NSString *_identifier;
    NSString *_name;
    int _type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithAccountType:(int)arg1 identifier:(id)arg2 name:(id)arg3;

@end

