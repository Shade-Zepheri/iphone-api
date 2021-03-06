/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class UIView;

@interface UIViewTapInfo : NSObject
{
    id _delegate;
    UIView *_view;
    int _tapDownCount;
    int _fingerCount;
    float _multiTapDelay;
    float _rejectAsTapThrehold;
    float _viewTouchPauseThreshold;
    struct CGPoint _startPosition;
    double _startTime;
    struct {
        unsigned int shouldSendTouchPauseUp:1;
        unsigned int delegateViewHandleTapWithCountEvent:1;
        unsigned int delegateViewHandleTapWithCountEventFingerCount:1;
        unsigned int delegateViewHandleTouchPauseIsDown:1;
        unsigned int reserved:28;
    } _tapInfoFlags;
}

- (id)initWithDelegate:(id)fp8 view:(id)fp12;
- (void)releaseAndClearWeakRefs;
- (void)clearTapState;
- (void)setDelegate:(id)fp8;
- (void)_handleTapWithCount:(int)fp8 event:(struct __GSEvent *)fp12;
- (void)handleSingleTapEvent:(struct __GSEvent *)fp8;
- (void)handleDoubleTapEvent:(struct __GSEvent *)fp8;
- (void)scheduleSingleTapHandlerForEvent:(struct __GSEvent *)fp8;
- (void)_sendTouchPauseDownIfNecessary;
- (void)_sendTouchPauseUpIfNecessary;
- (void)mouseDown:(struct __GSEvent *)fp8;
- (BOOL)_eventLocationConsideredMovement:(struct __GSEvent *)fp8;
- (void)mouseDragged:(struct __GSEvent *)fp8;
- (void)mouseUp:(struct __GSEvent *)fp8;
- (BOOL)cancelMouseTracking;

@end

