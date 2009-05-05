/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIWindow.h"

@class UIView;

@interface PLCameraWindow : UIWindow
{
    BOOL _filterChordChangeEvents;
    UIView *_chordedMouseDownView;
    struct CGPoint _chordedMouseDragPoint;
    int _lastFingerCount;
}

- (id)viewForEvent:(struct __GSEvent *)fp8 newPoint:(struct CGPoint *)fp12;
- (void)sendGSEvent:(struct __GSEvent *)fp8;
- (void)setFilterChordChangeEvents:(BOOL)fp8;

@end

