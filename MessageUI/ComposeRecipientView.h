/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <MessageUI/ComposeHeaderView.h>

#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class ComposeRecipientAtom, NSMutableArray, NSMutableDictionary, UIPushButton, UITextField;

@interface ComposeRecipientView : ComposeHeaderView <UITextFieldDelegate, ABPeoplePickerNavigationControllerDelegate>
{
    NSMutableArray *_recipients;
    NSMutableDictionary *_atoms;
    ComposeRecipientAtom *_opaqueTextAtom;
    UIPushButton *_addButton;
    BOOL _editable;
    BOOL _picking;
    BOOL _becomingFirstResponder;
    BOOL _ignoreFirstResponderChanges;
    BOOL _allowsDuplicateEntries;
    int _property;
    int _maxRecipients;
    UITextField *_textField;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (int)composeRecipientAtomKeyboardType:(id)fp8;
- (void)setAllowsDuplicateEntries:(BOOL)fp8;
- (void)setLabel:(id)fp8;
- (BOOL)editable;
- (void)setEditable:(BOOL)fp8;
- (void)clearText;
- (void)setProperty:(int)fp8;
- (id)addresses;
- (void)setAddresses:(id)fp8;
- (void)addRecipient:(id)fp8;
- (void)addAddress:(id)fp8;
- (void)addRecord:(void *)fp8 identifier:(int)fp12;
- (void)removeAddressAtIndex:(int)fp8;
- (BOOL)_addable;
- (void)setMaxRecipients:(int)fp8;
- (int)maxRecipients;
- (BOOL)_canBecomeFirstResponder;
- (void)reflow;
- (void)addButtonClicked:(id)fp8;
- (BOOL)shouldShowCardForPerson:(void *)fp8;
- (BOOL)peoplePicker:(id)fp8 shouldShowCardForPerson:(void *)fp12;
- (void)peoplePickerNavigationControllerDidCancel:(id)fp8;
- (BOOL)peoplePickerNavigationController:(id)fp8 shouldContinueAfterSelectingPerson:(void *)fp12;
- (BOOL)peoplePickerNavigationController:(id)fp8 shouldContinueAfterSelectingPerson:(void *)fp12 property:(int)fp16 identifier:(int)fp20;
- (void)peoplePicker:(id)fp8 selectedPerson:(void *)fp12 property:(int)fp16 identifier:(int)fp20;
- (void)peoplePicker:(id)fp8 enteredOtherValue:(void *)fp12 forProperty:(int)fp16;
- (void)peoplePickerDidEndPicking:(id)fp8;
- (BOOL)textFieldShouldBecomeFirstResponder:(id)fp8;
- (void)textFieldDidBecomeFirstResponder:(id)fp8;
- (void)textFieldDidResignFirstResponder:(id)fp8;
- (void)composeRecipientAtomWillBecomeFirstResponder:(id)fp8;
- (void)composeRecipientAtomDidBecomeFirstResponder:(id)fp8;
- (void)composeRecipientAtomDidResignFirstResponder:(id)fp8;
- (void)composeRecipientAtomDeleteClicked:(id)fp8;
- (id)text;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)textChanged:(id)fp8;
- (BOOL)keyboardInput:(id)fp8 shouldInsertText:(id)fp12 isMarkedText:(BOOL)fp16;
- (BOOL)keyboardInputShouldDelete:(id)fp8;
- (float)offsetForRowWithTextField;
- (void)showAtoms;
- (void)setIgnoreFirstResponderChanges:(BOOL)fp8;
- (void)dealloc;
- (id)recipients;
- (BOOL)textFieldShouldEndEditing:(id)fp8;

@end

