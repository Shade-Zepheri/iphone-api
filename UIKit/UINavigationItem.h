/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSString, UIBarButtonItem, UINavigationBar, UIView;

@interface UINavigationItem : NSObject <NSCoding>
{
    NSString *_title;
    NSString *_backButtonTitle;
    UIBarButtonItem *_backBarButtonItem;
    NSString *_prompt;
    int _tag;
    id _context;
    UINavigationBar *_navigationBar;
    UIView *_defaultTitleView;
    UIView *_titleView;
    UIView *_backButtonView;
    UIBarButtonItem *_leftBarButtonItem;
    UIBarButtonItem *_rightBarButtonItem;
    UIView *_customLeftView;
    UIView *_customRightView;
    BOOL _hidesBackButton;
}

+ (id)defaultFont;
- (id)initWithTitle:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (void)dealloc;
- (id)navigationBar;
- (void)setNavigationBar:(id)fp8;
- (void)setTitle:(id)fp8;
- (void)setBackButtonTitle:(id)fp8;
- (void)setBackBarButtonItem:(id)fp8;
- (id)title;
- (id)backButtonTitle;
- (id)backBarButtonItem;
- (float)width;
- (void)setWidth:(float)fp8;
- (void)setFont:(id)fp8;
- (id)font;
- (void)setTag:(int)fp8;
- (int)tag;
- (void)setContext:(id)fp8;
- (id)context;
- (void)_removeTitleAndButtonViews;
- (id)existingBackButtonView;
- (id)backButtonView;
- (id)titleView;
- (void)setTitleView:(id)fp8;
- (id)prompt;
- (void)setPrompt:(id)fp8;
- (void)updateNavigationBarButtonsAnimated:(BOOL)fp8;
- (BOOL)hidesBackButton;
- (void)setHidesBackButton:(BOOL)fp8;
- (void)setHidesBackButton:(BOOL)fp8 animated:(BOOL)fp12;
- (id)leftBarButtonItem;
- (void)setLeftBarButtonItem:(id)fp8;
- (void)setLeftBarButtonItem:(id)fp8 animated:(BOOL)fp12;
- (id)rightBarButtonItem;
- (void)setRightBarButtonItem:(id)fp8;
- (void)setRightBarButtonItem:(id)fp8 animated:(BOOL)fp12;
- (id)customLeftView;
- (void)setCustomLeftView:(id)fp8;
- (void)setCustomLeftView:(id)fp8 animated:(BOOL)fp12;
- (id)customRightView;
- (void)setCustomRightView:(id)fp8;
- (void)setCustomRightView:(id)fp8 animated:(BOOL)fp12;
- (id)_titleView;
- (void)setCustomTitleView:(id)fp8;
- (id)customTitleView;
- (void)setCustomLeftItem:(id)fp8;
- (id)customLeftItem;
- (void)setCustomLeftItem:(id)fp8 animated:(BOOL)fp12;
- (void)setCustomRightItem:(id)fp8;
- (id)customRightItem;
- (void)setCustomRightItem:(id)fp8 animated:(BOOL)fp12;
- (void)willBecomeTopInNavigationBar:(id)fp8 navigationBarState:(int)fp12;
- (void)willResignTopInNavigationBar:(id)fp8 navigationBarState:(int)fp12;
- (void)didBecomeTopInNavigationBar:(id)fp8 navigationBarState:(int)fp12;
- (void)didResignTopInNavigationBar:(id)fp8 navigationBarState:(int)fp12;
- (id)_automationID;

@end

