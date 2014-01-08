/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class UIPlacardButton;

@interface CKTranscriptHeaderView : UIView
{
    id _delegate;
    UIPlacardButton *_firstButton;
    UIPlacardButton *_secondButton;
    UIPlacardButton *_loadMoreButton;
}

+ (float)defaultHeight;
- (id)initWithFrame:(struct CGRect)fp8 withFirstTitle:(id)fp24 withSecondTitle:(id)fp28 displayLoadPrevious:(BOOL)fp32;
- (void)dealloc;
- (void)setButtonsEnabled:(BOOL)fp8;
- (void)setDelegate:(id)fp8;
- (void)_buttonClicked:(id)fp8;
- (void)_loadMore;

@end

