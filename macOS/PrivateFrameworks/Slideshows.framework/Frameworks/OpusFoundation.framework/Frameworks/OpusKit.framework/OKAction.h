//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OpusKit/NSSecureCoding-Protocol.h>
#import <OpusKit/OKActionExports-Protocol.h>

@class NSString;

@interface OKAction : NSObject <OKActionExports, NSSecureCoding>
{
    double _timestamp;
    struct CGPoint _location;
    unsigned long long _state;
    unsigned long long _touchCount;
    BOOL _shouldCancelCouchPotato;
    BOOL _hasCancelledCouchPotato;
    BOOL _shouldPropagate;
    BOOL _isInstantaneous;
    unsigned long long _scope;
    NSString *_keyPath;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (unsigned long long)directionFromPoint:(struct CGPoint)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)action;
@property(nonatomic) unsigned long long scope; // @synthesize scope=_scope;
@property(nonatomic) BOOL isInstantaneous; // @synthesize isInstantaneous=_isInstantaneous;
@property(nonatomic) BOOL shouldPropagate; // @synthesize shouldPropagate=_shouldPropagate;
@property(nonatomic) BOOL hasCancelledCouchPotato; // @synthesize hasCancelledCouchPotato=_hasCancelledCouchPotato;
@property(nonatomic) BOOL shouldCancelCouchPotato; // @synthesize shouldCancelCouchPotato=_shouldCancelCouchPotato;
@property(nonatomic) unsigned long long touchCount; // @synthesize touchCount=_touchCount;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void)convertFromResponder:(id)arg1 toResponder:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithLocation:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2;
- (id)initWithState:(unsigned long long)arg1 location:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3;
- (id)init;

@end

