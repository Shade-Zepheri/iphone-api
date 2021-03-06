/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class NSString;

@interface UIMovieSubtitlesView : UIView
{
    id _delegate;
    NSString *_markup;
    unsigned int _sizeIsDirty:1;
    struct CGSize _markupSize;
    struct CGSize _padding;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)drawRect:(struct CGRect)fp8;
- (struct CGSize)padding;
- (void)setDelegate:(id)fp8;
- (void)setPadding:(struct CGSize)fp8;
- (void)sizeToFitWidth:(float)fp8;
- (void)setSubtitleString:(struct __CFAttributedString *)fp8 forced:(BOOL)fp12;
- (void)clearSubtitle;
- (id)_createMarkupFromAttributedString:(struct __CFAttributedString *)fp8;
- (id)_htmlColorForColor:(struct CGColor *)fp8;

@end

