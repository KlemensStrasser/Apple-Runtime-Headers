//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCoder.h>

@interface NSCoder (TVTopShelf)
+ (_Bool)_tvs_validateDictionaryContents:(id)arg1 allowedKeyClasses:(id)arg2 allowedValueClasses:(id)arg3;
+ (_Bool)_tvs_validateObject:(id)arg1 allowedClasses:(id)arg2;
+ (_Bool)_tvs_validateObject:(id)arg1 allowedClass:(Class)arg2;
+ (id)tvs_topShelfUserInfoAllowedClasses;
- (id)tvs_decodeSimpleDictionaryWithDictionaryKeyClass:(Class)arg1 dictionaryValueClass:(Class)arg2 forKey:(id)arg3;
- (void)tvs_encodeSimpleDictionary:(id)arg1 withDictionaryKeyClass:(Class)arg2 dictionaryValueClass:(Class)arg3 forKey:(id)arg4;
- (id)tvs_decodeSimpleSetWithElementClass:(Class)arg1 forKey:(id)arg2;
- (void)tvs_encodeSimpleSet:(id)arg1 withElementClass:(Class)arg2 forKey:(id)arg3;
- (id)tvs_decodeSimpleArrayWithElementClass:(Class)arg1 forKey:(id)arg2;
- (void)tvs_encodeSimpleArray:(id)arg1 withElementClass:(Class)arg2 forKey:(id)arg3;
- (void)tvs_encodeObject:(id)arg1 ofClasses:(id)arg2 forKey:(id)arg3;
- (void)tvs_encodeObject:(id)arg1 ofClass:(Class)arg2 forKey:(id)arg3;
- (id)tvs_decodeTopShelfMutableImageRequestDictionaryForKey:(id)arg1;
- (id)tvs_decodeTopShelfImageRequestDictionaryForKey:(id)arg1;
- (void)tvs_encodeTopShelfImageRequestDictionary:(id)arg1 forKey:(id)arg2;
- (id)tvs_decodeTopShelfUserInfoForKey:(id)arg1;
- (void)tvs_encodeTopShelfUserInfo:(id)arg1 forKey:(id)arg2;
@end

