//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKStateCaptureHandler : NSObject
{
    NSString *_name;
    unsigned long long _handle;
    function_93b463e9 _callback;
}

+ (struct os_state_data_s *)stateDataForDictionary:(id)arg1 title:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct os_state_data_s *)_stateCapture;
- (void)_unregisterHandlerforStateCapture;
- (void)_registerHandlerforStateCapture:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 withName:(id)arg2 withCallback:(function_93b463e9)arg3;

@end

