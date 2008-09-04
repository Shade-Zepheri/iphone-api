/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSError, NSURL, UIColor, UIWindow;

@interface MPMoviePlayerController : NSObject
{
    NSURL *_contentURL;
    int _scalingMode;
    int _movieControlMode;
    UIWindow *_window;
    id _videoViewController;
    UIColor *_backgroundColor;
    unsigned int _previousStatusBarMode;
    unsigned int _previousStatusBarOrientation;
    NSError *_playbackError;
    struct {
        unsigned int active:1;
        unsigned int mediaType:1;
        unsigned int statusBarWasHidden:1;
        unsigned int shouldRestartPlaybackAfterAudioRouteChange:1;
        unsigned int shouldResumeGeneratingDeviceOrientationNotifications:1;
        unsigned int playbackFailed:1;
        unsigned int isFinishing:1;
        unsigned int hideLoadingIndicatorForLocalFiles:1;
        unsigned int unused:24;
    } _playerBitfield;
}

+ (void)_setCurrentMoviePlayerController:(id)fp8;
+ (id)_currentMoviePlayerController;
+ (void)_setPlaybackInProgress:(BOOL)fp8;
+ (BOOL)_playbackInProgress;
- (id)init;
- (void)dealloc;
- (id)initWithContentURL:(id)fp8;
- (void)play;
- (void)stop;
- (void)setScalingMode:(int)fp8;
- (void)setMovieControlMode:(int)fp8;
- (int)movieControlMode;
- (void)pause;
- (void)resume;
- (id)videoViewController;
- (int)orientation;
- (void)setOrientation:(int)fp8 animated:(BOOL)fp12;
- (void)setHideLoadingIndicatorForLocalFiles:(BOOL)fp8;
- (BOOL)hideLoadingIndicatorForLocalFiles;
- (id)_volumeAudioCategory;
- (void)_createPlayer;
- (void)_playerFinishAndFadeOut;
- (void)_playerFadeInAnimationDidEnd:(id)fp8 finished:(id)fp12;
- (void)_playerFadeOutAnimationDidEnd:(id)fp8 finished:(id)fp12;
- (void)_playbackFailedWithError:(id)fp8;
- (id)_localizedDescriptionForErrorCode:(int)fp8;
- (unsigned int)_visiblePartsForMovieControlMode;
- (void)_updateForCurrentMovieControlMode;
- (void)_preloadingComplete;
- (void)_pausePlaybackForNotification:(id)fp8;
- (void)_willSuspendNotification:(id)fp8;
- (void)_willBeginSuspendAnimationNotification:(id)fp8;
- (void)_willResignNotification:(id)fp8;
- (void)_willTerminateNotification:(id)fp8;
- (void)_movieDidPreload:(id)fp8;
- (void)_movieDidPreloadMainThreadCallback:(id)fp8;
- (void)_movieDidDecode:(id)fp8;
- (void)_movieDidDecodeMainThreadCallback:(id)fp8;
- (void)_itemFailedToPlay:(id)fp8;
- (void)_itemFailedToPlayMainThreadCallback:(id)fp8;
- (void)_mediaServerDied:(id)fp8;
- (void)_mediaServerDiedMainThreadCallback:(id)fp8;
- (void)_audioRouteChanged:(id)fp8;
- (void)_playbackRateChanged:(id)fp8;
- (void)_playbackEnded:(id)fp8;
- (void)_expireImplicitAudioRouteChangePlaybackRestart;
- (void)_playbackStateDidChangeNotification:(id)fp8;
- (void)_bufferingStatusDidChangeNotification:(id)fp8;
- (void)_itemDidChangeNotification:(id)fp8;
- (void)viewControllerRequestsExit:(id)fp8;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)fp8;
- (int)scalingMode;
- (id)contentURL;

@end

