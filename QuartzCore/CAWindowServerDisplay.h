/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@interface CAWindowServerDisplay : NSObject
{
    struct CADisplayServer *_impl;
}

- (id)_initWithCADisplayServer:(struct CADisplayServer *)fp8;
- (void)invalidate;
- (void)dealloc;
- (struct CGRect)bounds;
- (id)name;
- (id)deviceName;
- (id)contextIdsWithClientPort:(unsigned int)fp8;
- (unsigned int)contextIdAtPosition:(struct CGPoint)fp8;
- (unsigned int)clientPortAtPosition:(struct CGPoint)fp8;
- (struct CGRect)frameOfContextId:(unsigned int)fp8;
- (void)setBlanked:(BOOL)fp8;
- (BOOL)isBlanked;
- (void)setTVMode:(id)fp8;
- (id)TVMode;
- (void)setTVSignalType:(id)fp8;
- (id)TVSignalType;
- (id)description;

@end

