/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class EmptyAlbumView, LibraryController, NSArray, SelectableTable;

@interface LibraryView : UIView
{
    LibraryController *_libraryController;
    NSArray *_albums;
    SelectableTable *_table;
    EmptyAlbumView *_emptyLibraryView;
}

- (BOOL)_hasContent;
- (void)_updateInterface;
- (void)_pictureWasTaken:(id)fp8;
- (void)_pictureWasDeleted:(id)fp8;
- (float)_padding;
- (void)_updateTableScrollRect;
- (id)initWithFrame:(struct CGRect)fp8 libraryController:(id)fp24;
- (void)dealloc;
- (void)cameraAlbumDidChange;
- (void)statusBarHeightDidChange:(id)fp8;
- (void)storeCurrentConfiguration:(id)fp8;
- (void)loadCurrentConfiguration:(id)fp8;
- (void)setAlbums:(id)fp8;
- (void)viewWillBeDisplayed;
- (void)updateButtonBar:(id)fp8 duration:(float)fp12;
- (int)numberOfRowsInTable:(id)fp8;
- (id)table:(id)fp8 cellForRow:(int)fp12 column:(id)fp16;
- (void)tableSelectionDidChange:(id)fp8;

@end
