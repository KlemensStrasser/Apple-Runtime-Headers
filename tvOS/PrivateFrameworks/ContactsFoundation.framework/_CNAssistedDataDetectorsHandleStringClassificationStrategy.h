//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/_CNHandleStringClassificationStrategy-Protocol.h>

@class NSString;
@protocol _CNHandleStringClassificationStrategy;

@interface _CNAssistedDataDetectorsHandleStringClassificationStrategy : NSObject <_CNHandleStringClassificationStrategy>
{
    id <_CNHandleStringClassificationStrategy> _strategy;
    id <_CNHandleStringClassificationStrategy> _assistingStrategy;
}

- (void).cxx_destruct;
- (void)makeAssistingStrategyIfNecessary;
- (unsigned long long)classificationOfHandleString:(id)arg1;
- (id)initWithStrategy:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

