/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIImageAndTextTableCell.h>

@class UITextLabel;

@interface LibraryTableCell : UIImageAndTextTableCell
{
    UITextLabel *_countLabel;
}

+ (struct __GSFont *)defaultTitleFont;
- (id)initWithSize:(struct CGSize)fp8 value:(id)fp16 image:(id)fp20;
- (void)dealloc;
- (struct CGPoint)iconInset;
- (void)updateHighlightColors;
- (void)layoutSubviews;
- (void)setPhotoCount:(int)fp8;

@end
