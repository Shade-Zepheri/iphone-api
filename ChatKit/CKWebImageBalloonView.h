/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <ChatKit/CKWebBalloonView.h>

@class UIImageView;

@interface CKWebImageBalloonView : CKWebBalloonView
{
    struct CGSize _originalImageSize;
    UIImageView *_stillImage;
}

+ (struct CGPoint)offsetForBubbleInsetAtPoint:(struct CGPoint)fp8;
+ (float)additionalHeightForBubbleWhenInsetAtPoint:(struct CGPoint)fp8;
- (void)dealloc;
- (void)setText:(id)fp8;
- (float)heightForWidth:(float)fp8;
- (float)tightenedWidth;
- (void)tighten;
- (void)setImage:(id)fp8 mimeType:(id)fp12;
- (void)setImageWithFilename:(id)fp8;
- (void)setStillImage:(id)fp8;
- (id)_htmlForImageWithFilename:(id)fp8 size:(struct CGSize)fp12;
- (id)_htmlForImageWithData:(id)fp8 mimeType:(id)fp12 size:(struct CGSize)fp16;
- (struct CGSize)_scaledImageSize;
- (void)_wvSetHTML:(id)fp8;
- (struct CGSize)originalImageSize;
- (void)setOriginalImageSize:(struct CGSize)fp8;

@end
