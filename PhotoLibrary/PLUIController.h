/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class MLPhotoAlbum, NSMutableArray, NSString, PLAlbumsController, PLBackgroundView, PLCameraButtonBar, PLCameraView, PLLibraryController, PLPhotoLibrary, PLPhotosNavigationItem, PLSyncProgressView, UIToolbar, UITransitionView, UIWindow;

@interface PLUIController : NSObject
{
    id _delegate;
    UIWindow *_window;
    struct {
        unsigned int showingCamera:1;
        unsigned int allowsAlbumSelection:1;
        unsigned int allowsPlayingSlideshow:1;
        unsigned int allowsFullSizeImageDisplay:1;
        unsigned int displayingPhotoPicker:1;
        unsigned int allowsZoomingWhenCropping:1;
        unsigned int cropPhotoAfterSelection:1;
        unsigned int ignoreAccelerometer:1;
        unsigned int showCancelInNavBar:1;
        unsigned int showingCameraPreview:1;
        unsigned int hasAnimatedIrisOnSuspend:1;
        unsigned int hasStartedLocation:1;
        unsigned int wantsThrowViewOnSave:1;
    } _flags;
    PLPhotoLibrary *_model;
    PLBackgroundView *_backgroundView;
    UITransitionView *_fullScreenTransitionView;
    NSMutableArray *_fullScreenViews;
    PLCameraView *_cameraView;
    PLCameraButtonBar *_cameraRollButtonBar;
    PLSyncProgressView *_syncProgressView;
    PLAlbumsController *_albumsController;
    PLLibraryController *_libraryController;
    int _fullScreenPopTransition;
    PLPhotosNavigationItem *_fullScreenStatusItem;
    UIToolbar *_fullScreenViewButtonBar;
    int _statusBarMode;
    int _barStyle;
    NSString *_cropTitle;
    NSString *_cropSubtitle;
    NSString *_cropButtonTitle;
    NSMutableArray *_albumsToSelect;
    int _testPictureCounter;
    MLPhotoAlbum *_selectedAlbum;
    int _deviceOrientation;
    double _lastFSCheck;
}

+ (id)sharedInstance;
+ (void)releaseIfSharedInstance:(id)fp8;
+ (BOOL)runningPhotosApplication;
- (void)_diskSpaceWarned:(id)fp8;
- (id)_retainedNavigationItemForAlbum:(id)fp8;
- (void)_hideNavBarWithDuration:(float)fp8 showFullScreenNavBar:(BOOL)fp12;
- (void)_showNavBar;
- (void)_fadeNavBarOutWithItem:(id)fp8 transition:(int)fp12;
- (void)_fadeNavBarIn;
- (void)_transitionToFullScreenView:(id)fp8 withTransition:(int)fp12 showOverlayNavBar:(BOOL)fp16;
- (void)_transitionCompletedFromView:(id)fp8 toView:(id)fp12 transitionView:(id)fp16;
- (void)_setShowSyncUI:(BOOL)fp8;
- (void)syncingHasBeenUnblockedBySB;
- (void)iTunesSyncRequestedStart;
- (void)iTunesSyncHasCompleted:(int)fp8;
- (id)init;
- (void)dealloc;
- (id)mainWindow;
- (void)setMainWindow:(id)fp8;
- (id)defaultPNGName;
- (BOOL)isVisible;
- (void)setDelegate:(id)fp8;
- (id)contentViewWithFrame:(struct CGRect)fp8;
- (id)albumsController;
- (id)libraryController;
- (id)currentConfiguration;
- (void)setCurrentConfiguration:(id)fp8;
- (BOOL)allowsAlbumSelection;
- (void)setAllowsAlbumSelection:(BOOL)fp8;
- (int)statusBarMode;
- (void)setStatusBarMode:(int)fp8;
- (int)barStyle;
- (void)setBarStyle:(int)fp8;
- (BOOL)allowsPlayingSlideshow;
- (void)setAllowsPlayingSlideshow:(BOOL)fp8;
- (BOOL)allowsFullSizeImageDisplay;
- (void)setAllowsFullSizeImageDisplay:(BOOL)fp8;
- (void)_updateCameraViewGestures;
- (BOOL)allowsZoomingWhenCropping;
- (void)setAllowsZoomingWhenCropping:(BOOL)fp8;
- (int)allowedImageViewGestures;
- (BOOL)displayingPhotoPicker;
- (void)setDisplayingPhotoPicker:(BOOL)fp8;
- (BOOL)showCancelButtonInNavigationBar;
- (void)setShowCancelButtonInNavigationBar:(BOOL)fp8;
- (BOOL)wantsThrowViewOnSave;
- (void)_updateCameraPhotoSavingOptions;
- (void)setWantsThrowViewOnSave:(BOOL)fp8;
- (BOOL)cropPhotoAfterSelection;
- (void)_updateLocationRunState;
- (void)activeStateChanged:(id)fp8;
- (void)setCropPhotoAfterSelection:(BOOL)fp8;
- (id)cropTitle;
- (id)cropSubtitle;
- (id)cropButtonTitle;
- (void)setCropTitle:(id)fp8 subtitle:(id)fp12 cropButtonTitle:(id)fp16;
- (void)photoWasCroppedToRect:(struct CGRect)fp8 fullSizeImageData:(id)fp24 fullScreenImageData:(id)fp28 croppedImageData:(id)fp32 imageView:(id)fp36;
- (void)cancelButtonClicked;
- (void)imageWasSelected:(id)fp8;
- (int)_statusBarOrientationForDeviceOrientation:(int)fp8;
- (int)deviceOrientation;
- (void)setDeviceOrientation:(int)fp8;
- (BOOL)isLandscape;
- (BOOL)ignoreAccelerometer;
- (void)setIgnoreAccelerometer:(BOOL)fp8;
- (BOOL)showingCameraPreview;
- (BOOL)showCamera;
- (void)setShowCamera:(BOOL)fp8;
- (id)selectedAlbum;
- (void)setSelectedAlbum:(id)fp8;
- (id)viewForNavigationItem:(id)fp8;
- (void)popToLibraryView;
- (void)backgroundViewCompletedTransition;
- (void)pushNavigationItem:(id)fp8;
- (void)popNavigationItem;
- (id)albumScroller;
- (id)cameraButtonBar;
- (void)slidePhotoIndexUp:(id)fp8;
- (void)slidePhotoIndexUpFinished;
- (BOOL)wantsToAnimateIrisOnSuspend;
- (void)animateIrisOnSuspend;
- (void)irisCloseToPhotos:(id)fp8;
- (void)cameraViewFinishedClosingIris:(id)fp8;
- (void)switchToCamera:(id)fp8;
- (void)switchToCameraFinished;
- (void)cameraViewWillBeDisplayed:(id)fp8;
- (void)cameraViewWillBeRemoved:(id)fp8;
- (void)cameraViewFinishedTakingPicture:(id)fp8;
- (void)cameraViewCancelled:(id)fp8;
- (BOOL)cameraViewShouldShowPreviewAfterSelection:(id)fp8;
- (BOOL)cameraViewShouldShowIris:(id)fp8;
- (BOOL)cameraViewShouldShowProgressWhileCapturing:(id)fp8;
- (void)cameraView:(id)fp8 photoSaved:(id)fp12;
- (BOOL)cameraViewIsDisplayingLandscape:(id)fp8;
- (void)cameraShutterClicked:(id)fp8;
- (void)playSlideshow;
- (void)transitionViewDidComplete:(id)fp8 fromView:(id)fp12 toView:(id)fp16;
- (void)transitionToFullScreenView:(id)fp8 withTransition:(int)fp12;
- (void)popFullScreenView;
- (struct CGRect)fullScreenRect;
- (BOOL)backgroundShouldAnimateTransition;
- (id)backgroundView;
- (double)durationForTransition:(int)fp8;
- (void)navigationBar:(id)fp8 poppedItem:(id)fp12;
- (void)navigationBar:(id)fp8 buttonClicked:(int)fp12;
- (void)navigationItemWasPopped:(id)fp8;
- (id)topNavigationItem;
- (void)setFullScreenStatus:(id)fp8;
- (void)runAlbumSelectionTest;
- (void)runTakePictureTest:(int)fp8;

@end
