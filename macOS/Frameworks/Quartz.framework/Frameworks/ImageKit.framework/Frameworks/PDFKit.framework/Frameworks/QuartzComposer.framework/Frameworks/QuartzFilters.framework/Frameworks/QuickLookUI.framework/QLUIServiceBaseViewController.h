//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ViewBridge/NSServiceViewController.h>

#import <QuickLookUI/NSGestureRecognizerDelegate-Protocol.h>
#import <QuickLookUI/QLPreviewDragDelegate-Protocol.h>

@class NSClickGestureRecognizer, NSPanGestureRecognizer, NSString, QLPreviewDragController;
@protocol QLUIServiceBaseHostViewControllerProtocol;

@interface QLUIServiceBaseViewController : NSServiceViewController <NSGestureRecognizerDelegate, QLPreviewDragDelegate>
{
    BOOL _dragging;
    int _mode;
    NSPanGestureRecognizer *_dragRecognizer;
    NSClickGestureRecognizer *_doubleClickRecognizer;
    QLPreviewDragController *_dragController;
}

+ (unsigned int)declinedEventMask;
- (void).cxx_destruct;
@property(getter=isDragging) BOOL dragging; // @synthesize dragging=_dragging;
@property(retain) QLPreviewDragController *dragController; // @synthesize dragController=_dragController;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(retain) NSClickGestureRecognizer *doubleClickRecognizer; // @synthesize doubleClickRecognizer=_doubleClickRecognizer;
@property(retain) NSPanGestureRecognizer *dragRecognizer; // @synthesize dragRecognizer=_dragRecognizer;
- (id)beginDraggingSessionWithItems:(id)arg1 event:(id)arg2 source:(id)arg3;
- (struct CGRect)sourceFrame;
- (void)getImageRepresentationWithFrame:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)borderFrame;
- (id)pasteboardWriter;
- (id)draggedURL;
- (BOOL)useLegacyDragging;
- (id)draggingSourceView;
- (void)receivedDragGesture:(id)arg1;
- (void)doubleClickOnPreviewContent;
- (void)receivedDoubleClickGesture:(id)arg1;
- (void)updateFullScreenFromMagnification:(double)arg1;
- (BOOL)windowSupportsRemoteViews;
@property(readonly) id <QLUIServiceBaseHostViewControllerProtocol> hostViewController;
- (void)loadView;
- (id)exportedInterface;
- (id)remoteViewControllerInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

