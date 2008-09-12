/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSMutableArray, UILabel, UIToolbar, UIWindow;

@interface UIActionSheet : UIView
{
    id /*XXX:<UIActionSheetDelegate>*/ _delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_bodyTextLabel;
    UILabel *_taglineTextLabel;
    float _startY;
    id _context;
    int _cancelButton;
    int _defaultButton;
    int _firstOtherButton;
    UIToolbar *_toolbar;
    UIWindow *_dimWindow;
    int _suspendTag;
    int _dismissButtonIndex;
    float _bodyTextHeight;
    NSMutableArray *_buttons;
    NSMutableArray *_textFields;
    UIView *_keyboard;
    UIView *_table;
    UIView *_dimView;
    CDAnonymousStruct7 _modalViewFlags;
    int _actionSheetStyle;
}

- (id)initWithTitle:(id)fp8 message:(id)fp12 delegate:(id)fp16 defaultButton:(id)fp20 cancelButton:(id)fp24 otherButtons:(id)fp28;
- (void)dealloc;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)setMessage:(id)fp8;
- (id)message;
- (int)addButtonWithTitle:(id)fp8;
- (id)buttonTitleAtIndex:(int)fp8;
- (int)numberOfButtons;
- (BOOL)isVisible;
- (void)setDefaultButtonIndex:(int)fp8;
- (int)defaultButtonIndex;
- (void)setCancelButtonIndex:(int)fp8;
- (int)cancelButtonIndex;
- (void)_setFirstOtherButtonIndex:(int)fp8;
- (int)firstOtherButtonIndex;
- (void)dismissWithClickedButtonIndex:(int)fp8 animated:(BOOL)fp12;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)initWithTitle:(id)fp8 delegate:(id)fp12 cancelButtonTitle:(id)fp16 destructiveButtonTitle:(id)fp20 otherButtonTitles:(id)fp24;
- (void)setActionSheetStyle:(int)fp8;
- (int)actionSheetStyle;
- (int)destructiveButtonIndex;
- (void)setDestructiveButtonIndex:(int)fp8;
- (void)showInView:(id)fp8;
- (void)showFromToolbar:(id)fp8;
- (void)showFromTabBar:(id)fp8;

@end

