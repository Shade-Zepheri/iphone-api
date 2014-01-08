/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface CKImageData : NSObject
{
    struct CGImageSource *_imageSource;
    NSData *_data;
}

- (id)initWithData:(id)fp8;
- (void)dealloc;
- (id)image;
- (id)imageWithMaxLength:(int)fp8;
- (id)jpegDataWithMaxLength:(int)fp8 compression:(float)fp12;
- (id)pngDataWithMaxLength:(int)fp8;
- (id)mimeType;
- (id)imageType;
- (int)imageCount;
- (struct CGSize)size;
- (int)imageOrientation;
- (struct CGImageSource *)_imageSource;
- (id)_newImageWithMaxLength:(int)fp8 transformOrientation:(BOOL)fp12;
- (struct CGImage *)_newCGImageWithMaxLength:(int)fp8 transformOrientation:(BOOL)fp12;
- (id)data;

@end
