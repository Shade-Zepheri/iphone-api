/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class MPItem, MPPortraitControlsOverlay, MPTextView;

@interface MPPortraitInfoOverlay : UIView
{
    id _delegate;
    MPItem *_item;
    unsigned int _visibleParts;
    MPPortraitControlsOverlay *_controlsView;
    MPTextView *_displayableTextView;
    unsigned int _transitioning:1;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didTransition;
- (BOOL)hide;
- (void)layoutSubviews;
- (void)startTicking;
- (void)stopTicking;
- (void)willTransition;
- (void)setAlpha:(float)fp8;
- (void)setItem:(id)fp8;
- (void)setVisibleParts:(unsigned int)fp8;
- (void)textView:(id)fp8 handleTapWithCount:(int)fp12 event:(struct __GSEvent *)fp16;
- (void)_displayableTextRemovalAnimationDidStop;
- (void)_hideSnapshotAnimationFinished;
- (void)_displayableTextAvailable:(id)fp8;
- (void)_playbackStateChanged:(id)fp8;
- (id)_controlsView;
- (id)_displayableTextView;
- (void)_hideControlsAndTextView;
- (void)_reloadDisplayableTextViewForItem:(id)fp8 animate:(BOOL)fp12;
- (void)_removeDisplayableTextWithAnimation:(BOOL)fp8;
- (void)_reloadViews;
- (void)_updateDisplayableTextViewForItem:(id)fp8 animate:(BOOL)fp12;
- (unsigned int)visibleParts;
- (id)item;
- (id)delegate;
- (void)setDelegate:(id)fp8;

@end

