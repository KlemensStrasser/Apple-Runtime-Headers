//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNVCardDateScanner : NSObject
{
    NSString *_string;
    unsigned int _position;
}

+ (id)scannerWithString:(id)arg1;
- (void).cxx_destruct;
@property(readonly) unsigned int position; // @synthesize position=_position;
- (unsigned short)nextCharacter;
- (_Bool)isAtEnd;
- (_Bool)scanLeapMarker;
- (unsigned int)lengthOfCalendarUnit:(unsigned int)arg1;
- (int)scanCalendarUnit:(unsigned int)arg1;
- (int)scanComponentValueOfLength:(unsigned int)arg1;
- (id)initWithString:(id)arg1;

@end

