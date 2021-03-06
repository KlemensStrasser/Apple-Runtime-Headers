//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CalDescriptionBuilder : NSObject
{
    NSMutableDictionary *_descriptionUnderConstruction;
    NSString *_superclassDescription;
    _Bool _sortedByKey;
    NSString *_keyDelimiter;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *keyDelimiter; // @synthesize keyDelimiter=_keyDelimiter;
@property(nonatomic) _Bool sortedByKey; // @synthesize sortedByKey=_sortedByKey;
@property(copy, nonatomic) NSString *superclassDescription; // @synthesize superclassDescription=_superclassDescription;
@property(retain, nonatomic) NSMutableDictionary *descriptionUnderConstruction; // @synthesize descriptionUnderConstruction=_descriptionUnderConstruction;
- (id)build;
- (void)setKey:(id)arg1 withDispatchSource:(id)arg2;
- (void)setKey:(id)arg1 withDispatchQueue:(id)arg2;
- (void)setKey:(id)arg1 withTimeInterval:(double)arg2;
- (void)setKey:(id)arg1 withSize:(unsigned long)arg2;
- (void)setKey:(id)arg1 withSelector:(SEL)arg2;
- (void)setKey:(id)arg1 withProcessID:(int)arg2;
- (void)setKey:(id)arg1 withPointerAddress:(const void *)arg2;
- (void)setKey:(id)arg1 withMachPort:(unsigned int)arg2;
- (void)setKey:(id)arg1 withClass:(Class)arg2;
- (void)setKey:(id)arg1 withUnsignedShort:(unsigned short)arg2;
- (void)setKey:(id)arg1 withUnsignedLongLong:(unsigned long long)arg2;
- (void)setKey:(id)arg1 withUnsignedLong:(unsigned long)arg2;
- (void)setKey:(id)arg1 withUnsignedInteger:(unsigned int)arg2;
- (void)setKey:(id)arg1 withUnsignedInt:(unsigned int)arg2;
- (void)setKey:(id)arg1 withUnsignedChar:(unsigned char)arg2;
- (void)setKey:(id)arg1 withShort:(short)arg2;
- (void)setKey:(id)arg1 withLongLong:(long long)arg2;
- (void)setKey:(id)arg1 withLong:(long)arg2;
- (void)setKey:(id)arg1 withInteger:(int)arg2;
- (void)setKey:(id)arg1 withInt:(int)arg2;
- (void)setKey:(id)arg1 withFloat:(float)arg2;
- (void)setKey:(id)arg1 withDouble:(double)arg2;
- (void)setKey:(id)arg1 withCharArray:(const char *)arg2;
- (void)setKey:(id)arg1 withChar:(BOOL)arg2;
- (void)setKey:(id)arg1 withBoolean:(_Bool)arg2;
- (void)setKey:(id)arg1 withString:(id)arg2;
- (void)setKey:(id)arg1 withSet:(id)arg2;
- (void)setKey:(id)arg1 withObject:(id)arg2;
- (void)setKey:(id)arg1 withEnumNumericalValue:(int)arg2 andStringValue:(id)arg3;
- (void)setKey:(id)arg1 withDictionary:(id)arg2;
- (void)setKey:(id)arg1 withDate:(id)arg2;
- (void)setKey:(id)arg1 withArray:(id)arg2;
- (id)description;
- (id)initWithSuperclassDescription:(id)arg1;
- (id)init;

@end

