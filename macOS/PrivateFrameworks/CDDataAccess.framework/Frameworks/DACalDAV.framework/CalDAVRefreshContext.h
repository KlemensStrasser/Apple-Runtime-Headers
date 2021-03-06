//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface CalDAVRefreshContext : NSObject
{
    BOOL _isForced;
    BOOL _wasUserRequested;
    BOOL _wasDueToPush;
    BOOL _isPrincipalOnly;
    BOOL _isCalendarsOnly;
    BOOL _didDownloadEvents;
    BOOL _didSaveDatabase;
    BOOL _shouldSave;
    BOOL _shouldSaveAccounts;
    BOOL _calendarFailedToSync;
    BOOL _shouldRetry;
    int _retryTime;
    double _startTime;
    unsigned long long _numDownloadedElements;
    unsigned long long _numUploadedElements;
    NSError *_error;
    unsigned long long _localItems;
}

+ (id)defaultContext;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long localItems; // @synthesize localItems=_localItems;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) int retryTime; // @synthesize retryTime=_retryTime;
@property(nonatomic) BOOL shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property(nonatomic) unsigned long long numUploadedElements; // @synthesize numUploadedElements=_numUploadedElements;
@property(nonatomic) unsigned long long numDownloadedElements; // @synthesize numDownloadedElements=_numDownloadedElements;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) BOOL calendarFailedToSync; // @synthesize calendarFailedToSync=_calendarFailedToSync;
@property(nonatomic) BOOL shouldSaveAccounts; // @synthesize shouldSaveAccounts=_shouldSaveAccounts;
@property(nonatomic) BOOL shouldSave; // @synthesize shouldSave=_shouldSave;
@property(nonatomic) BOOL didSaveDatabase; // @synthesize didSaveDatabase=_didSaveDatabase;
@property(nonatomic) BOOL didDownloadEvents; // @synthesize didDownloadEvents=_didDownloadEvents;
@property(nonatomic) BOOL isCalendarsOnly; // @synthesize isCalendarsOnly=_isCalendarsOnly;
@property(nonatomic) BOOL isPrincipalOnly; // @synthesize isPrincipalOnly=_isPrincipalOnly;
@property(nonatomic) BOOL wasDueToPush; // @synthesize wasDueToPush=_wasDueToPush;
@property(nonatomic) BOOL wasUserRequested; // @synthesize wasUserRequested=_wasUserRequested;
@property(nonatomic) BOOL isForced; // @synthesize isForced=_isForced;

@end

