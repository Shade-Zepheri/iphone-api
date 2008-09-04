/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UILabel.h>

@interface UIDateLabel : UILabel
{
    double _date;
    int _dateKey;
}

+ (id)defaultFont;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (int)_dateKey;
- (void)_invalidateDateKey;
- (void)setFont:(id)fp8;
- (void)setFontWithoutInvalidation:(id)fp8;
- (void)_updateDateStrings;
- (id)text;
- (id)font;
- (id)timeDesignator;
- (void)sizeToFit;
- (void)setDate:(id)fp8;
- (void)setTimeInterval:(double)fp8;
- (double)timeInterval;
- (id)timeDesignatorFont;
- (void)drawTextInRect:(struct CGRect)fp8;
- (void)drawRect:(struct CGRect)fp8;

@end

