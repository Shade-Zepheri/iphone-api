/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIViewController.h"

@class NSArray, UIPreferencesTable, mSMSUIController;

@interface mSMSLinkViewController : UIViewController
{
    mSMSUIController *_uiController;
    NSArray *_linkProps;
    UIPreferencesTable *_table;
}

- (id)initWithUIController:(id)fp8;
- (void)dealloc;
- (void)setLinkProperties:(id)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)loadView;
- (void)tableSelectionDidChange:(id)fp8;
- (int)numberOfGroupsInPreferencesTable:(id)fp8;
- (int)preferencesTable:(id)fp8 numberOfRowsInGroup:(int)fp12;
- (id)preferencesTable:(id)fp8 cellForRow:(int)fp12 inGroup:(int)fp16;

@end
