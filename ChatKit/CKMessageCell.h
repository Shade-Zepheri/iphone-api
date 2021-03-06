/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIKit/UITableViewCell.h"

@class CKBalloonView, UIButton;

@interface CKMessageCell : UITableViewCell
{
    CKBalloonView *_balloonView;
    UIButton *_failedButton;
    float _topPadding;
    float _bottomPadding;
    id _replacementMessageBubbleData;
}

+ (id)_exclamationGlyphImage;
+ (id)_failImage;
+ (id)_failPressedImage;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setHighlighted:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setSelected:(BOOL)fp8 animated:(BOOL)fp12;
- (id)_multiselectBackgroundColor;
- (void)addBalloonView:(id)fp8;
- (void)setFailed:(BOOL)fp8;
- (void)setTopPadding:(float)fp8 bottomPadding:(float)fp12;
- (void)_failPressed:(id)fp8;
- (void)didTapBalloon:(id)fp8;
- (void)_resetBalloonFrame;
- (void)prepareForReuse;
- (id)replacementMessageBubbleData;
- (void)setReplacementMessageBubbleData:(id)fp8;
- (id)balloonView;

@end

