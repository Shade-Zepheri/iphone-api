/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <ChatKit/CKMediaObject.h>

@class AVRemaker, NSString;

@interface CKAVMediaObject : CKMediaObject
{
    AVRemaker *_remaker;
    BOOL _remakeSuccessful;
    BOOL _remakeDidEnd;
    NSString *_createdFilename;
    double _approximateDuration;
}

+ (void)initialize;
+ (double)maxMMSTrimDurationForMediaType:(int)fp8;
+ (id)transcodeOptionsWithMaxBytes:(int)fp8;
+ (void)_dequeueNextTranscodeOnMainThread;
- (void)dealloc;
- (BOOL)shouldTranscodeForMMS;
- (Class)balloonPreviewClassWithPreviewData:(id)fp8;
- (void)prepareForTranscode;
- (id)transcodedFilename;
- (id)newTranscodingForMMSWithMaxByteLength:(int)fp8;
- (id)transcodedPathExtension;
- (void)cleanupAfterTranscode;
- (void)configureBalloon:(id)fp8 withPreviewData:(id)fp12;
- (id)transcodePath;
- (double)transcodeStartTime;
- (double)transcodeEndTime;
- (double)transcodeDuration;
- (id)transcodeMimeType;
- (id)effectiveExportedFilename;
- (id)fileForDataWithExtension:(id)fp8;
- (id)previewTitle;
- (void)_determineDurationOnMainThreadWithFile:(id)fp8;
- (void)_enqueueTranscodeOnMainThreadWithOptions:(id)fp8;
- (void)_beginRemakingOnMainThreadWithOptions:(id)fp8;
- (void)_remakeDidComplete:(id)fp8;
- (BOOL)remakeDidEnd;
- (void)setRemakeDidEnd:(BOOL)fp8;

@end

