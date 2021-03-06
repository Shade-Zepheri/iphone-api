/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSString.h>

@interface NSString (UIStringDrawingDeprecated)
- (void)drawAtPoint:(struct CGPoint)fp8 withStyle:(id)fp16;
- (void)drawInRect:(struct CGRect)fp8 withStyle:(id)fp24;
- (void)drawMarkupAtPoint:(struct CGPoint)fp8;
- (void)drawMarkupInRect:(struct CGRect)fp8;
- (struct CGSize)sizeWithStyle:(id)fp8 forWidth:(CGFloat)fp12;
- (struct CGSize)sizeWithMarkupForWidth:(CGFloat)fp8;
- (void)setStringDrawingOrigin:(struct CGPoint)fp8;
- (void)clearStringDrawingOrigin;
- (struct CGSize)sizeWithFont:(id)fp8;
- (struct CGSize)sizeWithFont:(id)fp8 forWidth:(CGFloat)fp12 ellipsis:(int)fp16;
- (struct CGSize)drawAtPoint:(struct CGPoint)fp8 forWidth:(CGFloat)fp16 withFont:(id)fp20 ellipsis:(int)fp24;
- (struct CGSize)sizeWithFont:(id)fp8 minFontSize:(CGFloat)fp12 actualFontSize:(CGFloat *)fp16 forWidth:(CGFloat)fp20 ellipsis:(int)fp24;
- (struct CGSize)drawAtPoint:(struct CGPoint)fp8 forWidth:(CGFloat)fp16 withFont:(id)fp20 fontSize:(CGFloat)fp24 ellipsis:(int)fp28 baselineAdjustment:(int)fp32;
- (struct CGSize)drawAtPoint:(struct CGPoint)fp8 forWidth:(CGFloat)fp16 withFont:(id)fp20 minFontSize:(CGFloat)fp24 actualFontSize:(CGFloat *)fp28 ellipsis:(int)fp32 baselineAdjustment:(int)fp36;
- (struct CGSize)drawInRect:(struct CGRect)fp8 withFont:(id)fp24 ellipsis:(int)fp28;
- (struct CGSize)drawInRect:(struct CGRect)fp8 withFont:(id)fp24 ellipsis:(int)fp28 alignment:(int)fp32;
- (struct CGSize)drawInRect:(struct CGRect)fp8 withFont:(id)fp24;
- (struct CGSize)sizeInRect:(struct CGRect)fp8 withFont:(id)fp24 ellipsis:(int)fp28;
- (struct CGSize)sizeInRect:(struct CGRect)fp8 withFont:(id)fp24;
@end

