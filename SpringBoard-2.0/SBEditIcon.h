/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBApplicationIcon.h"

@interface SBEditIcon : SBApplicationIcon
{
}

- (void)noteEditingStateChanged;
- (id)icon;
- (BOOL)allowsCloseBox;
- (void)completeUninstall;
- (id)_automationID;
- (id)displayIdentifier;
- (id)tags;
- (void)showAlertIfNeeded;
- (void)mouseDown:(struct __GSEvent *)fp8;
- (void)mouseDragged:(struct __GSEvent *)fp8;
- (float)grabDuration;
- (void)mouseUp:(struct __GSEvent *)fp8;

@end
