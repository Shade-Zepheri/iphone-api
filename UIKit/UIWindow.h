/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIResponder;

@interface UIWindow : UIView
{
    id _delegate;
    void *_window;
    float _windowLevel;
    id _layerContext;
    UIView *_lastMouseDownView;
    UIView *_lastMouseEnteredView;
    UIResponder *_firstResponder;
    id _fingerInfo;
    int _viewOrientation;
    UIView *_exclusiveTouchView;
    struct {
        unsigned int delegateWillRotate:1;
        unsigned int delegateDidRotate:1;
        unsigned int delegateWillAnimateFirstHalf:1;
        unsigned int delegateDidAnimationFirstHalf:1;
        unsigned int delegateWillAnimateSecondHalf:1;
        unsigned int autorotatesToPortrait:1;
        unsigned int autorotatesToPortraitUpsideDown:1;
        unsigned int autorotatesToLandscapeLeft:1;
        unsigned int autorotatesToLandscapeRight:1;
        unsigned int dontBecomeKeyOnOrderFront:1;
        unsigned int output:1;
        unsigned int inGesture:1;
        unsigned int trackingStatusBar:1;
        unsigned int resetLevelOnSuspend:1;
        unsigned int cancelScroller:1;
        unsigned int bitsPerComponent:4;
        unsigned int autorotates:1;
        unsigned int isRotating:1;
        unsigned int orderKeyboardInAfterRotating:1;
    } _windowFlags;
}

+ (struct CGRect)constrainFrameToScreen:(struct CGRect)fp8;
+ (id)keyWindow;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)initWithFrame:(struct CGRect)fp8 output:(int)fp24;
- (id)initWithFrame:(struct CGRect)fp8 output:(int)fp24 bitsPerComponent:(int)fp28;
- (id)initWithContentRect:(struct CGRect)fp8;
- (void)dealloc;
- (void)setContentView:(id)fp8;
- (BOOL)shouldRespondToStatusBarHeightChange;
- (id)representation;
- (void)writeSnapshotsToDir:(id)fp8;
- (BOOL)_canExistBeyondSuspension;
- (void)makeKeyAndOrderFront:(id)fp8;
- (void)orderFront:(id)fp8;
- (void)_orderFrontWithoutMakingKey;
- (void)orderOut:(id)fp8;
- (void)setHidden:(BOOL)fp8;
- (void)makeKey:(id)fp8;
- (struct CGPoint)warpPoint:(struct CGPoint)fp8;
- (BOOL)_pointInStatusBar:(struct CGPoint)fp8;
- (void)_handleMouseDown:(struct __GSEvent *)fp8;
- (void)_handleMouseDragged:(struct __GSEvent *)fp8;
- (void)_handleMouseUp:(struct __GSEvent *)fp8;
- (void)_handleMouseEntered:(struct __GSEvent *)fp8;
- (void)_handleMouseMoved:(struct __GSEvent *)fp8;
- (void)_handleMouseExited:(struct __GSEvent *)fp8;
- (void)_statusBarMouseDown:(struct __GSEvent *)fp8;
- (void)_statusBarMouseDragged:(struct __GSEvent *)fp8;
- (void)_statusBarMouseUp:(struct __GSEvent *)fp8;
- (void)sendEvent:(id)fp8;
- (void)sendGSEvent:(struct __GSEvent *)fp8;
- (struct CGPoint)convertPoint:(struct CGPoint)fp8 toWindow:(id)fp16;
- (struct CGPoint)convertPoint:(struct CGPoint)fp8 fromWindow:(id)fp16;
- (struct CGRect)convertRect:(struct CGRect)fp8 toWindow:(id)fp24;
- (struct CGRect)convertRect:(struct CGRect)fp8 fromWindow:(id)fp24;
- (void)_setExclusiveTouchView:(id)fp8;
- (id)_exclusiveTouchView;
- (void)_beginModalSession;
- (void)_endModalSession;
- (id)nextResponder;
- (BOOL)_containedInAbsoluteResponderChain;
- (struct CGPoint)convertWindowToDevice:(struct CGPoint)fp8;
- (struct CGPoint)convertDeviceToWindow:(struct CGPoint)fp8;
- (void)setLevel:(float)fp8;
- (float)level;
- (void)setBecomeKeyOnOrderFront:(BOOL)fp8;
- (void)_slideHeaderView:(id)fp8 andFooterView:(id)fp12 offScreen:(BOOL)fp16 forInterfaceOrientation:(int)fp20;
- (void)_positionHeaderView:(id)fp8 andFooterView:(id)fp12 outsideContentViewForInterfaceOrientation:(int)fp16;
- (void)_handleDeviceOrientationChange:(id)fp8;
- (void)_finishedFullRotation:(id)fp8 finished:(id)fp12 context:(void *)fp16;
- (void)_finishedHalfRotation:(id)fp8 finished:(id)fp12 context:(void *)fp16;
- (void)_setRotatableViewOrientation:(int)fp8 duration:(double)fp12;
- (void)_forceUpdateInterfaceOrientationWithDuration:(double)fp8;
- (void)forceUpdateInterfaceOrientation;
- (void)setAutorotates:(BOOL)fp8;
- (void)setAutorotates:(BOOL)fp8 forceUpdateInterfaceOrientation:(BOOL)fp12;
- (BOOL)autorotates;
- (BOOL)isRotating;
- (int)interfaceOrientation;
- (void)synchronizeDrawingWithID:(int)fp8;
- (void)handleStatusBarChangeFromHeight:(float)fp8 toHeight:(float)fp12;
- (void)setFrame:(struct CGRect)fp8;
- (void)setTransform:(struct CGAffineTransform)fp8;
- (int)windowOutput;
- (int)output;
- (int)bitsPerComponent;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setWindowLevel:(float)fp8;
- (float)windowLevel;
- (BOOL)isKeyWindow;
- (void)makeKeyWindow;
- (void)becomeKeyWindow;
- (void)resignKeyWindow;
- (void)makeKeyAndVisible;
- (id)contentView;
- (void)_registerChargedView:(id)fp8;
- (void)_unregisterChargedView:(id)fp8;
- (void)_registerSwipeView:(id)fp8;
- (void)_unregisterSwipeView:(id)fp8;
- (void)_registerScrollToTopView:(id)fp8;
- (void)_unregisterScrollToTopView:(id)fp8;
- (void)_setFirstResponder:(id)fp8;
- (id)firstResponder;
- (id)_firstResponder;
- (BOOL)_becomeFirstResponderWhenPossible;
- (void)_setMouseDownView:(id)fp8 withEvent:(struct __GSEvent *)fp12;
- (void)_setMouseEnteredView:(id)fp8;
- (BOOL)_clearMouseView;
- (void)_noteStatusBarHeightChanged:(float)fp8 oldHeight:(float)fp12 fence:(int)fp16;
- (void)_setNeedsResetLevel:(BOOL)fp8;
- (BOOL)_needsResetLevel;
- (void)_resetLevel;
- (void *)createCoreSurfaceWithFrame:(struct CGRect)fp8;
- (void *)createCoreSurface;
- (struct CGImage *)_createCGImageRefRepresentationInFrame:(struct CGRect)fp8;
- (void)_setCancelScroller:(BOOL)fp8;
- (BOOL)shouldExcludeFromSnapshot;
- (BOOL)acceptsGlobalPoint:(struct CGPoint)fp8;

@end

