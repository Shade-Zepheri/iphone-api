/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlertItem.h"

@interface SBRestoreFailureAlertItem : SBAlertItem
{
}

- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (double)autoDismissInterval;
- (void)_rebootNow;
- (void)restartSystemEvent;
- (void)performUnlockAction;
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)shouldShowInLockScreen;

@end

