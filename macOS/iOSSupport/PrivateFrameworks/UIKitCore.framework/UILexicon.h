//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray;

@interface UILexicon : NSObject <NSCopying>
{
    NSArray *_entries;
}

+ (id)_lexiconWithTILexicon:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

