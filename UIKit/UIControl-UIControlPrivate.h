/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@interface UIControl (UIControlPrivate)
- (BOOL)shouldTrack;
- (BOOL)touchDragged;
- (void)setRequiresDisplayOnTracking:(BOOL)fp8;
- (BOOL)requiresDisplayOnTracking;
- (BOOL)hasOneOrMoreTargets;
- (void)addTarget:(id)fp8 action:(SEL)fp12 forEvents:(int)fp16;
- (void)removeTarget:(id)fp8 forEvents:(int)fp12;
- (void)setTracking:(BOOL)fp8;
@end

