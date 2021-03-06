//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSQLitePredicate, NSArray, NSString;

@interface HDSQLiteEntityIndex : NSObject
{
    _Bool _unique;
    Class _entityClass;
    NSString *_name;
    NSArray *_columns;
    HDSQLitePredicate *_predicate;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) HDSQLitePredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic, getter=isUnique) _Bool unique; // @synthesize unique=_unique;
@property(readonly, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
- (id)creationSQL;
@property(readonly, copy, nonatomic) NSString *disambiguatedName;
- (id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3 unique:(_Bool)arg4 predicate:(id)arg5;
- (id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3;

@end

