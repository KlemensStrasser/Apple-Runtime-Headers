//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebMenuTarget : NSObject
{
    struct ContextMenuController *_menuController;
}

+ (id)sharedMenuTarget;
- (void)forwardContextMenuAction:(id)arg1;
- (void)setMenuController:(struct ContextMenuController *)arg1;
- (struct ContextMenuController *)menuController;

@end

