/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <ChatKit/CKContentEntryBridge.h>

@class NSMutableArray;

@interface CKWebviewBasedContentEntryBridge : CKContentEntryBridge
{
    NSMutableArray *_resources;
    int _composeResourcePoolID;
}

- (id)init;
- (void)dealloc;
- (id)newContentViewWithFrame:(struct CGRect)fp8;
- (void)setMessageComposition:(id)fp8;
- (id)messageComposition;
- (void)setMessageParts:(id)fp8;
- (id)attachments;
- (id)messageParts;
- (void)insertMessagePart:(id)fp8;
- (BOOL)hasContent;
- (id)supportedPasteboardTypesInTextContentView:(id)fp8;
- (id)documentFragmentForPasteboardItemAtIndex:(int)fp8 inTextContentView:(id)fp12;
- (void)richContentView:(id)fp8 didRemoveImage:(id)fp12;
- (void)richContentView:(id)fp8 didInsertImage:(id)fp12;
- (id)_textView;
- (void)_resetResourcePool;
- (id)_nodeForImagePart:(id)fp8 forRichContentView:(id)fp12;
- (id)_htmlForMessagePart:(id)fp8;

@end

