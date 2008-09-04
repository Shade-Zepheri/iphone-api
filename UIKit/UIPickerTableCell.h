/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIImageAndTextTableCell.h>

@interface UIPickerTableCell : UIImageAndTextTableCell
{
    unsigned int _checked:1;
    unsigned int _reserved:31;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (void)updateHighlightColors;
- (void)setChecked:(BOOL)fp8;
- (void)layoutSubviews;
- (BOOL)isChecked;

@end

