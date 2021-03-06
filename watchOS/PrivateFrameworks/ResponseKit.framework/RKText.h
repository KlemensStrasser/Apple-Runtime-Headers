//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface RKText : NSObject
{
    _Bool _trainVerbatim;
    NSString *_string;
    NSString *_languageID;
    NSMutableArray *_annotations;
    NSString *_processedText;
    double _trainingWeight;
}

+ (unsigned int)polarityTypeFromName:(id)arg1;
+ (id)polarityNameFromType:(unsigned int)arg1;
+ (unsigned int)annotationTypeFromName:(id)arg1;
+ (id)annotationNameFromType:(unsigned int)arg1;
+ (void)initialize;
+ (id)defaultDataProvider;
- (void).cxx_destruct;
@property(retain) NSString *processedText; // @synthesize processedText=_processedText;
@property(retain) NSMutableArray *annotations; // @synthesize annotations=_annotations;
@property _Bool trainVerbatim; // @synthesize trainVerbatim=_trainVerbatim;
@property double trainingWeight; // @synthesize trainingWeight=_trainingWeight;
@property(retain) NSString *languageID; // @synthesize languageID=_languageID;
@property(retain) NSString *string; // @synthesize string=_string;
- (id)lsmText;
- (id)taggedText;
- (unsigned int)annotatedPolarity;
- (id)subTextsByPolarity;
- (id)subTextWithRange:(struct _NSRange)arg1;
- (_Bool)cleanupData;
- (void)enumerateAnnotationsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)annotateRange:(struct _NSRange)arg1 type:(unsigned int)arg2 machineGenerated:(_Bool)arg3;
- (void)annotateRange:(struct _NSRange)arg1 type:(unsigned int)arg2;
- (id)initWithString:(id)arg1 andLanguageIdentifier:(id)arg2 trainingWeight:(double)arg3 trainVerbatim:(_Bool)arg4;
- (id)initWithString:(id)arg1 andLanguageIdentifier:(id)arg2;
- (id)init;

@end

