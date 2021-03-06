//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSFastEnumeration-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSPointerFunctions;

@interface NSMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)weakToWeakObjectsMapTable;
+ (id)strongToWeakObjectsMapTable;
+ (id)weakToStrongObjectsMapTable;
+ (id)strongToStrongObjectsMapTable;
+ (id)mapTableWithWeakToWeakObjects;
+ (id)mapTableWithStrongToWeakObjects;
+ (id)mapTableWithWeakToStrongObjects;
+ (id)mapTableWithStrongToStrongObjects;
+ (id)mapTableWithKeyOptions:(unsigned int)arg1 valueOptions:(unsigned int)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)mutableDictionary;
- (void)removeAllObjects;
- (unsigned int)getKeys:(const void **)arg1 values:(const void **)arg2;
- (_Bool)mapMember:(const void *)arg1 originalKey:(const void **)arg2 value:(const void **)arg3;
- (id)enumerator;
- (void)removeAllItems;
- (id)allValues;
- (id)allKeys;
- (void)replaceItem:(const void *)arg1 forExistingKey:(const void *)arg2;
- (void *)existingItemForSetItem:(const void *)arg1 forAbsentKey:(const void *)arg2;
- (void)setItem:(const void *)arg1 forKnownAbsentKey:(const void *)arg2;
- (void)setItem:(const void *)arg1 forAbsentKey:(const void *)arg2;
- (void)setItem:(const void *)arg1 forKey:(const void *)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
@property(readonly, copy) NSPointerFunctions *valuePointerFunctions;
@property(readonly, copy) NSPointerFunctions *keyPointerFunctions;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)copy;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (unsigned int)__capacity;
@property(readonly) unsigned int count;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned int)arg3;
- (id)initWithKeyOptions:(unsigned int)arg1 valueOptions:(unsigned int)arg2 capacity:(unsigned int)arg3;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;

@end

