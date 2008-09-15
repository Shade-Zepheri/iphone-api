/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class NSMutableArray, UITextLabel;

@interface LabelledAtomList : UIView
{
    NSMutableArray *_addressAtoms;
    UITextLabel *_label;
    id _delegate;
    float _firstLineWidth;
    unsigned int _needsReflow:1;
}

- (id)initWithLabel:(id)fp8 totalWidth:(float)fp12 firstLineWidth:(float)fp16 addresses:(id)fp20 arePhoneNumbers:(BOOL)fp24;
- (void)dealloc;
- (void)setDelegate:(id)fp8;
- (void)setFirstLineWidth:(float)fp8;
- (void)addressAtom:(id)fp8 displayStringDidChange:(id)fp12;
- (void)_setNeedsReflow;
- (void)_reflow;
- (void)setAddressAtomTarget:(id)fp8 action:(SEL)fp12;
- (id)labelText;
- (struct CGRect)labelFrame;
- (id)atomDisplayStrings;
- (void)setAtomAlpha:(float)fp8;

@end
