/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBIcon.h"

@class SBApplication;

@interface SBApplicationIcon : SBIcon
{
    SBApplication *_app;
}

- (id)initWithApplication:(id)fp8;
- (void)dealloc;
- (id)application;
- (id)icon;
- (id)displayName;
- (id)displayIdentifier;
- (BOOL)shouldEllipsizeLabel;
- (id)tags;
- (id)_automationID;
- (BOOL)launchEnabled;
- (void)launch;
- (void)setBadge:(id)fp8;

@end
