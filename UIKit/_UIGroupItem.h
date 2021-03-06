/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _UIGroupItem : NSObject
{
    NSString *_title;
    float offset;
    int _rowCountBeforeGroup;
    int _childCount;
    unsigned int _isRadioGroup:1;
    unsigned int _isLabelGroup:1;
    unsigned int _reserved:30;
}

- (id)initWithTitle:(id)fp8 childCount:(int)fp12 rowCountBeforeGroup:(int)fp16 isRadioGroup:(BOOL)fp20;
- (void)dealloc;
- (int)childCount;
- (id)title;
- (int)rowCountBeforeGroup;
- (int)tableRowForRow:(int)fp8;

@end

