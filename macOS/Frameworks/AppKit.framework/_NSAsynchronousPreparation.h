//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, _NSAsynchronousPreparationDelegate, _NSAsynchronousPreparationInputParameters;

__attribute__((visibility("hidden")))
@interface _NSAsynchronousPreparation : NSObject
{
    id <_NSAsynchronousPreparationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    // Error parsing type: AQ, name: _changeCount
    unsigned long long _scheduledChangeCount;
    BOOL _isObservingInputParameters;
    NSObject<_NSAsynchronousPreparationInputParameters> *_parameters;
    id _preparedResult;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id preparedResult;
@property(readonly, nonatomic) id <_NSAsynchronousPreparationInputParameters> parameters;
- (void)dealloc;
- (void)destroy;
- (id)initWithDelegate:(id)arg1 parameters:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

