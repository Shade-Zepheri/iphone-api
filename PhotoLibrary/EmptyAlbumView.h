/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIImageView, UITextLabel;

@interface EmptyAlbumView : UIView
{
    UIImageView *_icon;
    UITextLabel *_title;
    UITextLabel *_message;
}

- (id)_emptyRollImageForAlbum:(id)fp8;
- (id)_messageForAlbum:(id)fp8;
- (id)_createLabelWithText:(id)fp8 font:(struct __GSFont *)fp12 bottom:(float)fp16;
- (id)_createTextViewWithText:(id)fp8 bottom:(float)fp12;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)setAlbum:(id)fp8;

@end

