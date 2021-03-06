//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLPhotoAnalysisPersonSuggestion : NSObject
{
    _Bool _confirmed;
    long long _keyFaceClusterSequenceNumber;
    NSString *_keyFaceLocalIdentifier;
    NSString *_personLocalIdentifier;
    long long _personFaceCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool confirmed; // @synthesize confirmed=_confirmed;
@property(readonly, nonatomic) long long personFaceCount; // @synthesize personFaceCount=_personFaceCount;
@property(readonly, copy, nonatomic) NSString *personLocalIdentifier; // @synthesize personLocalIdentifier=_personLocalIdentifier;
@property(readonly, copy, nonatomic) NSString *keyFaceLocalIdentifier; // @synthesize keyFaceLocalIdentifier=_keyFaceLocalIdentifier;
@property(readonly, nonatomic) long long keyFaceClusterSequenceNumber; // @synthesize keyFaceClusterSequenceNumber=_keyFaceClusterSequenceNumber;
- (id)description;
- (id)suggestionDictionaryRepresentation;
- (id)initWithSuggestionDictionary:(id)arg1;

@end

