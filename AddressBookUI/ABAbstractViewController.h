/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIViewController.h"

@class ABModel;

@interface ABAbstractViewController : UIViewController
{
    ABModel *_model;
}

- (id)initWithModel:(id)fp8;
- (void)dealloc;
- (void)setParentViewController:(id)fp8;
- (struct CGSize)contentSize;
- (id)peoplePickerNavigationController;
- (id)model;
- (int)behavior;
- (void)updateNavigationButtons;

@end

