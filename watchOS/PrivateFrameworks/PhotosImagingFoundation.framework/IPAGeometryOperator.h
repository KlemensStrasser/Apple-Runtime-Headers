//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/IPAGeometryOperator-Protocol.h>

@class NSString;

@interface IPAGeometryOperator : NSObject <IPAGeometryOperator>
{
    NSString *_identifer;
}

- (void).cxx_destruct;
- (id)transformForGeometry:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

