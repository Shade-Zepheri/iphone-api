/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSOperation.h"

@class CKMediaObject, NSData;

@interface CKMediaPreviewGenerator : NSOperation
{
    BOOL _generateComposePreview;
    int _orientation;
    CKMediaObject *_mediaObject;
    id _delegate;
    NSData *_previewResult;
    NSData *_composePreviewResult;
}

- (void)main;
- (void)dealloc;
- (id)composePreviewResult;
- (id)previewResult;
- (id)delegate;
- (void)setDelegate:(id)fp8;
- (id)mediaObject;
- (void)setMediaObject:(id)fp8;
- (BOOL)generateComposePreview;
- (void)setGenerateComposePreview:(BOOL)fp8;
- (int)orientation;
- (void)setOrientation:(int)fp8;

@end

