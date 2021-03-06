//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebDriver/WDHTTPRouteHandler-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSNumberFormatter, NSString, WDHTTPDriverInterface;

@interface WDW3CRouteHandler : NSObject <WDHTTPRouteHandler>
{
    WDHTTPDriverInterface *_driver;
    NSMutableDictionary *_sessionQueueStates;
    NSDictionary *_inputSourceStates;
    BOOL _didAddHandlersForUnsupportedMethods;
    NSMutableDictionary *_supportedMethodsByPath;
    NSNumberFormatter *_numberFormatter;
}

- (void).cxx_destruct;
- (void)_handleAttachDebugger:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleSetPermissions:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleGetPermissions:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleTakeElementScreenshot:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleTakeScreenshot:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleSendAlertText:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleGetAlertText:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleAcceptAlert:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleDismissAlert:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleReleaseActions:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handlePerformActions:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleDeleteAllCookies:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleDeleteCookie:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleAddCookie:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleGetNamedCookie:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleGetAllCookies:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleExecuteAsyncScript:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleExecuteScript:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleGetPageSource:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleElementSendKeys:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_ensureElementIsKeyboardInteractable:(id)arg1 inSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_keyInteractionsFromSequence:(id)arg1 inSession:(id)arg2;
- (void)_selectLocalFiles:(id)arg1 forFileInputElement:(id)arg2 allowsMultipleSelection:(BOOL)arg3 inSession:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_handleElementClear:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleElementClick:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_fetchAttributesOfElement:(id)arg1 inSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_ensureElementIsScrolledIntoViewAndDisplayed:(id)arg1 inSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleIsElementEnabled:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleGetElementRect:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleGetElementTagName:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleGetElementText:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleGetElementCSSValue:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleGetElementProperty:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleGetElementAttribute:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleIsElementSelected:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleGetActiveElement:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleFindElementsFromElement:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleFindElementFromElement:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleFindElements:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleFindElement:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (BOOL)_parseSearchStrategy:(long long *)arg1 andQuery:(id *)arg2 fromPayloadOfRequest:(id)arg3 orSendResponse:(id)arg4 relatedSession:(id)arg5;
- (void)_handleFullscreenWindow:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleMinimizeWindow:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleMaximizeWindow:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleSetWindowRect:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleGetWindowRect:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleSwitchToParentFrame:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleSwitchToFrame:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_switchToParentBrowsingContextInSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleNewWindow:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleGetWindowHandles:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleSwitchToWindow:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleCloseWindow:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_fetchToplevelBrowsingContextsInSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleGetWindowHandle:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleGetTitle:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleRefresh:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleForward:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleBack:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleGetCurrentURL:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleNavigateTo:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleSetTimeouts:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleGetTimeouts:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleStatus:(id)arg1 response:(id)arg2;
- (void)_handleDeleteSession:(id)arg1 response:(id)arg2 relatedSession:(id)arg3;
- (void)_handleNewSession:(id)arg1 response:(id)arg2;
- (void)_createSessionFromFirstMatchAtIndex:(unsigned long long)arg1 firstMatchList:(id)arg2 accumulatedErrors:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_evaluateInternalAsyncJavaScriptFunction:(id)arg1 withArguments:(id)arg2 sourceURL:(id)arg3 inBrowsingContext:(id)arg4 relatedSession:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_evaluateInternalJavaScriptFunction:(id)arg1 withArguments:(id)arg2 sourceURL:(id)arg3 inBrowsingContext:(id)arg4 relatedSession:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_handleUserPromptsInSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_extractInteractionSteps:(id *)arg1 andInputSources:(id *)arg2 fromPayload:(id)arg3 inSession:(id)arg4 error:(id *)arg5;
- (BOOL)_parseAction:(id)arg1 intoInputSource:(id *)arg2 withStates:(id *)arg3 inSession:(id)arg4 error:(id *)arg5;
- (BOOL)_parseMouseButton:(long long *)arg1 fromNumber:(id)arg2;
- (BOOL)_parseCharKey:(id *)arg1 andVirtualKey:(id *)arg2 fromString:(id)arg3;
- (BOOL)_extractFunctionBody:(id *)arg1 andArguments:(id *)arg2 fromRequest:(id)arg3 orSendResponse:(id)arg4 relatedSession:(id)arg5;
- (id)_translateAutomationPayload:(id)arg1 toClientPayloadInSession:(id)arg2;
- (id)_translateClientPayload:(id)arg1 toAutomationPayloadInSession:(id)arg2;
- (void)_closeSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_translateCapabilitiesIntoSessionOptions:(id)arg1 error:(id *)arg2;
- (BOOL)_translateCapability:(id)arg1 withValue:(id)arg2 intoOptions:(id)arg3;
- (id)_extractCapabilitiesFromSession:(id)arg1;
- (id)_matchCapabilities:(id)arg1 error:(id *)arg2;
- (id)_mergeCapabilities:(id)arg1 withCapabilities:(id)arg2 error:(id *)arg3;
- (BOOL)_validateCapabilities:(id)arg1 error:(id *)arg2;
- (id)_processCapabilities:(id)arg1 error:(id *)arg2;
- (void)_sendResponse:(id)arg1 withError:(id)arg2 relatedSession:(id)arg3;
- (void)_sendResponse:(id)arg1 withPayload:(id)arg2 relatedSession:(id)arg3;
- (void)_sendResponse:(id)arg1 withPayload:(id)arg2 statusCode:(long long)arg3 relatedSession:(id)arg4;
- (BOOL)_parseElement:(id *)arg1 fromURLParameter:(id)arg2 ofRequest:(id)arg3 orSendResponse:(id)arg4 relatedSession:(id)arg5;
- (BOOL)_findSession:(id *)arg1 fromRequest:(id)arg2 orSendResponse:(id)arg3;
- (BOOL)_ensureSessionErrorIsEmpty:(id)arg1 forRequest:(id)arg2 orSendResponse:(id)arg3 relatedSession:(id)arg4;
- (BOOL)_ensureHandlerErrorIsEmpty:(id)arg1 orSendResponse:(id)arg2 relatedSession:(id)arg3;
- (BOOL)_ensurePayload:(id)arg1 hasOptionalParameter:(id)arg2 ofType:(long long)arg3;
- (BOOL)_ensurePayload:(id)arg1 fromRequest:(id)arg2 hasOptionalParameter:(id)arg3 allowedTypes:(id)arg4 orSendResponse:(id)arg5 withErrorCode:(long long)arg6 relatedSession:(id)arg7;
- (BOOL)_ensurePayload:(id)arg1 fromRequest:(id)arg2 hasOptionalParameter:(id)arg3 ofType:(long long)arg4 orSendResponse:(id)arg5 withErrorCode:(long long)arg6 relatedSession:(id)arg7;
- (BOOL)_ensurePayload:(id)arg1 fromRequest:(id)arg2 hasRequiredParameter:(id)arg3 ofType:(long long)arg4 orSendResponse:(id)arg5 withErrorCode:(long long)arg6 relatedSession:(id)arg7;
- (BOOL)_ensureRequest:(id)arg1 hasURLParameter:(id)arg2 ofType:(long long)arg3 orSendResponse:(id)arg4 withErrorCode:(long long)arg5 relatedSession:(id)arg6;
- (BOOL)_parsePayload:(id *)arg1 fromRequest:(id)arg2 orSendResponse:(id)arg3 relatedSession:(id)arg4;
- (void)_maybeProcessEnqueuedRequestForSession:(id)arg1;
- (void)_addHandlerForSessionCommandWithMethod:(long long)arg1 path:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)_addHandlerForCommandWithMethod:(long long)arg1 path:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (void)_addHandlerForCommandWithMethod:(long long)arg1 path:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)_handleRequestForUnsupportedMethod:(id)arg1 response:(id)arg2;
- (void)_handleRequestForUnknownCommand:(id)arg1 response:(id)arg2;
- (void)_handleRequestForUnimplementedCommand:(id)arg1 response:(id)arg2;
- (void)_addUnimplementedCommandWithMethod:(long long)arg1 path:(id)arg2;
- (void)_addHandlersForUnknownCommands;
- (void)_addHandlersForUnsupportedMethods;
- (void)_addHandlerForUnsupportedMethod:(long long)arg1 withPath:(id)arg2;
- (void)_markSupportedCommandMethod:(long long)arg1 path:(id)arg2;
- (void)_finalizeRoutes;
@property(readonly, copy, nonatomic) NSString *version;
- (void)setupDefaultRoutes;
- (id)initWithDriver:(id)arg1;
- (id)_queueForSession:(id)arg1;

@end

