/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UITiledView.h"

@interface PLImageTileView : UITiledView
{
    id _delegate;
}

+ (Class)tileClass;
+ (int)tileWidth;
+ (void)setTileSize:(struct CGSize)fp8;
- (id)initWithSize:(struct CGSize)fp8;
- (struct CGSize)imageSize;
- (void)setDelegate:(id)fp8;
- (id)_createTileWithFrame:(struct CGRect)fp8;
- (struct CGRect)visibleRect;
- (BOOL)tilesNeedDisplay;

@end

