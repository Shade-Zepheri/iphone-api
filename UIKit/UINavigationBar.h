/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor;

@interface UINavigationBar : UIView <NSCoding>
{
    NSMutableArray *_itemStack;
    float _rightMargin;
    unsigned int _state;
    id _delegate;
    UIView *_titleView;
    UIView *_leftView;
    UIView *_rightView;
    UIView *_prompt;
    UIView *_accessoryView;
    UIColor *_tintColor;
    struct {
        unsigned int animate:1;
        unsigned int animationDisabledCount:10;
        unsigned int barStyle:3;
        unsigned int disableLayout:1;
        unsigned int backPressed:1;
        unsigned int animatePromptChange:1;
        unsigned int pendingHideBackButton:1;
        unsigned int removeAccessoryOnPop:1;
        unsigned int titleAutosizesToFit:1;
        unsigned int usingNewAPI:1;
        unsigned int minibar:1;
        unsigned int isLocked:1;
        unsigned int shouldUpdatePromptAfterTransition:1;
    } _navbarFlags;
}

+ (struct CGSize)defaultSizeForOrientation:(int)fp8;
+ (struct CGSize)defaultSizeWithPromptForOrientation:(int)fp8;
+ (struct CGSize)defaultSize;
+ (struct CGSize)defaultSizeWithPrompt;
+ (id)defaultPromptFont;
+ (void)setDefaultAnimationDuration:(double)fp8;
- (float)defaultButtonHeight;
- (struct CGSize)defaultSizeForOrientation:(int)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)initWithCoder:(id)fp8;
- (void)_populateArchivedSubviews:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (void)dealloc;
- (BOOL)isLocked;
- (void)setLocked:(BOOL)fp8;
- (id)_defaultTitleFont;
- (int)state;
- (void)drawRect:(struct CGRect)fp8;
- (void)setAccessoryView:(id)fp8;
- (void)setAccessoryView:(id)fp8 animate:(BOOL)fp12 removeOnPop:(BOOL)fp16;
- (void)pushNavigationItem:(id)fp8 animated:(BOOL)fp12;
- (void)pushNavigationItem:(id)fp8;
- (id)popNavigationItemAnimated:(BOOL)fp8;
- (void)popNavigationItem;
- (id)topItem;
- (id)backItem;
- (void)setItems:(id)fp8;
- (void)_setupTopNavItem:(id)fp8 oldTopNavItem:(id)fp12;
- (void)setNavigationItems:(id)fp8;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (id)items;
- (id)navigationItems;
- (id)navigationItemAtPoint:(struct CGPoint)fp8;
- (void)_navigationAnimationDidFinish:(id)fp8 finished:(id)fp12 context:(void *)fp16;
- (BOOL)_canHandleStatusBarMouseEvents:(struct __GSEvent *)fp8;
- (id)hitTest:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;
- (void)_handleMouseDownAtPoint:(struct CGPoint)fp8;
- (void)_handleMouseUpAtPoint:(struct CGPoint)fp8;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)mouseDown:(struct __GSEvent *)fp8;
- (void)mouseUp:(struct __GSEvent *)fp8;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)_updateNavigationBarItems;
- (void)setBarStyle:(int)fp8;
- (int)barStyle;
- (BOOL)isMinibar;
- (void)setTintColor:(id)fp8;
- (void)setRightMargin:(float)fp8;
- (void)setTitleAutoresizesToFit:(BOOL)fp8;
- (BOOL)titleAutoresizesToFit;
- (void)updateTitleView;
- (void)setTitleView:(id)fp8;
- (id)currentLeftView;
- (id)currentRightView;
- (BOOL)_hasBackButton;
- (id)currentBackButton;
- (void)updatePrompt;
- (void)setPrompt:(id)fp8;
- (id)prompt;
- (id)promptView;
- (struct CGRect)promptBounds;
- (void)disableAnimation;
- (void)enableAnimation;
- (BOOL)isAnimationEnabled;
- (unsigned int)animationDisabledCount;
- (void)drawBackgroundInRect:(struct CGRect)fp8 withStyle:(int)fp24;
- (void)drawBackButtonBackgroundInRect:(struct CGRect)fp8 withStyle:(int)fp24 pressed:(BOOL)fp28;
- (void)showButtonsWithLeftTitle:(id)fp8 rightTitle:(id)fp12;
- (void)showButtonsWithLeftTitle:(id)fp8 rightTitle:(id)fp12 leftBack:(BOOL)fp16;
- (void)showButtonsWithLeft:(id)fp8 right:(id)fp12 leftBack:(BOOL)fp16;
- (void)showLeftButton:(id)fp8 withStyle:(int)fp12 rightButton:(id)fp16 withStyle:(int)fp20;
- (void)_setLeftView:(id)fp8 rightView:(id)fp12;
- (void)_showLeftRightButtonsAnimationDidStop:(id)fp8 finished:(id)fp12 context:(void *)fp16;
- (void)setButton:(int)fp8 enabled:(BOOL)fp12;
- (id)createButtonWithContents:(id)fp8 width:(float)fp12 barStyle:(int)fp16 buttonStyle:(int)fp20 isRight:(BOOL)fp24;
- (void)hideButtons;
- (void)_hideButtonsAnimationDidStop:(id)fp8 finished:(id)fp12 context:(void *)fp16;
- (void)showBackButton:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setFrame:(struct CGRect)fp8;
- (struct CGRect)availableTitleArea;
- (id)tintColor;

@end

