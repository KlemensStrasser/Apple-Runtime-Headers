//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReaderOutput/SCROHandler.h>

#import <ScreenReaderOutput/SCROSBrailleDisplayManagerDelegate-Protocol.h>

@class NSString, SCROBrailleDisplayManager;

@interface SCROBrailleHandler : SCROHandler <SCROSBrailleDisplayManagerDelegate>
{
    SCROBrailleDisplayManager *_brailleDisplayManager;
    BOOL _wantsInputCallbacks;
    BOOL _wantsDidDisplayCallbacks;
    struct {
        char didDisplay;
        char keypress;
        char replaceTextRange;
        char keyWillMem;
        char keymem;
        char panLeft;
        char panRight;
        char showPreviousAnnouncement;
        char showNextAnnouncement;
        char configChanged;
        char playDisplayConnectionSound;
        char playBorderHitSound;
        char playCommandNotSupportedSound;
        char bluetoothDisplayLoadFailed;
        char tableLoadFailed;
        char displayModeChanged;
        char copyStringToClipboard;
        char startEditing;
        char insertUntranslatedText;
        char deleteUntranslatedText;
    } _callbacks;
}

- (void).cxx_destruct;
- (void)handlePlayCommandNotSupportedSound;
- (void)handlePlayBorderHitSound;
- (void)handleCopyStringToClipboard:(id)arg1;
- (void)handleDisplayModeChanged:(id)arg1;
- (void)handleBrailleTableFailedToLoad:(id)arg1;
- (void)handleFailedToLoadBluetoothDevice:(id)arg1;
- (void)configurationDidChange;
- (void)handleBrailleDriverDidLoad;
- (void)handleBrailleDriverDisconnected;
- (void)handleBrailleDidShowNextAnnouncement:(id)arg1;
- (void)handleBrailleDidShowPreviousAnnouncement:(id)arg1;
- (void)handleBrailleDidPanRight:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
- (void)handleBrailleDidPanLeft:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
- (void)handleBrailleDidDisplay:(id)arg1;
- (void)handleBrailleKeyMemorize:(id)arg1;
- (void)handleBrailleKeyWillMemorize:(id)arg1;
- (void)handleBrailleDeletedUntranslatedText:(id)arg1 speakLiterally:(BOOL)arg2;
- (void)handleBrailleInsertedUntranslatedText:(id)arg1 speakLiterally:(BOOL)arg2;
- (void)handleStartEditing;
- (void)handleBrailleReplaceTextRange:(struct _NSRange)arg1 withString:(id)arg2 cursor:(unsigned long long)arg3;
- (void)handleBrailleKeypress:(id)arg1;
- (int)handlePerformActionForKey:(int)arg1 trusted:(BOOL)arg2;
- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(BOOL)arg4;
- (int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(BOOL)arg3;
- (int)handleRegisterCallbackForKey:(int)arg1 trusted:(BOOL)arg2;
- (void)invalidate;
- (id)initWithBrailleDisplayManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

