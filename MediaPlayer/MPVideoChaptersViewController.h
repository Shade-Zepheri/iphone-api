/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <MediaPlayer/MPViewController.h>

@class MPVideoView, NSArray, UIMovieChapterListView;

@interface MPVideoChaptersViewController : MPViewController
{
    MPVideoView *_videoView;
    unsigned int _currentMarker;
    NSArray *_chapterTimeMarkers;
    UIMovieChapterListView *_chapterListView;
    float _timeColumnWidth;
    unsigned int _haveThumbnails:1;
    unsigned int _videoOutActive:1;
}

- (id)init;
- (void)dealloc;
- (void)setCurrentMarker:(unsigned int)fp8;
- (void)setVideoView:(id)fp8;
- (void)setTopPadding:(float)fp8;
- (void)setChapterTimeMarkers:(id)fp8;
- (void)setVideoOutActive:(BOOL)fp8;
- (float)topPadding;
- (BOOL)videoOutActive;
- (void)loadView;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidDisappear:(BOOL)fp8;
- (int)numberOfRowsInTable:(id)fp8;
- (id)table:(id)fp8 cellForRow:(int)fp12 column:(id)fp16 reusing:(id)fp20;
- (float)table:(id)fp8 heightForRow:(int)fp12;
- (void)tableRowSelected:(id)fp8;
- (void)videoView:(id)fp8 madeThumbnail:(id)fp12 forTime:(float)fp16;
- (void)_reloadThumbnails;
- (void)_sizeColumnsToFit;
- (id)chapterTimeMarkers;
- (id)videoView;
- (unsigned int)currentMarkerIndex;
- (void)setCurrentMarkerIndex:(unsigned int)fp8;

@end

