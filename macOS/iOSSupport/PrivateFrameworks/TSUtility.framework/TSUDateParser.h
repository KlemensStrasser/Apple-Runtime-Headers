//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSUDateParser : NSObject
{
    NSMutableArray *mFormatCategories;
    struct __CFLocale *mLocale;
    BOOL mIsJapaneseLocale;
    struct __CFDateFormatter *mSpecialCaseFormatter;
}

+ (id)parserForDefaultLocale;
- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 successfulFormatString:(const struct __CFString **)arg2;
- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 preferredFormatString:(struct __CFString *)arg2 successfulFormatString:(const struct __CFString **)arg3 tryAggressiveFormats:(BOOL)arg4;
- (struct __CFDate *)newDateFromStringTryingFormats:(struct __CFString *)arg1 locale:(struct __CFLocale *)arg2 formats:(id)arg3 outSuccessfulFormatString:(const struct __CFString **)arg4;
- (struct __CFDateFormatter *)specialCaseDateFormatterForLocale:(struct __CFLocale *)arg1;
- (void)dealloc;
- (id)initWithLocale:(struct __CFLocale *)arg1;
- (void)datePreferencesChanged:(id)arg1;
- (void)parseFormat:(id)arg1 initialPattern:(id *)arg2 separator:(unsigned short *)arg3;
- (void)addFormat:(id)arg1 locale:(struct __CFLocale *)arg2 formatCategoryMap:(id)arg3;

@end

