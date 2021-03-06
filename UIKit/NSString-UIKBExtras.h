/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "Foundation/NSString.h"

@interface NSString (UIKBExtras)
+ (id)stringWithUnichar:(unsigned short)fp8;
- (id)stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet *)fp8;
- (id)stringByTrimmingLastCharacter;
- (id)stringByReplacingCharactersInSet:(struct __CFCharacterSet *)fp8 withCharacter:(unsigned short)fp12;
- (id)stringByReplacingCharacter:(unsigned short)fp8 withCharacter:(unsigned short)fp12;
- (BOOL)endsSentence;
- (BOOL)endsWord;
- (BOOL)isDottedURLDomain;
- (BOOL)isLeftAssociative;
- (BOOL)isTripledPunctuation;
- (BOOL)isSpaceOrReturn;
- (BOOL)isPlainSpace;
- (BOOL)isSpace;
- (BOOL)looksLikeEmailAddress;
- (BOOL)looksLikeNumberInput;
- (BOOL)looksLikeURL;
@end

