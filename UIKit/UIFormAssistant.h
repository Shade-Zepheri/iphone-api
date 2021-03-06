/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>
#import <UIKit/UIFormPeripheral-Protocol.h>

@class NSMutableDictionary, UIButton, UIImageView, UIInformalDelegate, UITransitionView, UIView/*<UIFormPeripheral>*/;

@interface UIFormAssistant : UIView
{
    UIButton *_done;
    UIButton *_next;
    UIButton *_previous;
    UIImageView *_navigation;
    UITransitionView *_transition;
    BOOL _isTransitioning;
    id <UIFormControl> _control;
    id <UIFormControl> _nextControl;
    UIView<UIFormPeripheral> *_peripheral;
    UIView<UIFormPeripheral> *_nextPeripheral;
    NSMutableDictionary *_primaryCache;
    NSMutableDictionary *_secondaryCache;
    UIInformalDelegate *_delegate;
    int _orientation;
}

+ (id)_navigationImage;
+ (id)sharedFormAssistant;
+ (double)defaultTransitionDuration;
- (id)_formPeripheralForFormControl:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)done:(id)fp8;
- (void)advanceToNextFormControl:(id)fp8;
- (void)recedeToPreviousFormControl:(id)fp8;
- (void)synchronizeOrientationWithAnimation:(BOOL)fp8;
- (void)layoutSubviews;
- (void)completeFormControlTransition;
- (void)animationWillStart:(id)fp8;
- (void)animationDidStop:(id)fp8;
- (void)transitionViewDidComplete:(id)fp8;
- (void)setFormControl:(id)fp8;
- (id)formControl;
- (void)setSessionDelegate:(id)fp8;
- (id)sessionDelegate;
- (BOOL)isTransitioning;
- (BOOL)isTransitioningToNextPeripheral;
- (struct CGRect)peripheralFrame;
- (struct CGRect)remainingDeviceRect;

@end

