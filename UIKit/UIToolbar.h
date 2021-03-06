/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSArray, UIBarButtonItem, UIColor;

@interface UIToolbar : UIView
{
    UIView *_customizeView;
    id _delegate;
    NSArray *_items;
    UIBarButtonItem *_selectedItem;
    NSArray *_customizationItems;
    UIColor *_tintColor;
    struct {
        unsigned int barStyle:2;
        unsigned int mode:2;
        unsigned int roundsCorners:1;
        unsigned int alertShown:1;
        unsigned int wasEnabled:1;
        unsigned int customized:1;
        unsigned int downButtonSentAction:1;
    } _toolbarFlags;
    struct __CFDictionary *_groups;
    NSArray *_buttonItems;
    int _currentButtonGroup;
    struct __CFArray *_hiddenItems;
    int _selectedTag;
    int _trackingTag;
}

- (id)initWithCoder:(id)fp8;
- (void)_populateArchivedSubviews:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (void)dealloc;
- (void)setBarStyle:(int)fp8;
- (int)barStyle;
- (void)setMode:(int)fp8;
- (int)mode;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setItems:(id)fp8;
- (id)items;
- (void)setTintColor:(id)fp8;
- (void)setSelectedItem:(id)fp8;
- (id)selectedItem;
- (void)_sendAction:(id)fp8 withEvent:(id)fp12;
- (void)setItems:(id)fp8 animated:(BOOL)fp12;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (BOOL)isMinibar;
- (void)setBounds:(struct CGRect)fp8;
- (void)layoutSubviews;
- (void)beginCustomizingItems:(id)fp8;
- (BOOL)endCustomizingAnimated:(BOOL)fp8;
- (BOOL)isCustomizing;
- (id)tintColor;

@end

