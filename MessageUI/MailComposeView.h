/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UITransitionView.h"

@class ABPeoplePicker, ComposeBodyField, ComposeFromView, ComposeHeaderView, ComposeRecipientView, ComposeSubjectView, DADSearchQuery, NSMutableArray, NSMutableDictionary, UIKeyboard, UINavigationBar, UIPickerView, UIResponder, UITable, UITextViewLegacy, UIToolbar, UIView;

@interface MailComposeView : UITransitionView
{
    UIView *_contentView;
    UINavigationBar *_navBar;
    ComposeBodyField *_bodyField;
    UIView *_headerView;
    UITextViewLegacy *_bodyScroller;
    UIKeyboard *_keyboard;
    UIToolbar *_keyboardButtonBar;
    ComposeRecipientView *_toField;
    ComposeRecipientView *_ccField;
    ComposeRecipientView *_bccField;
    ComposeSubjectView *_subjectField;
    ComposeFromView *_fromField;
    ComposeHeaderView *_multiField;
    UIView *_shadowView;
    UIPickerView *_fromPickerView;
    ABPeoplePicker *_peoplePicker;
    float _finalToHeight;
    float _finalCCHeight;
    float _offsetBeforeSearch;
    id _sendTarget;
    SEL _sendAction;
    id _closeTarget;
    SEL _closeAction;
    BOOL _closeEnabled;
    BOOL _sendEnabled;
    unsigned int _scheduledDeferedProgressMonitoring:1;
    unsigned int _toHeightChanging:1;
    unsigned int _ccHeightChanging:1;
    unsigned int _pinToBottomOfHeaderView:1;
    unsigned int _changingRecipients:1;
    unsigned int _isLoading:1;
    unsigned int _multiFieldOverride:1;
    unsigned int _pendingMultiFieldOverride:1;
    ComposeRecipientView *_activeRecipientView;
    NSMutableArray *_searchResults;
    UITable *_searchResultsTable;
    NSMutableDictionary *_recipientsByAddress;
    DADSearchQuery *_currentSearchQuery;
    UIResponder *_firstResponderBeforeSheet;
    BOOL _animationDisabled;
    float _adjustViewHeight;
}

- (id)_searchResultsTable;
- (BOOL)_fixUpView:(id)fp8 changingView:(id)fp12 toSize:(struct CGSize)fp16 fieldFrame:(struct CGRect *)fp24;
- (void)composeHeaderViewClicked:(id)fp8;
- (void)_setupField:(id)fp8 isNew:(BOOL)fp12 changingView:(id)fp16 toSize:(struct CGSize)fp20 fieldFrame:(struct CGRect *)fp28 visible:(BOOL)fp32;
- (void)_setupField:(id *)fp8 withLabel:(id)fp12 property:(int)fp16 changingView:(id)fp20 toSize:(struct CGSize)fp24 fieldFrame:(struct CGRect *)fp32 visible:(BOOL)fp36;
- (void)_getLabel:(id *)fp8 andAccountDescription:(id *)fp12 forState:(CDAnonymousStruct1)fp16;
- (void)_setupMultiFieldWithState:(CDAnonymousStruct1)fp8 changingView:(id)fp9 toSize:(struct CGSize)fp13 fieldFrame:(struct CGRect *)fp21;
- (void)_setupFromFieldChangingView:(id)fp8 toSize:(struct CGSize)fp12 fieldFrame:(struct CGRect *)fp20 visible:(BOOL)fp24;
- (void)_setupSubjectField:(struct CGRect *)fp8;
- (void)_setupBodyFieldWithHeaderFrame:(struct CGRect)fp8 enclosingFrame:(struct CGRect)fp24 changingView:(id)fp40 frameToPin:(struct CGRect)fp44 wasSearching:(BOOL)fp60;
- (void)_setContentSizeAppropriately;
- (void)_layoutSubviewsWithActiveRecipientView:(BOOL)fp8 changingView:(id)fp12 toSize:(struct CGSize)fp16;
- (void)getOptionalFieldState:(CDAnonymousStruct1 *)fp8;
- (void)_layoutSubviews:(BOOL)fp8 changingView:(id)fp12 toSize:(struct CGSize)fp16;
- (void)_layoutSubviews:(BOOL)fp8;
- (id)initWithFrame:(struct CGRect)fp8 delegate:(id)fp24;
- (id)navigationBar;
- (id)keyboard;
- (id)retain;
- (void)release;
- (void)dealloc;
- (void)setAutoresizingMask:(unsigned int)fp8;
- (BOOL)endEditing:(BOOL)fp8;
- (BOOL)allowSend;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)fp8;
- (id)hitTest:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;
- (id)toField;
- (id)ccField;
- (id)bccField;
- (id)subjectField;
- (id)fromField;
- (id)bodyField;
- (void)adjustScrollerContentSize;
- (void)composeBodyFieldFrameChanged:(id)fp8;
- (void)composeBodyFieldDidFinishLoadForFrame:(id)fp8;
- (void)navigationBar:(id)fp8 buttonClicked:(int)fp12;
- (void)_fromPickerHideCompleted;
- (void)_adjustScrollerForViewHeight:(float)fp8;
- (void)_fromPickerShowCompleted;
- (void)setPickerVisible:(BOOL)fp8 animate:(BOOL)fp12;
- (void)_keyboardHideCompleted;
- (void)_keyboardAnimationCompleted;
- (void)setKeyboardVisible:(BOOL)fp8 animate:(BOOL)fp12;
- (BOOL)isKeyboardVisible;
- (BOOL)isPickerVisible;
- (void)setAnimationDisabled:(BOOL)fp8;
- (void)scrollerDidScroll:(id)fp8;
- (void)setNavigationBarTitle:(id)fp8;
- (void)setSendTarget:(id)fp8 action:(SEL)fp12;
- (void)setCloseTarget:(id)fp8 action:(SEL)fp12;
- (void)_sendButtonClicked:(id)fp8;
- (void)_closeButtonClicked:(id)fp8;
- (void)setSendEnabled:(BOOL)fp8 closeEnabled:(BOOL)fp12 withDuration:(double)fp16;
- (void)setSendEnabled:(BOOL)fp8;
- (void)_saveFirstResponder;
- (void)_restoreFirstResponder;
- (void)displayAlertSheet:(id)fp8;
- (void)_postSheetKeyboardFadeInFinished;
- (void)dismissAlertSheet:(id)fp8 animate:(BOOL)fp12 willClose:(BOOL)fp16;
- (void)setEnabled:(BOOL)fp8 changingUI:(BOOL)fp12;
- (int)activeAddressField;
- (id)activeRecipientText;
- (void)composeRecipientView:(id)fp8 didChangeSize:(struct CGSize)fp12;
- (void)composeRecipientViewWillBecomeFirstResponder:(id)fp8;
- (void)composeRecipientViewDidResignFirstResponder:(id)fp8;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)fp8;
- (id)composeRecipientView:(id)fp8 composeRecipientForAddress:(id)fp12;
- (id)composeRecipientView:(id)fp8 composeRecipientForRecord:(void *)fp12 identifier:(int)fp16;
- (void)addNameMatches:(id)fp8 toSortedMatches:(id)fp12 andIndices:(id)fp16 withIdentifiers:(struct __CFArray *)fp20 andAddresses:(struct __CFArray *)fp24;
- (void)addMatchingUids:(struct __CFArray *)fp8 toUnsortedMatches:(id)fp12 andIndices:(id)fp16 withIdentifiers:(struct __CFArray *)fp20 andAddresses:(struct __CFArray *)fp24;
- (void)filterInRecentAddresses:(struct __CFArray *)fp8 andNames:(struct __CFArray *)fp12 intoResults:(id *)fp16 removingFromSortedMatches:(id)fp20 indices:(id)fp24 andUnsortedMatches:(id)fp28 indices:(id)fp32;
- (void)composeRecipientView:(id)fp8 textDidChange:(id)fp12;
- (void)filterInDisplayName:(id)fp8 emailAddress:(id)fp12 fromSearchQuery:(id)fp16;
- (void)searchQueryFinished:(id)fp8;
- (void)composeRecipientViewDidFinishEnteringRecipient:(id)fp8;
- (void)composeRecipientView:(id)fp8 requestDeleteRecipientAtIndex:(int)fp12;
- (void)removeFromSuperview;
- (void)composeRecipientViewRequestAddRecipient:(id)fp8;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)fp8;
- (int)numberOfRowsInTable:(id)fp8;
- (id)table:(id)fp8 cellForRow:(int)fp12 column:(id)fp16 reusing:(id)fp20;
- (void)tableSelectionDidChange:(id)fp8;

@end

