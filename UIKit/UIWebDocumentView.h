/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UITiledView.h>

#import "UIKeyboardInput-Protocol.h"
#import "UIModalViewDelegate-Protocol.h"

@class CALayer, DOMHTMLElement, DOMNode, DOMNode, NSMutableArray, NSTimer, UIAutoscrollTimer, UIInformalDelegate, UIModalView, UITextInputTraits, UITextLoupe, UIView, WebPDFView, WebView;
@protocol UIFormControl;

@interface UIWebDocumentView : UITiledView <UIKeyboardInput, UIModalViewDelegate>
{
    struct WKWindow *_window;
    WebView *_webView;
    id m_parentTextView;
    id _delegate;
    id _textSuggestionDelegate;
    id _editingDelegate;
    float _doubleTapDelay;
    struct CGRect _doubleTapRect;
    struct CGRect _mainDocumentDoubleTapRect;
    struct CGPoint _scrollPoint;
    struct CGPoint _doubleTapStartPosition;
    double _doubleTapStartTime;
    struct CGSize _pendingSize;
    int _orientation;
    UITextLoupe *_textLoupe;
    DOMHTMLElement *_standaloneEditingElement;
    struct CGPoint _mouseDownPoint;
    double _mouseDownTime;
    UIAutoscrollTimer *_autoscrollTimer;
    struct __CFDictionary *_plugInViews;
    CALayer *_contentLayersHostingLayer;
    UITextInputTraits *_traits;
    struct {
        NSMutableArray *all;
        NSMutableArray *html;
        NSMutableArray *javascript;
        NSMutableArray *css;
        NSMutableArray *error;
        NSMutableArray *warning;
        NSMutableArray *tip;
        NSMutableArray *log;
    } _messages;
    struct {
        char isEdited;
        char isTransitioning;
        char allowsUnapprovedFocus;
        char zoomsFocusedFormControl;
        struct CGRect cachedBoundingBox;
        DOMNode<UIFormControl> *element;
        UIInformalDelegate *delegate;
    } _forms;
    struct {
        NSTimer *timer;
        struct CGPoint location;
        char isBlocked;
        char isCancelled;
        char isOnWebThread;
        char isDisplayingHighlight;
        char attemptedClick;
        char isGestureScrolling;
        struct CGPoint gestureScrollPoint;
        struct CGPoint gestureCurrentPoint;
        char hasAttemptedGestureScrolling;
        UIView *candidate;
        char forwardingGuard;
        SEL mouseUpForwarder;
        SEL mouseDraggedForwarder;
        DOMNode *element;
        UIInformalDelegate *delegate;
        UIModalView *imageSheet;
        char allowsImageSheet;
        struct {
            char active;
            char defaultPrevented;
            NSMutableArray *regions;
        } directEvents;
    } _interaction;
    struct {
        WebPDFView *view;
        NSTimer *timer;
    } _pdf;
    struct {
        struct CGSize size;
        float initialScale;
        float minimumScale;
        float maximumScale;
        char allowsUserScaling;
    } _viewportConfigurations[6];
    struct CGSize _minimumSize;
    int _documentType;
    float _documentScale;
    struct CGRect _documentBounds;
    int _enabledGestures;
    unsigned int _customConfigurations;
    unsigned int _webCoreNeedsSetNeedsDisplay:1;
    unsigned int _webCoreNeedsDraw:1;
    unsigned int _mouseDownCount;
    unsigned int _ignoresFocusingMouse:1;
    unsigned int _ignoresKeyEvents:1;
    unsigned int _autoresizes:1;
    unsigned int _scalesToFit:1;
    unsigned int _hasCustomScale:1;
    unsigned int _userScrolled:1;
    unsigned int _pageNeedsReset:1;
    unsigned int _hasScrollPoint:1;
    unsigned int _setNeedsDisplayWasForced:1;
    unsigned int _gesturesDisabled:1;
    unsigned int _doubleTapRectIsReplaced:1;
    unsigned int _standaloneEditableView:1;
    unsigned int _isFieldEditor:1;
    unsigned int _widgetEditingView:1;
    unsigned int _mouseDragged:1;
    unsigned int _textLoupeActive:1;
    unsigned int _mouseReentrancyGuard:1;
    unsigned int _smoothsFonts:1;
    unsigned int _isShowingFullScreenPlugIn:1;
    unsigned int _isSettingRedrawFrame:1;
    unsigned int _needsScrollNotifications:1;
    unsigned int _loadsSynchronously:1;
    unsigned int _detectsPhoneNumbers:1;
    unsigned int _respectsBackgroundColorAlpha:1;
}

+ (Class)layerClass;
- (id)_doubleTapSpeedFromDefaults;
- (void)_restoreViewportSettingsWithSize:(struct CGSize)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
#if 1 // iPhoneOS 3.x
- (void)enableReachability;
#endif
- (void)dealloc;
- (void)release;
- (void)stopLoading:(id)fp8;
- (void)setDelegate:(id)fp8;
- (void)loadRequest:(id)fp8;
- (void)loadHTMLString:(id)fp8 baseURL:(id)fp12;
- (void)loadData:(id)fp8 MIMEType:(id)fp12 textEncodingName:(id)fp16 baseURL:(id)fp20;
- (void)setLoadsSynchronously:(BOOL)fp8;
- (BOOL)loadsSynchronously;
- (id)webView;
- (void)setUserStyleSheet:(id)fp8;
- (void)setDetectsPhoneNumbers:(BOOL)fp8;
- (BOOL)detectsPhoneNumbers;
#if 1 // iPhoneOS 3.x
- (void)setDataDetectorTypes:(unsigned int)fp8;
- (unsigned int)dataDetectorTypes;
#endif
- (void)setRespectsBackgroundColorAlpha:(BOOL)fp8;
- (BOOL)respectsBackgroundColorAlpha;
- (void)setFrame:(struct CGRect)fp8;
- (float)integralScaleForScale:(float)fp8;
- (void)_setDocumentScale:(float)fp8;
- (float)viewportWidth;
- (float)viewportHeight;
- (float)minimumScaleForMinimumSize:(struct CGSize)fp8;
- (float)initialScale;
- (float)minimumScale;
- (void)viewportConfigurationsDidChange:(unsigned int)fp8;
- (void)_setDocumentType:(int)fp8 overrideCustomConfigurations:(BOOL)fp12;
- (void)_setDocumentType:(int)fp8;
- (void)_updateSize;
- (void)_clearDoubleTapRect;
- (void)webView:(id)fp8 didReceiveViewportArguments:(id)fp12 forFrame:(id)fp16;
- (void)webView:(id)fp8 needsScrollNotifications:(id)fp12 forFrame:(id)fp16;
- (BOOL)needsScrollNotifications;
- (void)enclosingScrollerDidScroll;
- (void)webView:(id)fp8 didFinishLoadForFrame:(id)fp12;
- (void)webView:(id)fp8 didCommitLoadForFrame:(id)fp12;
- (void)webView:(id)fp8 didReceiveDocTypeForFrame:(id)fp12;
- (void)_WAKViewSizeDidChange:(id)fp8;
- (void)setEnabledGestures:(int)fp8;
- (int)enabledGestures;
- (struct CGRect)documentBounds;
- (void)setAutoresizes:(BOOL)fp8;
- (void)setMinimumSize:(struct CGSize)fp8;
- (void)setViewportSize:(struct CGSize)fp8 forDocumentTypes:(int)fp16;
- (void)setInitialScale:(float)fp8 forDocumentTypes:(int)fp12;
- (void)setMinimumScale:(float)fp8 forDocumentTypes:(int)fp12;
- (void)setMaximumScale:(float)fp8 forDocumentTypes:(int)fp12;
- (void)setAllowsUserScaling:(BOOL)fp8 forDocumentTypes:(int)fp12;
- (BOOL)_updatesScroller;
- (void)_setScrollerOffset:(struct CGPoint)fp8;
- (void)_restoreScrollPointForce:(BOOL)fp8;
- (void)_resetForNewPage;
- (void)webView:(id)fp8 saveStateToHistoryItem:(id)fp12 forFrame:(id)fp16;
- (void)webView:(id)fp8 restoreStateFromHistoryItem:(id)fp12 forFrame:(id)fp16 force:(BOOL)fp20;
- (BOOL)webView:(id)fp8 shouldScrollToPoint:(struct CGPoint)fp12 forFrame:(id)fp20;
- (struct CGPoint)contentsPointForWebView:(id)fp8;
- (struct CGRect)documentVisibleRectForWebView:(id)fp8;
- (void)_didMoveFromWindow:(id)fp8 toWindow:(id)fp12;
- (BOOL)tileDrawingEnabled;
- (void)_webCoreNeedsDisplay;
- (void)flushDirtyRects;
- (void)forceLayout;
- (void)layoutSubviews;
- (void)setNeedsDisplayInRect:(struct CGRect)fp8;
- (void)setNeedsDisplay;
- (void)layoutBeforeDraw;
- (void)drawRect:(struct CGRect)fp8;
- (void)setSmoothsFonts:(BOOL)fp8;
- (void)setDrawsBackground:(BOOL)fp8;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (void)setIgnoresFocusingMouse:(BOOL)fp8;
- (void)setIgnoresKeyEvents:(BOOL)fp8;
- (void)_didScroll;
- (void)_sendInternalEvent:(struct __GSEvent *)fp8;
- (struct CGPoint)_viewportLocationForEvent:(struct __GSEvent *)fp8;
- (BOOL)_isSubviewOfPlugInView:(id)fp8;
- (id)hitTest:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;
- (void)clickAfterDelay:(float)fp8;
- (void)setDoubleTapDelay:(float)fp8;
- (float)doubleTapDelay;
- (void)keyUp:(struct __GSEvent *)fp8;
- (void)keyDown:(struct __GSEvent *)fp8;
- (void)gestureStarted:(struct __GSEvent *)fp8;
- (void)gestureChanged:(struct __GSEvent *)fp8;
- (void)gestureEnded:(struct __GSEvent *)fp8;
- (void)_notifyPlugInViewsOfScaleChange;
- (void)_notifyContentHostingLayersOfScaleChange;
- (id)contentsHostingLayerForWebView:(id)fp8;
- (void)zoomToScale:(float)fp8;
- (void)_reshapePlugInViews;
- (void)redrawScaledDocument;
- (void)setOrientation:(int)fp8;
- (struct CGPoint)_centeredScrollPointForPoint:(struct CGPoint)fp8 scale:(float)fp16;
- (struct CGPoint)_doubleTapScrollPointForRect:(struct CGRect)fp8 scale:(float)fp24 event:(struct __GSEvent *)fp28;
- (float)_doubleTapScaleForSize:(float)fp8 isWidth:(BOOL)fp12;
- (BOOL)_doubleTapZoomToRect:(struct CGRect)fp8 scale:(float)fp24 fromEvent:(struct __GSEvent *)fp28;
- (void)doubleTap:(struct __GSEvent *)fp8;
- (struct CGRect)doubleTapRect;
- (BOOL)doubleTapRectIsReplaced;
- (void)setIsStandaloneEditableView:(BOOL)fp8;
- (BOOL)isStandaloneEditableView;
- (void)setStandaloneEditingElement:(id)fp8;
- (id)standaloneEditingElement;
- (void)setIsWidgetEditingView:(BOOL)fp8;
- (BOOL)isWidgetEditingView;
- (BOOL)updateKeyboardStateOnResponderChanges;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (id)_responderForBecomeFirstResponder;
- (BOOL)makeWKFirstResponder;
- (void)ensureSelection;
- (id)_parentTextView;
- (void)_setParentTextView:(id)fp8;
- (BOOL)isFieldEditor;
- (BOOL)_editable;
- (void)_setEditable:(BOOL)fp8;
- (id)delegate;
- (void)deleteBackward;
- (void)insertText:(id)fp8;
- (void)replaceCurrentWordWithText:(id)fp8;
- (void)clearPlaceholder;
- (void)setupPlaceholderTextIfNeeded;
- (void)setMarkedText:(id)fp8;
- (void)confirmMarkedText:(id)fp8;
- (id)markedText;
- (unsigned short)characterInRelationToCaretSelection:(int)fp8;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterAfterCaretSelection;
- (id)fontForCaretSelection;
- (id)textColorForCaretSelection;
- (struct CGRect)autocorrectionRect;
- (struct CGRect)rectForNSRange:(struct _NSRange)fp8;
- (struct CGRect)rectContainingCaretSelection;
- (id)wordRangeContainingCaretSelection;
- (id)wordContainingCaretSelection;
- (id)wordInRange:(id)fp8;
- (void)expandSelectionToStartOfWordContainingCaretSelection;
- (int)wordOffsetInRange:(id)fp8;
- (BOOL)spaceFollowsWordInRange:(id)fp8;
- (id)previousNGrams:(unsigned int)fp8;
- (struct _NSRange)selectionRange;
- (id)selectedDOMRange;
- (void)setSelectedDOMRange:(id)fp8 affinityDownstream:(BOOL)fp12;
- (id)rangeByMovingCurrentSelection:(int)fp8;
- (id)rangeByExtendingCurrentSelection:(int)fp8;
- (BOOL)hasSelection;
- (BOOL)selectionAtDocumentStart;
- (BOOL)selectionAtSentenceStart;
- (BOOL)selectionAtWordStart;
- (BOOL)rangeAtSentenceStart:(id)fp8;
- (void)markCurrentWordForAutoCorrection:(id)fp8 correction:(id)fp12;
- (void)moveBackward:(unsigned int)fp8;
- (void)moveForward:(unsigned int)fp8;
- (void)selectAll;
- (void)setText:(id)fp8;
- (id)text;
- (BOOL)hasText;
- (void)updateSelectionWithPoint:(struct CGPoint)fp8;
- (void)setCaretChangeListener:(id)fp8;
- (struct CGRect)caretRect;
- (struct CGRect)convertCaretRect:(struct CGRect)fp8;
- (id)keyboardInputView;
- (BOOL)isShowingPlaceholder;
- (id)implementationWebView;
- (BOOL)keyboardInput:(id)fp8 shouldReplaceTextInRange:(struct _NSRange)fp12 replacementText:(id)fp20;
- (BOOL)keyboardInput:(id)fp8 shouldInsertText:(id)fp12 isMarkedText:(BOOL)fp16;
- (BOOL)keyboardInputShouldDelete:(id)fp8;
- (BOOL)keyboardInputChanged:(id)fp8;
- (void)keyboardInputChangedSelection:(id)fp8;
- (id)keyboardInputOverlayContainer:(id)fp8;
- (id)automaticallySelectedOverlay;
- (void)setBottomBufferHeight:(float)fp8;
- (int)keyboardInput:(id)fp8 positionForAutocorrection:(id)fp12;
- (BOOL)isProxyFor:(id)fp8;
- (BOOL)requiresKeyEvents;
- (void)handleKeyEvent:(struct __GSEvent *)fp8;
- (void)setWKWindowIsSuspendedWindow:(BOOL)fp8;
- (id)webView:(id)fp8 plugInViewWithArguments:(id)fp12 fromPlugInPackage:(id)fp16;
- (void)webView:(id)fp8 willShowFullScreenForPlugInView:(id)fp12;
- (void)webView:(id)fp8 didHideFullScreenForPlugInView:(id)fp12;
- (void)didRemovePlugInView:(id)fp8;
- (BOOL)isShowingFullScreenPlugInUI;
- (id)textInputTraits;
- (void)forwardInvocation:(id)fp8;
- (id)methodSignatureForSelector:(SEL)fp8;
- (void)takeTraitsFrom:(id)fp8;
#if 1 // iPhoneOS 3.x
- (void)useSelectionAssistantWithMode:(int)fp8;
#endif

#if 1 // iPhoneOS 3.2
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;
- (void)webViewDidLayout:(id)webView;
- (void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;
- (void)webView:(id)view attachRootLayer:(id)layer;
- (void)webView:(id)view willAddPlugInView:(id)view2;
- (void)webViewDidPreventDefaultForEvent:(id)webView;
#endif

#if 1 // UIWebBrowserView
- (void)webView:(id)view willCloseFrame:(id)frame;
- (void)webView:(id)view didFinishDocumentLoadForFrame:(id)frame;
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;
- (void)webViewFormEditedStatusHasChanged:(id)changed;
- (void)webView:(id)view formStateDidFocusNode:(id)formState;
- (void)webView:(id)view formStateDidBlurNode:(id)formState;
#endif

@end

