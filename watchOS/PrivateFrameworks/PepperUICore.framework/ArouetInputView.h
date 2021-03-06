//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/ArouetIDMTLView.h>

@class ArouetLanguageSpec, ArouetRecognitionManager, CHDrawing, MTLRenderPassDescriptor, UIPointFIFO, UIQuadCurvePointFIFO;
@protocol ArouetInputDelegate, MTLBuffer, MTLTexture, PUICQuickboardViewControllerDelegate, UITextInput;

@interface ArouetInputView : ArouetIDMTLView
{
    double _startTime;
    _Bool _animationDone;
    MTLRenderPassDescriptor *_inputRenderPassDescriptor;
    MTLRenderPassDescriptor *_updateRenderPassDescriptor;
    // Error parsing type: , name: _mPDim
    // Error parsing type: , name: _mGridDim
    // Error parsing type: , name: _mGridDivisor
    _Bool _mIsSteppedGrid;
    id <MTLBuffer> _mPDisplayBuffer;
    id <MTLBuffer> _mPInputBuffer;
    id <MTLTexture> _renderedTexture;
    int _mNumInputTexels;
    int _mNumParticles;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _mTouches;
    // Error parsing type: {?="modelViewProjection"{?="columns"[4]}"pointSize""lineThreshold"f"lineGlowThreshold"f"lineMix"f"RFadeAmt"f"touch"[6]"move"f"moveCoordX"f"touchBegan"s"touchIsDown"s"RtoG"s"Gto0"s"denseGrid"s}, name: _inputUniforms
    // Error parsing type: {?="modelViewProjection"{?="columns"[4]}"activatedColor""addedPointSize"f"brightness"f}, name: _updateUniforms
    _Bool _isDrawing;
    _Bool _lastRecognitionCanBeSuperseded;
    _Bool _textFieldRespondsToShouldChange;
    _Bool _textViewRespondsToShouldChange;
    id <ArouetInputDelegate> _resultDelegate;
    ArouetLanguageSpec *_languageSpec;
    ArouetRecognitionManager *_recognitionManager;
    id <PUICQuickboardViewControllerDelegate> _delegate;
    CHDrawing *_drawing;
    id <UITextInput> _textInput;
    unsigned int _pendingRecognitionRequests;
    UIPointFIFO *_pointFIFO;
    UIQuadCurvePointFIFO *_interpolatingFIFO;
    double _lastStrokeTime;
    double _lastRecognitionTime;
    double _maxStrokeCoallescingInterstrokeDelay;
    double _maxStrokeCoallescingRecognitionDelay;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) UIQuadCurvePointFIFO *interpolatingFIFO; // @synthesize interpolatingFIFO=_interpolatingFIFO;
@property(retain, nonatomic) UIPointFIFO *pointFIFO; // @synthesize pointFIFO=_pointFIFO;
@property(nonatomic) unsigned int pendingRecognitionRequests; // @synthesize pendingRecognitionRequests=_pendingRecognitionRequests;
@property(nonatomic) _Bool textViewRespondsToShouldChange; // @synthesize textViewRespondsToShouldChange=_textViewRespondsToShouldChange;
@property(nonatomic) _Bool textFieldRespondsToShouldChange; // @synthesize textFieldRespondsToShouldChange=_textFieldRespondsToShouldChange;
@property(retain, nonatomic) id <UITextInput> textInput; // @synthesize textInput=_textInput;
@property(nonatomic) double maxStrokeCoallescingRecognitionDelay; // @synthesize maxStrokeCoallescingRecognitionDelay=_maxStrokeCoallescingRecognitionDelay;
@property(nonatomic) double maxStrokeCoallescingInterstrokeDelay; // @synthesize maxStrokeCoallescingInterstrokeDelay=_maxStrokeCoallescingInterstrokeDelay;
@property(nonatomic) _Bool lastRecognitionCanBeSuperseded; // @synthesize lastRecognitionCanBeSuperseded=_lastRecognitionCanBeSuperseded;
@property double lastRecognitionTime; // @synthesize lastRecognitionTime=_lastRecognitionTime;
@property(nonatomic) double lastStrokeTime; // @synthesize lastStrokeTime=_lastStrokeTime;
@property(nonatomic) _Bool isDrawing; // @synthesize isDrawing=_isDrawing;
@property(retain, nonatomic) CHDrawing *drawing; // @synthesize drawing=_drawing;
@property(nonatomic) __weak id <PUICQuickboardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ArouetRecognitionManager *recognitionManager; // @synthesize recognitionManager=_recognitionManager;
@property(retain, nonatomic) ArouetLanguageSpec *languageSpec; // @synthesize languageSpec=_languageSpec;
@property(nonatomic) __weak id <ArouetInputDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)clear;
- (void)addInkPoint:(struct CGPoint)arg1;
- (void)endPoint:(struct CGPoint)arg1;
- (void)addPoint:(struct CGPoint)arg1;
- (void)addStartingPoint:(struct CGPoint)arg1;
- (void)cancelLastRecognitionRequestIfAppropriate;
- (void)enqueuePostCommitRecognitionOperation:(CDUnknownBlockType)arg1;
- (void)recognizeDrawing;
- (void)_drawView;
- (void)updateInputWithEncoder:(id)arg1;
- (void)animateRecognition;
- (void)setupViewDrawingSupport;
- (void)setMetalDevice:(id)arg1 queue:(id)arg2 updatePipeline:(id)arg3 inputPipeline:(id)arg4;
- (_Bool)_isSteppedGridForGridRenderStyle:(int)arg1;
-     // Error parsing type: 12@0:4i8, name: _gridDiviserForGridRenderStyle:
-     // Error parsing type: ^{?=  f}16@0:4i8i12, name: _importParticleDataForDeviceVariant:gridRenderStyle:
- (id)_particleDataFileNameForDeviceVariant:(int)arg1 gridRenderStyle:(int)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 prewarmer:(id)arg2;

@end

