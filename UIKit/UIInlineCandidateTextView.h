/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class InlineCandidateCell, NSArray, NSMutableArray;

@interface UIInlineCandidateTextView : UIView
{
    int m_type;
    int m_edgeType;
    BOOL m_animating;
    NSMutableArray *_candidateCellArray;
    NSArray *_candidates;
    id _target;
    SEL _action;
    unsigned int _selectedItem;
    InlineCandidateCell *_currentlyPushedItem;
    BOOL _showingArrow;
    BOOL _arrowHighlighted;
}

- (id)initWithFrame:(struct CGRect)fp8 candidates:(id)fp24 type:(int)fp28 maxScreenWidth:(float)fp32;
- (void)dealloc;
- (int)edgeType;
- (int)textEffectsVisibilityLevel;
- (void)setEdgeType:(int)fp8;
- (void)setAnimating:(BOOL)fp8;
- (void)_cellSelected:(id)fp8;
- (void)setTarget:(id)fp8 action:(SEL)fp12;
- (float)_layoutCandidates:(id)fp8 maxCount:(int)fp12 height:(float)fp16 maxScreenWidth:(float)fp20;
- (unsigned int)numberOfShownItems;
- (BOOL)_arrowHighlighted;
- (void)showHighlightedArrow;
- (void)setSelectedItem:(unsigned int)fp8;
- (unsigned int)selectedItem;
- (void)drawRect:(struct CGRect)fp8;
- (id)findCell:(struct CGPoint)fp8;
- (void)redrawArrow;
- (void)mouseDown:(struct __GSEvent *)fp8;
- (void)mouseDragged:(struct __GSEvent *)fp8;
- (void)mouseUp:(struct __GSEvent *)fp8;
- (BOOL)pointInside:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;
- (BOOL)pointInside:(struct CGPoint)fp8 withEvent:(id)fp16;
- (id)hitTest:(struct CGPoint)fp8 withEvent:(id)fp16;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (BOOL)needsWebDocumentViewEventsDirectly;

@end

