//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDInsertionContext.h>

@interface TSDNonInteractiveInsertionContext : TSDInsertionContext
{
}

- (BOOL)isInteractive;
- (struct CGPoint)preferredCenter;
- (BOOL)insertWillBeDiscarded;
- (BOOL)fromDragToInsertController;
- (BOOL)insertFromDrag;
- (BOOL)insertFloating;
- (BOOL)shouldEndEditing;
- (BOOL)isPreferredCenterRequired;
- (BOOL)hasPreferredCenter;

@end

