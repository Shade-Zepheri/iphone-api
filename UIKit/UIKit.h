#ifndef UIKIT_UIKIT_H_
#define UIKIT_UIKIT_H_

@class NSString;

#import <Foundation/NSObjCRuntime.h>
#import <GraphicsServices/GraphicsServices.h>

/*XXX:*/typedef struct {
    float top;
    float left;
    float bottom;
    float right;
} CDAnonymousStruct2;

/*XXX:*/typedef struct {
    unsigned int numberOfRows:7;
    unsigned int delegateAlertSheetButtonClicked:1;
    unsigned int delegateDidPresentAlertSheet:1;
    unsigned int delegateDidDismissAlertSheet:1;
    unsigned int hideButtonBar:1;
    unsigned int alertStyle:3;
    unsigned int dontDimBackground:1;
    unsigned int dismissSuspended:1;
    unsigned int dontBlockInteraction:1;
    unsigned int sheetWasPoppedUp:1;
    unsigned int animating:1;
    unsigned int hideWhenDoneAnimating:1;
    unsigned int layoutWhenDoneAnimating:1;
    unsigned int titleMaxLineCount:2;
    unsigned int bodyTextMaxLineCount:3;
    unsigned int runsModal:1;
    unsigned int runningModal:1;
    unsigned int addedTextView:1;
    unsigned int addedTableShadows:1;
    unsigned int showOverSBAlerts:1;
    unsigned int showMinTableContent:1;
    unsigned int bodyTextTruncated:1;
    unsigned int orientation:3;
    unsigned int delegateBodyTextAlignment:1;
    unsigned int delegateClickedButtonAtIndex:1;
    unsigned int delegateClickedButtonAtIndex2:1;
    unsigned int delegateCancel:1;
    unsigned int delegateCancel2:1;
    unsigned int delegateWillPresent:1;
    unsigned int delegateWillPresent2:1;
    unsigned int delegateDidPresent:1;
    unsigned int delegateDidPresent2:1;
    unsigned int delegateWillDismiss:1;
    unsigned int delegateWillDismiss2:1;
    unsigned int delegateDidDismiss:1;
    unsigned int delegateDidDismiss2:1;
} CDAnonymousStruct7;

typedef enum {
    UIBarButtonItemStylePlain,
    UIBarButtonItemStyleBordered,
    UIBarButtonItemStyleDone,
} UIBarButtonItemStyle;

typedef enum {
    UIBarStyleDefault,
    UIBarStyleBlackOpaque,
    UIBarStyleBlackTranslucent,
} UIBarStyle;

typedef enum {
    UIButtonTypeCustom,
    UIButtonTypeRoundedRect,
    UIButtonTypeDetailDisclosure,
    UIButtonTypeInfoLight,
    UIButtonTypeInfoDark,
    UIButtonTypeContactAdd,
} UIButtonType;

enum {
    UIControlEventTouchDown           = 1 <<  0,
    UIControlEventTouchDownRepeat     = 1 <<  1,
    UIControlEventTouchDragInside     = 1 <<  2,
    UIControlEventTouchDragOutside    = 1 <<  3,
    UIControlEventTouchDragEnter      = 1 <<  4,
    UIControlEventTouchDragExit       = 1 <<  5,
    UIControlEventTouchUpInside       = 1 <<  6,
    UIControlEventTouchUpOutside      = 1 <<  7,
    UIControlEventTouchCancel         = 1 <<  8,
    UIControlEventValueChanged        = 1 << 12,

    UIControlEventEditingDidBegin     = 1 << 16,
    UIControlEventEditingChanged      = 1 << 17,
    UIControlEventEditingDidEnd       = 1 << 18,
    UIControlEventEditingDidEndOnExit = 1 << 19,

    UIControlEventAllTouchEvents      = 0x00000fff,
    UIControlEventAllEditingEvents    = 0x000f0000,
    UIControlEventApplicationReserved = 0x0f000000,
    UIControlEventSystemReserved      = 0xf0000000,
    UIControlEventAllEvents           = 0xffffffff,
}; typedef NSUInteger UIControlEvents;

enum {
    UIControlStateNormal      = 0,
    UIControlStateHighlighted = 1 << 0,
    UIControlStateDisabled    = 1 << 1,
    UIControlStateSelected    = 1 << 2,
    UIControlStateApplication = 0x00ff0000,
    UIControlStateReserved    = 0xff000000,
}; typedef NSUInteger UIControlState;

typedef enum {
    UIDeviceOrientationUnknown,
    UIDeviceOrientationPortrait,
    UIDeviceOrientationPortraitUpsideDown,
    UIDeviceOrientationLandscapeLeft,
    UIDeviceOrientationLandscapeRight,
    UIDeviceOrientationFaceUp,
    UIDeviceOrientationFaceDown,
} UIDeviceOrientation;

typedef enum {
    UIInterfaceOrientationPortrait           = UIDeviceOrientationPortrait,
    UIInterfaceOrientationPortraitUpsideDown = UIDeviceOrientationPortraitUpsideDown,
    UIInterfaceOrientationLandscapeLeft      = UIDeviceOrientationLandscapeRight,
    UIInterfaceOrientationLandscapeRight     = UIDeviceOrientationLandscapeLeft,
} UIInterfaceOrientation;

typedef enum {
    UINavigationButtonStyleNormal,
    UINavigationButtonStyleBack,
    UINavigationButtonStyleHighlighted,
    UINavigationButtonStyleDestructive
} UINavigationButtonStyle;

typedef enum {
    UITableViewCellEditingStyleNone,
    UITableViewCellEditingStyleDelete,
    UITableViewCellEditingStyleInsert
} UITableViewCellEditingStyle;

typedef enum {
    UITableViewCellSeparatorStyleNone,
    UITableViewCellSeparatorStyleSingleLine
} UITableViewCellSeparatorStyle;

typedef enum {
    UITableViewRowAnimationFade,
    UITableViewRowAnimationRight,
    UITableViewRowAnimationLeft,
    UITableViewRowAnimationTop,
    UITableViewRowAnimationBottom,
} UITableViewRowAnimation;

typedef enum {
    UITextAlignmentLeft   = 0,
    UITextAlignmentCenter = 1,
    UITextAlignmentRight  = 2,
} UITextAlignment;

typedef enum {
    UITransitionNone           = 0,
    UITransitionPushFromRight  = 1,
    UITransitionPushFromLeft   = 2,
    UITransitionPushFromBottom = 3,
    UITransitionFade           = 6,
    UITransitionPushFromTop    = 7,
} UITransition;

typedef enum {
    UIViewAnimationCurveEaseInOut,
    UIViewAnimationCurveEaseIn,
    UIViewAnimationCurveEaseOut,
    UIViewAnimationCurveLinear,
} UIViewAnimationCurve;

enum {
    UIViewAutoresizingNone                 = 0,
    UIViewAutoresizingFlexibleLeftMargin   = 1 << 0,
    UIViewAutoresizingFlexibleWidth        = 1 << 1,
    UIViewAutoresizingFlexibleRightMargin  = 1 << 2,
    UIViewAutoresizingFlexibleTopMargin    = 1 << 3,
    UIViewAutoresizingFlexibleHeight       = 1 << 4,
    UIViewAutoresizingFlexibleBottomMargin = 1 << 5,
}; typedef NSUInteger UIViewAutoresizing;

#import <UIKit/UIAlertView.h>
#import <UIKit/UIAnimator.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIBarButtonItem.h>
#import <UIKit/UIBezierPath.h>
#import <UIKit/UIBezierPath-UIInternal.h>
#import <UIKit/UIButton.h>
#import <UIKit/UIColor.h>
#import <UIKit/UIColor-UIColorSystemColors.h>
#import <UIKit/UIDevice.h>
#import <UIKit/UIFieldEditor.h>
#import <UIKit/UIFrameAnimation.h>
#import <UIKit/UIFont.h>
#import <UIKit/UIHardware.h>
#import <UIKit/UIFieldEditor.h>
#import <UIKit/UIKeyboard.h>
#import <UIKit/UIKeyboardImpl.h>
#import <UIKit/UIImage.h>
#import <UIKit/UIImage-UIImageInternal.h>
#import <UIKit/UIImage-UIImagePrivate.h>
#import <UIKit/UIImageAndTextTableCell.h>
#import <UIKit/UIImageView.h>
#import <UIKit/UIKeyboard.h>
#import <UIKit/UIKeyboardImpl.h>
#import <UIKit/UIModalView.h>
#import <UIKit/UIModalView-Private.h>
#import <UIKit/UINavigationBar.h>
#import <UIKit/UINavigationButton.h>
#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationItem.h>
#import <UIKit/UIPreferencesTable.h>
#import <UIKit/UIPreferencesTableCell.h>
#import <UIKit/UIProgressBar.h>
#import <UIKit/UIProgressHUD.h>
#import <UIKit/UIProgressIndicator.h>
#import <UIKit/UIPushButton.h>
#import <UIKit/UIScreen.h>
#import <UIKit/UISearchField.h>
#import <UIKit/UISectionList.h>
#import <UIKit/UISimpleTableCell.h>
#import <UIKit/_UISwitchSlider.h>
#import <UIKit/UITableCell.h>
#import <UIKit/UITableColumn.h>
#import <UIKit/UITableView.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDelegate-Protocol.h>
#import <UIKit/UITextField.h>
#import <UIKit/UITextInputTraits.h>
#import <UIKit/UITextLabel.h>
#import <UIKit/UITextView.h>
#import <UIKit/UIThreePartButton.h>
#import <UIKit/UIToolbar.h>
#import <UIKit/UITransitionView.h>
#import <UIKit/UIView-Animation.h>
#import <UIKit/UIView-Geometry.h>
#import <UIKit/UIView-Gestures.h>
#import <UIKit/UIView-Hierarchy.h>
#import <UIKit/UIView-Rendering.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebDocumentView.h>
#import <UIKit/UIWebDocumentView-Forms.h>
#import <UIKit/UIWebView.h>
#import <UIKit/UIWindow.h>

#import <UIKit/NSIndexPath-UITableView.h>
#import <UIKit/NSString-UIStringDrawing.h>

#import <CoreGraphics/CoreGraphics.h>

#ifdef __cplusplus
extern "C" {
#endif

int UIApplicationMain(int argc, char *argv[], NSString *principalClassName, NSString *delegateClassName);

CGContextRef UIGraphicsGetCurrentContext(void);
UIWindow *UIWindowFindWithWindowRef(GSWindowRef window);

void UIApplicationUseLegacyEvents(BOOL use);
void UIKeyboardEnableAutomaticAppearance(void);
void UIKeyboardDisableAutomaticAppearance(void);


#ifdef __cplusplus
}
#endif

extern NSString * const UIKeyboardWillShowNotification;
extern NSString * const UIKeyboardDidShowNotification;
extern NSString * const UIKeyboardWillHideNotification;
extern NSString * const UIKeyboardDidHideNotification;
extern NSString * const UIKeyboardCenterBeginUserInfoKey;
extern NSString * const UIKeyboardCenterEndUserInfoKey;
extern NSString * const UIKeyboardBoundsUserInfoKey;

#endif//UIKIT_UIKIT_H_
