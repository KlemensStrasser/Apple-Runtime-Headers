//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/EKIdentityProtocol-Protocol.h>

@class EKObjectID, EKSource, NSString, NSURL;

@interface EKCalendarNotification : NSObject <EKIdentityProtocol>
{
    long long _type;
    NSString *_title;
    NSString *_name;
    NSString *_emailAddress;
    NSString *_phoneNumber;
    NSURL *_URL;
    EKObjectID *_objectID;
    struct CGColor *_dotColor;
    _Bool _hiddenFromNotificationCenter;
    _Bool _alerted;
    _Bool _couldBeJunk;
    EKSource *_source;
    NSString *_firstName;
    NSString *_lastName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool couldBeJunk; // @synthesize couldBeJunk=_couldBeJunk;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) EKSource *source; // @synthesize source=_source;
@property(nonatomic) _Bool alerted; // @synthesize alerted=_alerted;
@property(nonatomic) _Bool hiddenFromNotificationCenter; // @synthesize hiddenFromNotificationCenter=_hiddenFromNotificationCenter;
@property(nonatomic) struct CGColor *dotColor; // @synthesize dotColor=_dotColor;
@property(retain, nonatomic) EKObjectID *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool needsAlert;
- (void)dealloc;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

