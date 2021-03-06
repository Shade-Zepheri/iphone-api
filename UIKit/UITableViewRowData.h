/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSIndexPath, UISectionRowData, UITableView;

@interface UITableViewRowData : NSObject <NSCopying>
{
    UITableView *_tableView;
    int _numSections;
    int _sectionRowDataCapacity;
    UISectionRowData **_sectionRowData;
    float _minimumRowHeight;
    float _tableViewWidth;
    float _tableHeaderHeight;
    float _tableFooterHeight;
    NSIndexPath *_reorderedIndexPath;
    float _reorderedRowHeight;
}

- (id)initWithTableView:(id)fp8;
- (void)tableViewWidthDidChangeToWidth:(float)fp8;
- (void)tableHeaderHeightDidChangeToHeight:(float)fp8;
- (void)tableFooterHeightDidChangeToHeight:(float)fp8;
- (void)dealloc;
- (void)ensureAllSectionsAreValid;
- (void)invalidateAllSections;
- (void)invalidateSection:(int)fp8;
- (void)insertSections:(id)fp8;
- (void)deleteSections:(id)fp8;
- (void)insertRowsAtIndexPaths:(id)fp8;
- (void)deleteRowsAtIndexPaths:(id)fp8;
- (id)reorderedIndexPath;
- (void)setReorderedIndexPath:(id)fp8;
- (id)targetIndexPathForPoint:(struct CGPoint)fp8;
- (void)moveRowAtIndexPathFrom:(id)fp8 toIndexPath:(id)fp12;
- (void)addReorderGapFromIndexPath:(id)fp8;
- (void)removeReorderGapFromIndexPath:(id)fp8;
- (int)numberOfSections;
- (int)numberOfRowsInSection:(int)fp8;
- (int)numberOfRowsBeforeSection:(int)fp8;
- (int)numberOfRows;
- (BOOL)hasHeaderForSection:(int)fp8;
- (BOOL)hasFooterForSection:(int)fp8;
- (float)heightForSection:(int)fp8;
- (float)heightForHeaderInSection:(int)fp8;
- (float)heightForFooterInSection:(int)fp8;
- (float)heightForRow:(int)fp8 inSection:(int)fp12;
- (int)sectionLocationForRow:(int)fp8 inSection:(int)fp12;
- (int)sectionLocationForReorderedRow:(int)fp8 inSection:(int)fp12;
- (struct CGRect)rectForTableHeaderView;
- (struct CGRect)rectForTableFooterView;
- (struct CGRect)rectForTable;
- (struct CGRect)rectForSection:(int)fp8;
- (struct CGRect)rectForHeaderInSection:(int)fp8;
- (struct CGRect)floatingRectForHeaderInSection:(int)fp8 visibleRect:(struct CGRect)fp12;
- (struct CGRect)rectForFooterInSection:(int)fp8;
- (float)heightForTable;
- (struct CGRect)floatingRectForFooterInSection:(int)fp8 visibleRect:(struct CGRect)fp12;
- (struct CGRect)rectForRow:(int)fp8 inSection:(int)fp12;
- (struct CGRect)rectForGlobalRow:(int)fp8;
- (id)indexPathsForRowsInRect:(struct CGRect)fp8;
- (struct _NSRange)globalRowsInRect:(struct CGRect)fp8;
- (int)globalRowForRowAtIndexPath:(id)fp8;
- (id)indexPathForRowAtGlobalRow:(int)fp8;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (float)minimumRowHeight;
- (void)setMinimumRowHeight:(float)fp8;

@end

