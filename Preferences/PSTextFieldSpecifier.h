/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Preferences/PSSpecifier.h>

@class NSString;

@interface PSTextFieldSpecifier : PSSpecifier
{
    SEL bestGuess;
    NSString *_placeholder;
    NSString *_suffix;
}

+ (id)preferenceSpecifierNamed:(id)fp8 target:(id)fp12 set:(SEL)fp16 get:(SEL)fp20 detail:(Class)fp24 cell:(int)fp28 edit:(Class)fp32;
- (void)dealloc;
- (void)setPlaceholder:(id)fp8;
- (id)placeholder;
- (void)setSuffix:(id)fp8;
- (id)suffix;

@end

