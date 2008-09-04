/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class _UITableCellTransientData;

@interface UITableCell : UIView
{
    _UITableCellTransientData *_transientData;
    float _rightMargin;
    struct {
        unsigned int dontShowSelection:1;
        unsigned int showDisclosure:1;
        unsigned int showTopSeparator:1;
        unsigned int separatorStyle:3;
        unsigned int selectionStyle:3;
        unsigned int hideDisclosure:1;
        unsigned int isBeingDeleted:1;
        unsigned int disclosureClickable:1;
        unsigned int selectionFadeFraction:11;
        unsigned int disclosureStyle:1;
        unsigned int showingRemoveControl:1;
        unsigned int alignment:3;
        unsigned int showDisclosureWhenReordering:1;
        unsigned int fadeDisclosure:1;
        unsigned int reserved:2;
    } _tableCellFlags;
    UIView *_disclosureView;
}

- (id)disclosureImage;
- (id)disclosurePressedImage;
- (void)dealloc;
- (id)removeControl;
- (void)setSelected:(BOOL)fp8 withFade:(BOOL)fp12;
- (void)updateHighlightColors;
- (BOOL)isAtLeastHalfSelected;
- (float)selectionPercent;
- (void)_deselectWithFlashCount:(int)fp8 duration:(double)fp12;
- (void)setSelected:(BOOL)fp8;
- (BOOL)isSelected;
- (void)setShowSelection:(BOOL)fp8;
- (void)setShowSelectionNoRedisplay:(BOOL)fp8;
- (void)setSeparatorStyle:(int)fp8;
- (void)setShowDisclosure:(BOOL)fp8;
- (void)setSelectionStyle:(int)fp8;
- (void)setDisclosureStyle:(int)fp8;
- (void)setDisclosureStyleNoUpdate:(int)fp8;
- (int)disclosureStyle;
- (int)separatorStyle;
- (void)setSeparatorStyleOnly:(int)fp8;
- (BOOL)showSelection;
- (BOOL)showDisclosure;
- (void)setAlpha:(float)fp8;
- (id)hitTest:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (BOOL)_isReordering;
- (id)_grabberView;
- (void)drawRect:(struct CGRect)fp8;
- (void)_releaseGrabber;
- (void)_finishedFadingGrabber:(id)fp8 finished:(BOOL)fp12;
- (float)disclosureRightMargin;
- (BOOL)isReorderingEnabled;
- (void)setShowDisclosureWhenReordering:(BOOL)fp8;
- (BOOL)showDisclosureWhenReordering;
- (void)setEnableReordering:(BOOL)fp8 animated:(BOOL)fp12;
- (void)_grabberBeganReorder:(id)fp8;
- (void)_grabberDragged:(id)fp8 yDelta:(float)fp12;
- (void)_grabberReleased:(id)fp8;
- (void)drawBackgroundInRect:(struct CGRect)fp8 withFade:(float)fp24;
- (void)drawSeparatorInRect:(struct CGRect)fp8;
- (void)drawContentInRect:(struct CGRect)fp8 selected:(BOOL)fp24;
- (void)_releaseRemoveControl;
- (void)removeFromSuperview;
- (void)setDisclosureClickable:(BOOL)fp8;
- (id)createRemoveControl;
- (id)createInsertControl;
- (void)_setDisclosureHidden:(BOOL)fp8;
- (void)_setGrabberHidden:(BOOL)fp8;
- (void)removeControlWillShowRemoveConfirmation:(id)fp8;
- (void)removeControlWillHideRemoveConfirmation:(id)fp8;
- (void)_setRightMargin:(float)fp8;
- (id)disclosureView;
- (void)setDisclosureView:(id)fp8;
- (id)_disclosureView;
- (float)removeButtonAnimationDuration;
- (void)_layoutSubviewsAnimated:(BOOL)fp8;
- (void)_setShowIndentSpacer:(BOOL)fp8 animated:(BOOL)fp12;
- (BOOL)isRemoveControlVisible;
- (void)_showDeleteOrInsertion:(BOOL)fp8 withDisclosure:(BOOL)fp12 animated:(BOOL)fp16 isDelete:(BOOL)fp20 andRemoveConfirmation:(BOOL)fp24;
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)fp8;
- (void)_willBeDeleted;
- (BOOL)removeControl:(id)fp8 shouldRemoveTarget:(id)fp12;
- (void)removeControl:(id)fp8 willRemoveTarget:(id)fp12;
- (void)removeControl:(id)fp8 didRemoveTarget:(id)fp12;
- (void)insertControl:(id)fp8 shouldInsertWithTarget:(id)fp12;
- (id)_createDisclosureView;
- (struct CGRect)contentBounds;
- (void)setShowDisclosure:(BOOL)fp8 animated:(BOOL)fp12;
- (void)_setRemoveCharge:(float)fp8;
- (void)_setDrawsTopSeparator:(BOOL)fp8;
- (void)layoutSubviews;
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;
- (void)_setSelectionFadeFraction:(float)fp8;

@end

