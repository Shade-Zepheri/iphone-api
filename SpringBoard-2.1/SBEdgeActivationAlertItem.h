/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBEdgeActivationAlertItem : SBAlertItem
{
    int _error;
    NSString *_reason;
}

- (id)initWithErrorCode:(int)fp8 reason:(id)fp12;
- (void)dealloc;
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (BOOL)dismissOnLock;

@end

