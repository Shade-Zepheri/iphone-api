/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@class NSTimer, SBIconBadge, SBIconLabel, UIImage, UIImageView, UIPushButton;

@interface SBIcon : UIControl
{
    UIImage *_topRimmedIcon;
    UIImageView *_image;
    UIImageView *_reflection;
    SBIconBadge *_badge;
    SBIconLabel *_label;
    UIPushButton *_closeBox;
    unsigned int _drawsLabel:1;
    unsigned int _isHidden:1;
    unsigned int _isRevealable:1;
    unsigned int _inDock:1;
    unsigned int _isGrabbed:1;
    unsigned int _isGrabbing:1;
    unsigned int _isJittering:1;
    unsigned int _allowJitter:1;
    unsigned int _mouseDownInIcon:1;
    int _keyFrameIndex;
    struct CGPoint _unjitterPoint;
    struct CGPoint _grabPoint;
    NSTimer *_grabTimer;
}

+ (struct CGSize)defaultIconSize;
+ (id)_jitterPositionAnimation;
+ (id)_jitterTransformAnimation;
- (id)initWithDefaultSize;
- (void)dealloc;
- (BOOL)shouldListInCapabilities;
- (void)resetIconImage;
- (BOOL)ignoresMouseEvents;
- (void)showIconAnimationDidStop:(id)fp8 didFinish:(id)fp12 icon:(id)fp16;
- (void)setIsHidden:(BOOL)fp8 animate:(BOOL)fp12;
- (BOOL)isHidden;
- (void)setIsRevealable:(BOOL)fp8;
- (BOOL)isRevealable;
- (id)displayName;
- (id)displayIdentifier;
- (id)tags;
- (BOOL)launchEnabled;
- (void)setDisplayedIcon:(id)fp8;
- (id)icon;
- (id)topRimmedIcon;
- (id)darkenedIcon:(id)fp8 alpha:(float)fp12;
- (id)highlightedIcon;
- (id)reflectedIcon:(BOOL)fp8;
- (void)layout;
- (void)updateLabelOrigin;
- (BOOL)shouldEllipsizeLabel;
- (void)setDrawsLabel:(BOOL)fp8;
- (void)updateLabelKerning;
- (id)badge;
- (void)setBadge:(id)fp8;
- (id)_automationID;
- (BOOL)shouldTrack;
- (BOOL)pointMostlyInside:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;
- (void)setHighlighted:(BOOL)fp8;
- (void)setInDock:(BOOL)fp8;
- (void)setOrigin:(struct CGPoint)fp8;
- (void)startJitteringAnimation;
- (void)stopJitteringAnimation;
- (void)setAllowJitter:(BOOL)fp8;
- (BOOL)allowJitter;
- (void)unjitter;
- (void)setIconPosition:(struct CGPoint)fp8;
- (float)grabDurationForEvent:(struct __GSEvent *)fp8;
- (void)setIsGrabbed:(BOOL)fp8;
- (void)grabTimerFired;
- (void)cancelGrabTimer;
- (void)mouseCancelInIcon:(id)fp8;
- (BOOL)cancelMouseTracking;
- (void)mouseDown:(struct __GSEvent *)fp8;
- (void)mouseDragged:(struct __GSEvent *)fp8;
- (void)mouseUp:(struct __GSEvent *)fp8;
- (id)dictionaryRepresentation;
- (void)launch;
- (BOOL)pointInside:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;
- (BOOL)allowsCloseBox;
- (void)hideCloseBoxAnimationDidStop:(id)fp8 didFinish:(id)fp12 closeBox:(id)fp16;
- (void)setIsShowingCloseBox:(BOOL)fp8;
- (BOOL)isShowingCloseBox;
- (void)closeBoxClicked:(id)fp8;
- (void)completeUninstall;
- (id)description;
- (id)uninstallAlertTitle;
- (id)uninstallAlertBody;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertCancelTitle;

@end

