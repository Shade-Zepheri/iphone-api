/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

#import "NSCoding-Protocol.h"

@class UIPickerView;

@interface UIDatePicker : UIControl <NSCoding>
{
    UIPickerView *_pickerView;
}

- (void)_insertPickerView;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)initWithCoder:(id)fp8;
- (void)_populateArchivedSubviews:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (int)datePickerMode;
- (void)setDatePickerMode:(int)fp8;
- (id)locale;
- (void)setLocale:(id)fp8;
- (id)timeZone;
- (void)setTimeZone:(id)fp8;
- (id)calendar;
- (void)setCalendar:(id)fp8;
- (id)date;
- (void)setDate:(id)fp8;
- (id)minimumDate;
- (void)setMinimumDate:(id)fp8;
- (id)maximumDate;
- (void)setMaximumDate:(id)fp8;
- (double)countDownDuration;
- (void)setCountDownDuration:(double)fp8;
- (int)minuteInterval;
- (void)setMinuteInterval:(int)fp8;
- (void)setDate:(id)fp8 animated:(BOOL)fp12;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;

@end

