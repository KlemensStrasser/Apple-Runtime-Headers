//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKWidgetView.h>

#import <OpusKit/OKWidgetTextViewProxyExports-Protocol.h>

@interface OKWidgetTextViewProxy : OKWidgetView <OKWidgetTextViewProxyExports>
{
    struct UIEdgeInsets _textEdgeInsets;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (void)setSettingTextEdgeInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)settingTextEdgeInsets;
- (id)valueForUndefinedKey:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (id)layoutSettingsKeys;
- (struct UIEdgeInsets)textEdgeInsets;
- (struct CGRect)textViewFrame;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;

@end

