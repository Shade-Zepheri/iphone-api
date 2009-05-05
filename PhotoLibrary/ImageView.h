/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class MLPhoto;

@interface ImageView : UIView
{
    id _delegate;
    struct CGImage *_fullSizeImageRef;
    struct CGImage *_thumbnailImageRef;
    int _imageOrientation;
    int _orientationWhenLastDisplayed;
    struct CGSize _fullSize;
    MLPhoto *_modelImage;
    BOOL _setOriginDuringAnimation;
    float _startScale;
    float _endScale;
    struct CGSize _endContentSize;
    struct CGSize _startContentSize;
    float _zoomProgress;
    BOOL _zoomToFillInsteadOfToFit;
    BOOL _useLessThanMinZoomForZoomedOutTest;
    BOOL _allowZoomToFill;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (void)setDelegate:(id)fp8;
- (void)dealloc;
- (void)_setOriginForContentSize:(struct CGSize)fp8;
- (void)centerInScrollerIfNeeded;
- (void)setZoomScale:(float)fp8 duration:(double)fp12;
- (int)orientationWhenLastDisplayed;
- (void)setOrientationWhenLastDisplayed:(int)fp8;
- (struct CGSize)_scrollerContentSize;
- (void)zoomToScale:(float)fp8;
- (void)animator:(id)fp8 stopAnimation:(id)fp12;
- (void)_prepareForAnimatedZoomToScale:(float)fp8 duration:(double)fp12;
- (void)_zoomToScrollPoint:(struct CGPoint)fp8 scale:(float)fp16 duration:(float)fp20 event:(struct __GSEvent *)fp24;
- (struct CGImage *)imageRef;
- (int)imageOrientation;
- (BOOL)_canDrawContent;
- (void)drawRect:(struct CGRect)fp8;
- (BOOL)hasFullSizeImage;
- (void)ensureFullSizeImageLoaded;
- (void)setAllowsZoomToFill:(BOOL)fp8;
- (void)updateZoomScales;
- (int)defaultZoomStyle;
- (void)_updateLayerContents;
- (void)setFullSizeImageRef:(struct CGImage *)fp8 orientation:(int)fp12;
- (void)_finishedLoadingImageRef:(id)fp8;
- (void)movedFromSuperview:(id)fp8;
- (float)minRotatedScale;
- (float)_calculateZoomScale:(BOOL)fp8;
- (float)minZoomScale;
- (float)zoomToFillScale;
- (float)defaultZoomScale;
- (void)setThumbnail:(struct CGImage *)fp8;
- (BOOL)isZoomedOut;
- (id)modelImage;
- (void)setModelImage:(id)fp8;
- (id)description;
- (struct CGImage *)createUnrotatedImageWithSize:(struct CGSize)fp8;
- (void)_gestureChanged:(int)fp8 event:(struct __GSEvent *)fp12;

@end

