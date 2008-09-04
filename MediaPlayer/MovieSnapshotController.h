/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class CALayer, MPVideoView, NSMutableArray;

@interface MovieSnapshotController : NSObject
{
    MPVideoView *_videoView;
    CALayer *_layer;
    NSMutableArray *_pendingSnapshots;
    unsigned int _expectingTimeJump:1;
    unsigned int _pendingRestore:1;
    float _originalTime;
}

- (void)dealloc;
- (void)cancel;
- (void)scheduleSnapshotWithSize:(struct CGSize)fp8 orientation:(int)fp16 time:(float)fp20 delegate:(id)fp24;
- (void)setLayer:(id)fp8;
- (void)setVideoView:(id)fp8;
- (void)_timeDidJump:(id)fp8;
- (id)_currentSnapshot;
- (void)_finishSnapshot:(id)fp8;
- (void)_restoreOriginalTime;
- (void)_startNextSnapshot;
- (void)_takeSnapshot:(id)fp8;

@end

