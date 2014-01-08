/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIKit/UIApplication.h"

@class NSString, NSTimer, NSURL, SBDimmingWindow, SBUIController;

@interface SpringBoard : UIApplication
{
    SBUIController *_uiController;
    NSTimer *_menuButtonTimer;
    NSTimer *_lockButtonTimer;
    NSTimer *_idleTimer;
    NSTimer *_autoLockTimer;
    double _lastTimeIdleCausedDim;
    double _headsetButtonDownTime;
    SBDimmingWindow *_simulatedBlankingWindow;
    unsigned int _headsetButtonClickCount:8;
    unsigned int _menuButtonClickCount:8;
    unsigned int _screenshotWasTaken:1;
    unsigned int _disableAutoDimming:1;
    unsigned int _nextLockUpLocks:1;
    unsigned int _poweringDown:1;
    unsigned int _autoDimmed:1;
    unsigned int _autoDimmedToBlack:1;
    unsigned int _ipodIsPlaying:1;
    int _UIOrientation;
    NSURL *_menuDoubleTapURL;
    int _notifyDontAnimateREOToken;
    int _notifyDontAllowMediaHUDToken;
    NSString *_jetsamIncidentID;
    double _sampleSystemStartTime;
    struct __CFDictionary *_startAppsCPUTimes;
}

+ (void)printWorkspaceStacks;
+ (void)printWorkspaceLogs;
- (BOOL)registerForSystemEvents;
- (BOOL)rendersLocally;
- (void)_createLogFile;
- (void)_writeLogFile;
- (BOOL)handleEvent:(struct __GSEvent *)fp8;
- (void)updatePowerlogKillingProcess:(BOOL)fp8;
- (void)applicationDidFinishLaunching:(id)fp8;
- (void)appleIconViewRemoved;
- (void)timeZoneChanged;
- (BOOL)disableRemoteNotifications;
- (void)wipeDeviceNow;
- (void)checkForExpiredPasscode;
- (void)showLowDiskSpaceAlert;
- (void)showEDGEActivationFailureAlert:(id)fp8 reason:(id)fp12;
- (void)showWiFiAlert;
- (void)showWiFiEnterpriseTrustAlert:(id)fp8;
- (void)wifiManager:(id)fp8 scanCompleted:(id)fp12;
- (void)userDefaultsDidChange:(id)fp8;
- (void)_testPhoneAlerts;
- (void)runFieldTestScript;
- (void)significantTimeChange;
- (void)tripleFingerGestureTriggered;
- (BOOL)shouldRunFieldTestScript;
- (BOOL)supportsVictoria;
- (BOOL)iapIsInExtendedMode;
- (BOOL)_canShowNowPlayingHUD;
- (BOOL)allowMenuDoubleTap;
- (void)handleMenuDoubleTap;
- (void)_setMenuButtonTimer:(id)fp8;
- (void)_setLockButtonTimer:(id)fp8;
- (void)clearMenuButtonTimer;
- (void)_menuButtonWasHeld;
- (void)menuButtonDown:(struct __GSEvent *)fp8;
- (void)menuButtonUp:(struct __GSEvent *)fp8;
- (void)_handleMenuButtonEvent;
- (void)lockButtonDown:(struct __GSEvent *)fp8;
- (void)lockButtonWasHeld;
- (void)_powerDownNow;
- (void)_rebootNow;
- (void)reboot;
- (void)powerDown;
- (void)relaunchSpringBoard;
- (void)powerDownRequested:(id)fp8;
- (void)powerDownCanceled:(id)fp8;
- (void)_initLockButtonBearTrap;
- (void)_setLockButtonBearTrap;
- (void)_unsetLockButtonBearTrap;
- (void)_fireLockButtonBearTrap;
- (void)lockButtonUp:(struct __GSEvent *)fp8;
- (void)headsetButtonDown:(struct __GSEvent *)fp8;
- (void)_sendRemoteCommand:(int)fp8 forHeadsetEvent:(struct __GSEvent *)fp12;
- (void)_handleHeadsetButtonDoubleClick:(struct __GSEvent *)fp8;
- (void)_handleHeadsetButtonTripleClick:(struct __GSEvent *)fp8;
- (void)headsetButtonUp:(struct __GSEvent *)fp8;
- (void)_handleHeadsetButtonClick:(struct __GSEvent *)fp8;
- (void)smsSoundPrefsChanged;
- (void)ALSPrefsChanged:(id)fp8;
- (void)updateCapabilitiesAndIconVisibility;
- (void)loadDebuggingAndDemoPrefs;
- (void)debuggingAndDemoPrefsWereChanged;
- (void)clockFormatChanged;
- (void)autoLockPrefsChanged;
- (void)pinPolicyChanged;
- (void)ringerChanged:(int)fp8;
- (void)accessoryAvailabilityChanged:(struct __GSEvent *)fp8;
- (void)accessoryKeyStateChanged:(struct __GSEvent *)fp8;
- (void)accessoryEvent:(struct __GSEvent *)fp8;
- (unsigned int)_portForEvent:(struct __GSEvent *)fp8;
- (void)quitTopApplication:(struct __GSEvent *)fp8;
- (void)applicationExited:(struct __GSEvent *)fp8;
- (void)anotherApplicationFinishedLaunching:(struct __GSEvent *)fp8;
- (void)otherApplicationWillSuspend:(struct __GSEvent *)fp8;
- (void)applicationStarted:(struct __GSEvent *)fp8;
- (void)applicationSuspend:(struct __GSEvent *)fp8;
- (void)applicationSuspended:(struct __GSEvent *)fp8;
- (void)applicationSuspendedSettingsUpdated:(struct __GSEvent *)fp8;
- (void)showAlertForUnhandledURL:(id)fp8 error:(int)fp12;
- (void)applicationOpenURL:(id)fp8 asPanel:(BOOL)fp12 publicURLsOnly:(BOOL)fp16;
- (void)applicationOpenURL:(id)fp8 asPanel:(BOOL)fp12;
- (void)volumeChanged:(struct __GSEvent *)fp8;
- (void)setBacklightFactor:(int)fp8;
- (void)setBacklightLevel:(float)fp8;
- (void)setProximitySensorEnabled:(int)fp8;
- (void)systemWillSleep;
- (void)setupMidnightTimer;
- (void)_midnightPassed;
- (void)_adjustMidnightTimerAfterSleep;
- (void)handleOutOfLineDataResponse:(struct __GSEvent *)fp8;
- (void)dim;
- (void)turnOffBacklight;
- (void)cancelTurnOffBacklightAfterDelay;
- (void)turnOffBacklightAfterDelay;
- (void)showSimulatedScreenBlank;
- (void)hideSimulatedScreenBlank;
- (void)dimToBlack;
- (void)undim;
- (void)lockAfterCall;
- (BOOL)shouldDimToBlackInsteadOfLock;
- (void)autoLock;
- (void)didIdle;
- (double)nextIdleTimeDuration;
- (double)nextLockTimeDuration;
- (void)clearIdleTimer;
- (void)resetIdleTimerAndUndim:(BOOL)fp8;
- (void)userEventOccurred:(id)fp8;
- (void)resetIdleTimer;
- (void)resetIdleDuration:(double)fp8;
- (void)updateRejectedInputSettings;
- (void)updateRejectedInputSettingsForInCallState:(BOOL)fp8 isOutgoing:(BOOL)fp12;
- (void)handleOutOfLineDataRequest:(struct __GSEvent *)fp8;
- (void)lockDevice:(struct __GSEvent *)fp8;
- (void)statusBarEvent:(struct __GSEvent *)fp8;
- (void)showThermalAlertIfNecessary;
- (void)respondToCurrentThermalCondition;
- (void)_beginThermalJetsamCPUSampling;
- (void)_killThermallyActiveApplication;
- (struct __CFDictionary *)_createAppsCPUTimesDictionary;
- (void)checkMemoryStatus;
- (void)_receivedMemoryNotification;
- (void)_killSpringBoardInResponseToCriticalWarning;
- (void)noteSubstantialTransitionOccured;
- (int)_frontMostAppOrientation;
- (void)noteUIOrientationChanged:(int)fp8 display:(id)fp12;
- (int)UIOrientation;
- (void)updateMenuDoubleTapSettings;
- (void)updateAccelerometerSettings;
- (void)updateProximitySettings;
- (void)updateAirPortForDisplay:(id)fp8;
- (void)frontDisplayDidChange:(id)fp8;
- (void)didDismissMiniAlert;
- (void)willDisplayMiniAlert:(int *)fp8;
- (void)willDismissMiniAlert:(int *)fp8 andShowAnother:(BOOL)fp12;
- (BOOL)canShowAlerts;
- (BOOL)isLocked;
- (int)alertOrientation;
- (void)_tearDownNow;
- (void)tearDown;
- (void)_nowPlayingInfoChanged:(id)fp8;
- (BOOL)deviceIsInNowPlaying;
- (BOOL)musicIsPlaying;
- (void)setNowPlayingInfo:(id)fp8;
- (BOOL)deviceAllowsNowPlayingHUD;
- (void)setJetsamIncidentID;
- (void)clearJetsamIncidentID;
- (id)jetsamIncidentID;
- (void)clearDeviceAllowsNowPlayingHUD;

@end

