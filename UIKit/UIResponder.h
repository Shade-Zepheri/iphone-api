/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@interface UIResponder : NSObject
{
}

- (void)mouseDown:(struct __GSEvent *)fp8;
- (void)mouseUp:(struct __GSEvent *)fp8;
- (void)mouseDragged:(struct __GSEvent *)fp8;
- (void)mouseEntered:(struct __GSEvent *)fp8;
- (void)mouseExited:(struct __GSEvent *)fp8;
- (void)mouseMoved:(struct __GSEvent *)fp8;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesCancelled:(id)fp8 withEvent:(id)fp12;
- (void)scrollWheel:(struct __GSEvent *)fp8;
- (void)keyDown:(struct __GSEvent *)fp8;
- (void)keyUp:(struct __GSEvent *)fp8;
- (void)gestureStarted:(struct __GSEvent *)fp8;
- (void)gestureEnded:(struct __GSEvent *)fp8;
- (void)gestureChanged:(struct __GSEvent *)fp8;
- (id)nextResponder;
- (BOOL)_containedInAbsoluteResponderChain;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)isFirstResponder;
- (id)firstResponder;

@end

