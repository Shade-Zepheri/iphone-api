/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIPickerTableCell.h"

@interface ClickablePickerTableCell : UIPickerTableCell
{
    unsigned int _row;
    id _delegate;
}

- (id)initWithFrame:(struct CGRect)fp8 andRow:(unsigned int)fp24;
- (void)setSelected:(BOOL)fp8 withFade:(BOOL)fp12;
- (void)setDelegate:(id)fp8;

@end
