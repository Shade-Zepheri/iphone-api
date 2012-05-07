/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UI9PartImageView.h"

@class SMSTextEntryView, UIColor, UIThreePartButton;

@interface mSMSMessageEntryView : UI9PartImageView
{
    SMSTextEntryView *_textField;
    UI9PartImageView *_balloonBGView;
    UIThreePartButton *_sendButton;
    struct CGRect _finalFrame;
    BOOL _isAnimating;
    UIColor *_disabledColor;
}

+ (float)defaultHeight;
+ (float)maximumHeight;
+ (float)verticalPaddingForTextView;
- (id)initWithDefaultSize;
- (void)dealloc;
- (void)send:(id)fp8;
- (id)textField;
- (void)enableSendButton;
- (id)_disabledColor;
- (void)disableSendButton;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (struct CGRect)balloonFrame;
- (void)setIsAnimating:(BOOL)fp8;
- (void)setFinalFrame:(struct CGRect)fp8;
- (struct CGRect)finalFrame;

@end
