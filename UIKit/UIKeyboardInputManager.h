/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@interface UIKeyboardInputManager : NSObject
{
}

+ (id)sharedInstanceForInputMode:(id)fp8;
+ (id)activeInstance;
+ (void)releaseSharedInstance;
- (void)addInput:(id)fp8 flags:(unsigned int)fp12 point:(struct CGPoint)fp16;
- (void)setInput:(id)fp8;
- (void)deleteFromInput;
- (void)clearInput;
- (void)acceptInput;
- (void)setInputIndex:(unsigned int)fp8;
- (unsigned int)inputIndex;
- (unsigned int)inputCount;
- (id)inputString;
- (void)inputLocationChanged;
- (BOOL)stringEndsWord:(id)fp8;
- (id)composedTyping;
- (id)autocorrection;
- (id)candidates;
- (BOOL)usesCandidateSelection;
- (BOOL)usesAutoDeleteWord;
- (BOOL)suppressesCandidateDisplay;
- (id)defaultCandidate;
- (BOOL)suppliesCompletions;
- (id)stringForDoubleKey:(id)fp8;
- (BOOL)setInputMode:(id)fp8;
- (void)setAutoCorrects:(BOOL)fp8;
- (void)setShift:(BOOL)fp8;
- (void)setAutoShift:(BOOL)fp8;
- (BOOL)shouldExtendPriorWord;
- (void)configureKeyboard:(id)fp8 forCandidates:(id)fp12;
- (void)addToTypingHistory:(id)fp8;
- (void)textAccepted:(id)fp8;
- (void)candidateAccepted:(id)fp8;
- (void)increaseUserFrequency:(id)fp8;
- (void)decreaseUserFrequency:(id)fp8;
- (void)clearDynamicDictionary;
- (id)shadowTyping;
- (void)setCalculatesChargedKeyProbabilities:(BOOL)fp8;
- (struct __CFArray *)chargeableKeys;
- (struct __CFDictionary *)chargedKeyProbabilities;
- (id)addInputObject:(id)fp8;
- (id)setInputObject:(id)fp8;
- (BOOL)canHandleKeyHitTest;
- (void)clearKeyAreas;
- (void)registerKeyArea:(struct CGPoint)fp8 withRadii:(struct CGPoint)fp16 forKeyCode:(unsigned short)fp24 forLowerKey:(id)fp28 forUpperKey:(id)fp32;
- (int)keyHitTest:(struct CGPoint)fp8 touchStage:(int)fp16 atTime:(double)fp20 withPathInfo:(CDAnonymousStruct13 *)fp28 forceShift:(BOOL)fp32;
- (BOOL)keySlidIntoSwipe;
- (int)keyCancel:(struct CGPoint)fp8 atTime:(double)fp16 fromPath:(int)fp24 withIdentity:(int)fp28 forceShift:(BOOL)fp32;
- (void)deleteFromStrokeHistory:(BOOL)fp8;

@end

