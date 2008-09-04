/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIBarItem.h>

@class NSSet, NSString, UIImage, UIView;

@interface UIBarButtonItem : UIBarItem
{
    NSString *_title;
    NSSet *_possibleTitles;
    SEL _action;
    id _target;
    UIImage *_image;
    CDAnonymousStruct2 _imageInsets;
    float _width;
    UIView *_view;
    int _tag;
    struct {
        unsigned int enabled:1;
        unsigned int style:3;
        unsigned int isSystemItem:1;
        unsigned int systemItem:7;
        unsigned int viewIsCustom:1;
    } _barButtonItemFlags;
}

- (id)init;
- (id)initWithImage:(id)fp8 style:(int)fp12 target:(id)fp16 action:(SEL)fp20;
- (id)initWithTitle:(id)fp8 style:(int)fp12 target:(id)fp16 action:(SEL)fp20;
- (id)initWithBarButtonSystemItem:(int)fp8 target:(id)fp12 action:(SEL)fp16;
- (id)initWithCustomView:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (void)dealloc;
- (void)setEnabled:(BOOL)fp8;
- (BOOL)isEnabled;
- (void)setStyle:(int)fp8;
- (int)style;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)setImage:(id)fp8;
- (id)image;
- (void)setImageInsets:(CDAnonymousStruct2)fp8;
- (CDAnonymousStruct2)imageInsets;
- (void)setWidth:(float)fp8;
- (float)width;
- (void)setPossibleTitles:(id)fp8;
- (id)possibleTitles;
- (void)setCustomView:(id)fp8;
- (id)customView;
- (int)tag;
- (void)setTag:(int)fp8;
- (id)target;
- (void)setTarget:(id)fp8;
- (SEL)action;
- (void)setAction:(SEL)fp8;

@end

