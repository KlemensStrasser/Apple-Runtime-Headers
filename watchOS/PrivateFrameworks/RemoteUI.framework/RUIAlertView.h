//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

@class NSString, RUIObjectModel, UIAlertController;
@protocol RUIAlertViewDelegate;

@interface RUIAlertView : RUIElement
{
    UIAlertController *_alertController;
    RUIObjectModel<RUIAlertViewDelegate> *_objectModel;
    NSString *_title;
    NSString *_message;
    int _buttonIndex;
    CDUnknownBlockType _completion;
}

+ (void)_enableTestMode;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) int buttonIndex; // @synthesize buttonIndex=_buttonIndex;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak RUIObjectModel<RUIAlertViewDelegate> *objectModel; // @synthesize objectModel=_objectModel;
- (void)runAlertInController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)alertController;
- (void)addButtonWithTitle:(id)arg1 URL:(id)arg2 style:(int)arg3 attributes:(id)arg4;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;

@end

