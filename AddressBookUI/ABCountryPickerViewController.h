/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIViewController.h"

@class ABCountryCodePicker, ABEditorModel;

@interface ABCountryPickerViewController : UIViewController
{
    ABCountryCodePicker *_countryPicker;
    ABEditorModel *_editorModel;
    id _delegate;
}

- (id)initWithEditedItem:(id)fp8;
- (void)dealloc;
- (void)setDelegate:(id)fp8;
- (id)countryCodePicker;
- (void)countryCodePicker:(id)fp8 endedWithSelectionConfirmed:(BOOL)fp12 animate:(BOOL)fp16;
- (void)loadView;
- (void)viewWillAppear:(BOOL)fp8;

@end

