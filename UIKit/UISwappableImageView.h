/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIToolbar;

@interface UISwappableImageView : UIView
{
    id _value;
    id _alternate;
    BOOL _showAlternate;
    BOOL _flipped;
    BOOL _updateImage;
    BOOL _bezel;
    int _bezelStyle;
    int _currentAnimation;
    UIToolbar *_buttonBar;
    int _buttonTag;
}

- (id)initWithImage:(id)fp8 alternateImage:(id)fp12 barStyle:(int)fp16 tintColor:(id)fp20 bezel:(BOOL)fp24;
- (void)dealloc;
- (void)setBezelStyleForBarStyle:(int)fp8 tintColor:(id)fp12;
- (void)updateImageIfNeeded;
- (void)showAlternateImage:(BOOL)fp8;
- (void)setFlipped:(BOOL)fp8;
- (void)animateImage:(float)fp8 withButtonBar:(id)fp12 withTag:(int)fp16;
- (void)animationDidStop:(id)fp8 finished:(BOOL)fp12;
- (void)setImage:(id)fp8;

@end

