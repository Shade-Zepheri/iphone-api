/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSString, UIRemoveControlMinusButton;

@interface UIRemoveControl : UIView
{
    UIView *_target;
    id _delegate;
    UIView *_removeConfirmationButton;
    UIRemoveControlMinusButton *_minusButton;
    NSString *_label;
    struct {
        unsigned int removeButtonVisible:1;
        unsigned int removeConfirmationVisible:1;
        unsigned int removedFromTargetWhenHidden:1;
        unsigned int disableToggleRotate:1;
        unsigned int tableCellTarget:1;
        unsigned int alwaysHideRemoveButton:1;
        unsigned int showAsPlus:1;
        unsigned int reserved:25;
    } _removeControlFlags;
}

+ (float)removeButtonWidth;
+ (BOOL)removeConfirmationsVisibleInView:(id)fp8;
+ (void)hideAllRemoveConfirmationsInView:(id)fp8;
- (id)initWithTarget:(id)fp8;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)setTarget:(id)fp8;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setRemovedFromTargetWhenHidden:(BOOL)fp8;
- (void)setAlwaysHideRemoveButton:(BOOL)fp8;
- (BOOL)removedFromTargetWhenHidden;
- (void)_setInterceptMouseEvent:(BOOL)fp8;
- (void)minusButtonDidHide:(id)fp8;
- (void)_minusButtonFadeAnimationStopped;
- (struct CGRect)defaultRemoveButtonStartingFrame;
- (struct CGRect)defaultRemoveButtonEndingFrame;
- (struct CGRect)removeButtonStartingFrame;
- (struct CGRect)removeButtonEndingFrame;
- (float)removeButtonAnimationDuration;
- (void)showRemoveButton:(BOOL)fp8 animated:(BOOL)fp12;
- (BOOL)isRemoveButtonVisible;
- (void)_confirmationAnimationDidEnd;
- (struct CGRect)targetContentBounds;
- (void)_setRemoveConfirmationShowing:(BOOL)fp8 animated:(BOOL)fp12;
- (BOOL)isRemoveConfirmationVisible;
- (void)setRemoveConfirmationVisible:(BOOL)fp8;
- (void)setRemoveConfirmationVisible:(BOOL)fp8 animated:(BOOL)fp12;
- (id)removeConfirmationView;
- (id)_interceptMouseEvent:(struct __GSEvent *)fp8;
- (id)_interceptEvent:(id)fp8;
- (void)setAlpha:(float)fp8;
- (void)hideControlsUsingRemoveAnimation;
- (void)setLabel:(id)fp8;
- (void)setRemoveConfirmationLabel:(id)fp8;
- (id)removeConfirmationButton;
- (id)_scriptingInfo;
- (float)_verticalOffsetFromTarget;
- (BOOL)_isInsertControl;
- (void)_setInsertControl:(BOOL)fp8;
- (void)addConfirmationButtonSubview:(id)fp8 withWidth:(float)fp12 target:(id)fp16;
- (void)_hideRemoveConfirmation;
- (void)_showDeleteConfirmation:(id)fp8;
- (void)_doInsert:(id)fp8;
- (void)_doRemove:(id)fp8;
- (void)_shouldRemoveTarget;
- (void)animator:(id)fp8 stopAnimation:(id)fp12;
- (void)_hideRemoveAnimationDone;

@end

