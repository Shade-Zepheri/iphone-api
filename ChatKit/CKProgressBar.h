/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class UIImageView;

@interface CKProgressBar : UIView
{
    UIImageView *_well;
    UIImageView *_fill;
    float _progressValue;
}

+ (float)defaultHeight;
+ (float)_minFillWidth;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setProgressValue:(float)fp8;
- (void)_setupFillFrame;
- (float)progressValue;

@end

