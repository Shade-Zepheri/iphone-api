/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <AddressBookUI/ABAbstractViewController.h>

#import "ABMembersControllerDelegate-Protocol.h"
#import "ABNewPersonViewControllerDelegate-Protocol.h"
#import "ABPersonViewControllerDelegate-Protocol.h"

@class ABMembersController;

@interface ABMembersViewController : ABAbstractViewController <ABPersonViewControllerDelegate, ABNewPersonViewControllerDelegate, ABMembersControllerDelegate>
{
    ABMembersController *_membersController;
}

- (id)initWithModel:(id)fp8;
- (void)dealloc;
- (id)defaultPNGName;
- (void)loadView;
- (void)updateNavigationButtonsInSearchMode:(BOOL)fp8;
- (void)updateNavigationButtons;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidDisappear:(BOOL)fp8;
- (BOOL)isNavigationButtonEnabled:(int)fp8;
- (void)cancel:(id)fp8;
- (void)addPerson:(id)fp8;
- (BOOL)canHandleSnapbackIdentifier:(id)fp8 animated:(BOOL)fp12;
- (void)_refreshAccount;
- (void)showCardForPerson:(void *)fp8 animate:(BOOL)fp12;
- (void)showInsertEditorForPerson:(void *)fp8;
- (void)membersControllerWillStartSearching:(id)fp8;
- (void)membersControllerWillEndSearching:(id)fp8;
- (void)membersController:(id)fp8 needsTitleUpdate:(id)fp12;
- (void)cancelSearching:(id)fp8;
- (BOOL)personViewController:(id)fp8 shouldPerformDefaultActionForPerson:(void *)fp12 property:(int)fp16 identifier:(int)fp20;
- (BOOL)dismissPropertyEditorViewController:(id)fp8 afterEditingConfirmed:(BOOL)fp12;
- (void)personWasSelected:(void *)fp8;
- (void)newPersonViewController:(id)fp8 didCompleteWithNewPerson:(void *)fp12;
- (BOOL)newContactViewControllerCompleted:(id)fp8 withNewPerson:(void *)fp12;
- (void)modelDatabaseChange:(id)fp8;
- (void)modelSelectedPersonWasDeleted:(id)fp8;
- (id)model;

@end

