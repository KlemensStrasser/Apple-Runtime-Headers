//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVUIKit/NSCopying-Protocol.h>

@class NSIndexPath;

@interface _TVFullScreenBrowserTransitionLayoutAttributes : NSObject <NSCopying>
{
    double _cornerRadius;
    NSIndexPath *_indexPath;
    struct CGRect _frame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

