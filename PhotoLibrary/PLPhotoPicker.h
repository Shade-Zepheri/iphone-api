/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class NSDictionary, NSString, PLCropOverlay, PLImageTile, PLUIController, UIAnimation;

@interface PLPhotoPicker : UIView
{
    id _delegate;
    PLUIController *_uiController;
    UIView *_contentView;
    UIView *_syncingContentView;
    PLCropOverlay *_cropOverlay;
    PLImageTile *_imageTile;
    UIAnimation *_throwAnimation;
    NSString *_progressLabel;
    NSDictionary *_customCropTitles;
    struct {
        unsigned int customAllowsAlbumSelectionFlagInfo:2;
        unsigned int customAllowsPlayingSlideshowFlagInfo:2;
        unsigned int customAllowsFullSizeImageDisplayFlagInfo:2;
        unsigned int customAllowsZoomingWhenCroppingFlagInfo:2;
        unsigned int customCropPhotoAfterSelectionFlagInfo:2;
        unsigned int customShowCropUI:2;
        unsigned int customShowCamera:2;
        unsigned int syncing:1;
        unsigned int cancel:1;
        unsigned int unused:16;
    } _ppBitfields;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)setAllowsAlbumSelection:(BOOL)fp8;
- (void)setAllowsPlayingSlideshow:(BOOL)fp8;
- (void)setAllowsFullSizeImageDisplay:(BOOL)fp8;
- (void)setAllowsZoomingWhenCropping:(BOOL)fp8;
- (void)setCropPhotoAfterSelection:(BOOL)fp8;
- (void)setCropTitle:(id)fp8 subtitle:(id)fp12 cropButtonTitle:(id)fp16;
- (BOOL)showCamera;
- (void)setShowCamera:(BOOL)fp8;
- (void)setProgressLabel:(id)fp8;
- (void)willHide;
- (void)_updateUIControllerDelegateDependentFlags;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)_loadSyncUI;
- (void)_tearDownSyncUI;
- (void)_cacheUIControllerSettings;
- (void)_loadPickerUI;
- (void)_tearDownPickerUI;
- (void)navigationBar:(id)fp8 buttonClicked:(int)fp12;
- (void)_syncDidStart;
- (void)_syncDidEnd;
- (void)syncingHasBeenUnblockedBySB;
- (void)iTunesSyncRequestedStart;
- (void)iTunesSyncHasCompleted:(int)fp8;
- (void)cameraAlbumDidChange;
- (void)cancelButtonClicked;
- (void)imageWasSelected:(id)fp8;
- (void)cancelThrow:(id)fp8;
- (void)hopFinished:(id)fp8;
- (void)photoWasCroppedToRect:(struct CGRect)fp8 fullSizeImageData:(id)fp24 fullScreenImageData:(id)fp28 croppedImageData:(id)fp32 imageView:(id)fp36;
- (void)showCropUI;
- (void)setFullSizeImageData:(id)fp8 cropRect:(struct CGRect)fp12;
- (void)setFullSizeImage:(struct CGImage *)fp8 cropRect:(struct CGRect)fp12 orientation:(int)fp28;
- (BOOL)imageViewIsDisplayingLandscape:(id)fp8;
- (void)willStartGesture:(int)fp8 inView:(id)fp12 forEvent:(struct __GSEvent *)fp16;
- (void)cropOverlayWasCancelled:(id)fp8;
- (void)cropOverlayWasOKed:(id)fp8;
- (void)cropOverlay:(id)fp8 didFinishSaving:(id)fp12;

@end

