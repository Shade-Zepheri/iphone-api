/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <ChatKit/CKMessageComposition.h>

@class NSArray, NSString;

@interface CKMessageStandaloneComposition : CKMessageComposition
{
    NSString *_textString;
    NSString *_markupString;
    NSString *_subject;
    NSArray *_resources;
    BOOL _isTextOnly;
}

- (void)dealloc;
- (BOOL)isTextOnly;
- (void)setIsTextOnly:(BOOL)fp8;
- (id)resources;
- (void)setResources:(id)fp8;
- (id)subject;
- (void)setSubject:(id)fp8;
- (id)textString;
- (void)setTextString:(id)fp8;
- (id)markupString;
- (void)setMarkupString:(id)fp8;

@end

