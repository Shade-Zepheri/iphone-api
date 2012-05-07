/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIViewController.h"

@class MLPhoto, PLCropOverlay, PLImageTile;

@interface PLImageViewController : UIViewController
{
    MLPhoto *_photo;
    PLCropOverlay *_cropOverlay;
    PLImageTile *_imageTile;
    unsigned int _allowEditing:1;
}

- (id)initWithPhoto:(id)fp8;
- (void)dealloc;
- (void)loadView;
- (void)setParentViewController:(id)fp8;
- (void)setAllowsEditing:(BOOL)fp8;
- (void)_editabilityChanged:(id)fp8;
- (void)_updateGestureSettings;
- (void)_updateTitles;
- (void)willStartGesture:(int)fp8 inView:(id)fp12 forEvent:(struct __GSEvent *)fp16;
- (void)cropOverlayWasCancelled:(id)fp8;
- (void)cropOverlayWasOKed:(id)fp8;
- (void)cropOverlay:(id)fp8 didFinishSaving:(id)fp12;

@end
