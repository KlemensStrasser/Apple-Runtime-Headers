//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CTSweetgumPlanGroup : NSObject <NSSecureCoding>
{
    long long _planCategory;
    NSArray *_plans;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *plans; // @synthesize plans=_plans;
@property(nonatomic) long long planCategory; // @synthesize planCategory=_planCategory;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

