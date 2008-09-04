/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIScrollView.h>
#import <UIKit/UITableViewDataSource-Protocol.h>
#import <Foundation/NSRange.h>

@class NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, UIColor, UITableViewCell, UIView;

@interface UITableView : UIScrollView <NSCoding>
{
    int _style;
    id <UITableViewDataSource> _dataSource;
    id _rowData;
    float _rowHeight;
    float _sectionHeaderHeight;
    float _sectionFooterHeight;
    struct _NSRange _visibleRows;
    NSMutableArray *_visibleCells;
    NSIndexPath *_firstResponderIndexPath;
    UITableViewCell *_firstResponderCell;
    NSMutableDictionary *_reusableTableCells;
    UITableViewCell *_topSeparatorCell;
    id _topSeparator;
    NSMutableArray *_extraSeparators;
    NSMutableDictionary *_visibleHeaderViews;
    NSMutableDictionary *_visibleFooterViews;
    NSMutableArray *_reusableHeaderViews;
    NSMutableArray *_reusableFooterViews;
    NSMutableArray *_reusableTransparentHeaderViews;
    NSMutableArray *_reusableTransparentFooterViews;
    BOOL _allowsMultipleSelection;
    int _selectedSection;
    int _selectedRow;
    int _lastSelectedSection;
    int _lastSelectedRow;
    int _swipeToDeleteSection;
    int _swipeToDeleteRow;
    NSIndexPath *_pendingSelectionIndexPath;
    id _deleteAnimationSupport;
    id _reorderingSupport;
    UIView *_index;
    UIView *_tableHeaderBackgroundView;
    UIView *_tableHeaderView;
    UIView *_tableFooterView;
    id _countLabel;
    int _tableReloadingSuspendedCount;
    int _tableDisplaySuspendedCount;
    int _sectionIndexMinimumDisplayRowCount;
    int _itemCountFooterMinimumDisplayRowCount;
    struct __CFDictionary *_piecesForCell;
    NSMutableArray *_insertItems;
    NSMutableArray *_deleteItems;
    UIColor *_separatorColor;
    NSArray *_defaultSectionIndexTitles;
    struct {
        unsigned int dataSourceNumberOfRowsInSection:1;
        unsigned int dataSourceCellForRow:1;
        unsigned int dataSourceNumberOfSectionsInTableView:1;
        unsigned int dataSourceTitleForHeaderInSection:1;
        unsigned int dataSourceTitleForFooterInSection:1;
        unsigned int dataSourceCommitEditingStyle:1;
        unsigned int dataSourceSectionIndexTitlesForTableView:1;
        unsigned int dataSourceSectionForSectionIndexTitle:1;
        unsigned int dataSourceCanEditRow:1;
        unsigned int dataSourceCanMoveRow:1;
        unsigned int delegateEditingStyleForRowAtIndexPath:1;
        unsigned int delegateShouldIndentWhileEditing:1;
        unsigned int dataSourceMoveRow:1;
        unsigned int delegateCellForRow:1;
        unsigned int delegateWillDisplayCell:1;
        unsigned int delegateHeightForRow:1;
        unsigned int delegateHeightForSectionHeader:1;
        unsigned int delegateHeightForSectionFooter:1;
        unsigned int delegateViewForHeaderInSection:1;
        unsigned int delegateViewForFooterInSection:1;
        unsigned int delegateDisplayedItemCountForRowCount:1;
        unsigned int delegateDisplayStringForRowCount:1;
        unsigned int delegateAccessoryTypeForRow:1;
        unsigned int delegateAccessoryButtonTappedForRow:1;
        unsigned int delegateWillSelectRow:1;
        unsigned int delegateSelectionDidChange:1;
        unsigned int delegateWillBeginEditing:1;
        unsigned int delegateDidEndEditing:1;
        unsigned int delegateWillMoveToRow:1;
        unsigned int delegateIndentationLevelForRow:1;
        unsigned int style:1;
        unsigned int separatorStyle:3;
        unsigned int isEditing:1;
        unsigned int scrollsToSelection:1;
        unsigned int reloadSkippedDuringSuspension:1;
        unsigned int updating:1;
        unsigned int displaySkippedDuringSuspension:1;
        unsigned int needsReload:1;
        unsigned int updatingVisibleCellsManually:1;
        unsigned int scheduledUpdateVisibleCells:1;
        unsigned int scheduledUpdateVisibleCellsFrames:1;
        unsigned int warnForForcedCellUpdateDisabled:1;
        unsigned int delaySendingSelectionChanged:1;
        unsigned int displayTopSeparator:1;
        unsigned int countStringInsignificantRowCount:4;
        unsigned int needToAdjustExtraSeparators:1;
        unsigned int ignoreDragSwipe:1;
        unsigned int ignoreTouchSelect:1;
        unsigned int lastHighlightedRowActive:1;
        unsigned int reloading:1;
        unsigned int allowsSelectionDuringEditing:1;
        unsigned int showsSelectionImmediatelyOnTouchBegin:1;
        unsigned int indexHidden:1;
        unsigned int defaultShowsHorizontalScrollIndicator:1;
        unsigned int defaultShowsVerticalScrollIndicator:1;
        unsigned int sectionIndexTitlesLoaded:1;
    } _tableFlags;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (void)_setupTableViewCommon;
- (id)initWithFrame:(struct CGRect)fp8 style:(int)fp24;
- (void)_populateArchivedSubviews:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (void)dealloc;
- (int)style;
- (void)setDataSource:(id)fp8;
- (id)dataSource;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setRowHeight:(float)fp8;
- (float)rowHeight;
- (void)setSectionHeaderHeight:(float)fp8;
- (float)sectionHeaderHeight;
- (void)setSectionFooterHeight:(float)fp8;
- (float)sectionFooterHeight;
- (void)_sendWillBeginEditingForIndexPath:(id)fp8;
- (void)_sendDidEndEditingForIndexPath:(id)fp8;
- (void)reloadData;
- (void)noteNumberOfRowsChanged;
- (int)globalRowForRowAtIndexPath:(id)fp8;
- (id)indexPathForRowAtGlobalRow:(int)fp8;
- (void)setIndexHidden:(BOOL)fp8 animated:(BOOL)fp12;
- (BOOL)isIndexHidden;
- (struct CGRect)indexFrame;
- (int)numberOfSections;
- (int)numberOfRowsInSection:(int)fp8;
- (struct CGRect)rectForSection:(int)fp8;
- (struct CGRect)rectForHeaderInSection:(int)fp8;
- (struct CGRect)rectForFooterInSection:(int)fp8;
- (struct CGRect)rectForRowAtIndexPath:(id)fp8;
- (id)indexPathForRowAtPoint:(struct CGPoint)fp8;
- (id)indexPathForCell:(id)fp8;
- (id)indexPathsForRowsInRect:(struct CGRect)fp8;
- (id)cellForRowAtIndexPath:(id)fp8;
- (id)visibleCells;
- (id)indexPathsForVisibleRows;
- (void)scrollToRowAtIndexPath:(id)fp8 atScrollPosition:(int)fp12 animated:(BOOL)fp16;
- (void)scrollToNearestSelectedRowAtScrollPosition:(int)fp8 animated:(BOOL)fp12;
- (void)beginUpdates;
- (void)endUpdates;
- (void)insertSections:(id)fp8 withRowAnimation:(int)fp12;
- (void)deleteSections:(id)fp8 withRowAnimation:(int)fp12;
- (void)insertRowsAtIndexPaths:(id)fp8 withRowAnimation:(int)fp12;
- (void)deleteRowsAtIndexPaths:(id)fp8 withRowAnimation:(int)fp12;
- (void)setAllowsSelectionDuringEditing:(BOOL)fp8;
- (BOOL)allowsSelectionDuringEditing;
- (id)indexPathForSelectedRow;
- (void)_userSelectRowAtIndexPath:(id)fp8 animated:(BOOL)fp12 scrollPosition:(int)fp16;
- (void)selectRowAtIndexPath:(id)fp8 animated:(BOOL)fp12 scrollPosition:(int)fp16;
- (void)deselectRowAtIndexPath:(id)fp8 animated:(BOOL)fp12;
- (void)setShowsSelectionImmediatelyOnTouchBegin:(BOOL)fp8;
- (BOOL)showsSelectionImmediatelyOnTouchBegin;
- (id)defaultSectionIndexTitlesForCurrentLocale;
- (void)setSeparatorStyle:(int)fp8;
- (int)separatorStyle;
- (void)setSeparatorColor:(id)fp8;
- (id)separatorColor;
- (void)setTableHeaderView:(id)fp8;
- (id)tableHeaderView;
- (void)setTableFooterView:(id)fp8;
- (id)tableFooterView;
- (id)dequeueReusableCellWithIdentifier:(id)fp8;
- (BOOL)canHandleSwipes;
- (int)swipe:(int)fp8 withEvent:(struct __GSEvent *)fp12;
- (BOOL)_canSelectRowContainingHitView:(id)fp8;
- (void)_tableViewDeferredTouchesBegan:(id)fp8;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesCancelled:(id)fp8 withEvent:(id)fp12;
- (id)_createTouchesWithMouseEvent:(struct __GSEvent *)fp8 phase:(int)fp12;
- (void)mouseDown:(struct __GSEvent *)fp8;
- (void)mouseDragged:(struct __GSEvent *)fp8;
- (void)mouseUp:(struct __GSEvent *)fp8;
- (id)hitTest:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;
- (id)hitTest:(struct CGPoint)fp8 withEvent:(id)fp16;
- (BOOL)touchesShouldCancelInContentView:(id)fp8;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)fp8;
- (void)setBounds:(struct CGRect)fp8;
- (void)setEditing:(BOOL)fp8;
- (BOOL)isEditing;
- (void)setEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setShowsHorizontalScrollIndicator:(BOOL)fp8;
- (void)setShowsVerticalScrollIndicator:(BOOL)fp8;
- (int)sectionIndexMinimumDisplayRowCount;
- (void)setSectionIndexMinimumDisplayRowCount:(int)fp8;

@end

