/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlertDisplay.h"

@class NSString, SBDeviceLockKeypad, SBEmergencyCallView, SBPasscodeField, TPLCDView, UIImageView, UIKeyboard, UIView;

@interface SBSlidingAlertDisplay : SBAlertDisplay
{
    UIImageView *_backgroundView;
    UIView *_topBar;
    UIView *_bottomBar;
    TPLCDView *_deviceLockStatusView;
    SBDeviceLockKeypad *_deviceLockKeypad;
    UIKeyboard *_deviceLockKeyboard;
    UIImageView *_deviceLockEntryBackground;
    SBPasscodeField *_deviceLockEntryField;
    SBEmergencyCallView *_emergencyCallView;
    UIView *_emergencyCallTopBar;
    NSString *_lastPasscode;
    int _okFontSize;
    int _cancelFontSize;
    BOOL _playKeyboardClicks;
    BOOL _alphanumericPIN;
    unsigned int _animatingEmergencyCall:1;
    unsigned int _animatingIn:1;
    unsigned int _animatingOut:1;
    unsigned int _shouldFenceAnimations:1;
    unsigned int _showingDeviceLock:1;
    unsigned int _attemptingUnlock:1;
    unsigned int _showingDeviceUnlockFailure:1;
}

+ (id)createTopBarForInstance:(id)fp8;
+ (id)createBottomBarForInstance:(id)fp8;
+ (void)setDisplayPropertiesForActivationOfAlert:(id)fp8;
- (void)_setTopBarImage:(id)fp8 shadowColor:(id)fp12;
- (void)_resetStatusTextView;
- (void)_clearUnlockFailedIndicator;
- (void)_showUnlockFailedIndicator;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (id)lockBar;
- (struct CGRect)middleFrame;
- (void)getFrameForTopButton:(struct CGRect *)fp8 bottomButton:(struct CGRect *)fp12;
- (BOOL)showsDesktopImage;
- (void)updateDesktopImage:(id)fp8;
- (void)finishedAnimatingIn;
- (void)finishedAnimatingOut;
- (BOOL)shouldAnimateIconsIn;
- (BOOL)shouldAnimateIconsOut;
- (BOOL)isAnimatingOut;
- (void)_fadeOutCompleted:(id)fp8;
- (void)setMiddleContentAlpha:(float)fp8;
- (BOOL)isReadyToBeRemovedFromView;
- (float)durationForOthersActivation;
- (void)dismiss;
- (void)beginAnimatingDisplayIn:(BOOL)fp8;
- (void)performAnimateDisplayIn;
- (void)animateDisplayIn:(float)fp8 middleDelay:(float)fp12 animateStatusBar:(BOOL)fp16;
- (void)alertDisplayWillBecomeVisible;
- (void)setShouldFenceAnimations:(BOOL)fp8;
- (BOOL)isShowingDeviceLock;
- (void)_loadAlphanumericPIN;
- (BOOL)alphanumericPIN;
- (struct CGRect)_entryFrame;
- (float)_startingKeypadXOrigin;
- (void)setShowingDeviceLock:(BOOL)fp8 duration:(float)fp12;
- (void)setShowingDeviceLock:(BOOL)fp8;
- (void)animateToShowingDeviceLock:(BOOL)fp8;
- (void)_animateToHidingOrShowingDeviceLockFinished;
- (void)_animateToShowingDeviceLockFinished;
- (void)_animateToHidingDeviceLockFinished;
- (void)deviceUnlockSucceeded;
- (void)deviceUnlockFailed;
- (void)deviceUnlockCanceled;
- (void)_enableEntry;
- (BOOL)shouldShowBlockedRedStatus;
- (void)showBlockedStatus;
- (void)removeBlockedStatus;
- (BOOL)isDisplayingErrorStatus;
- (void)_entryFinishedWithPassword:(id)fp8;
- (void)phonePad:(id)fp8 keyDown:(BOOL)fp12;
- (void)phonePad:(id)fp8 keyUp:(BOOL)fp12;
- (void)passcodeFieldDidAcceptEntry:(id)fp8;
- (void)_setLastPasscode:(id)fp8;
- (void)passcodeFieldTextDidChange:(id)fp8;
- (void)returnKeyPressed:(id)fp8;
- (void)_animateView:(id)fp8 direction:(int)fp12;
- (void)animateToEmergencyCall;
- (void)emergencyCallWasDisplayed;
- (void)animateFromEmergencyCallWithDuration:(float)fp8;
- (void)emergencyCallWasRemoved;
- (id)bottomBar;
- (id)topBar;

@end

