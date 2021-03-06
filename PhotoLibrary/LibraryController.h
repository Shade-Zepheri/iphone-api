/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class LibraryView, UITextField;

@interface LibraryController : NSObject
{
    LibraryView *_libraryView;
    UITextField *_nameField;
}

- (struct CGSize)_layerSize;
- (void)dealloc;
- (void)storeCurrentConfiguration:(id)fp8;
- (void)loadCurrentConfiguration:(id)fp8;
- (void)reloadLibrary;
- (id)libraryView;
- (void)selectAlbum:(id)fp8;

@end

