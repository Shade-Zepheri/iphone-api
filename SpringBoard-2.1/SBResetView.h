/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class NSTimer, SBResetProgressView;

@interface SBResetView : UIView
{
    SBResetProgressView *_progressView;
    NSTimer *_progressTimer;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)_resetStarted:(id)fp8;
- (void)_resetFinished:(id)fp8;
- (void)_updateProgress;

@end
