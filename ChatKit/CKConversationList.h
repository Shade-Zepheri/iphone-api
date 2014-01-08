/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class CKConversation, CKService, NSMutableArray;

@interface CKConversationList : NSObject
{
    NSMutableArray *_conversations;
    CKConversation *_pendingConversation;
    NSMutableArray *_groupsToDelete;
    BOOL _fullyLoaded;
    CKService *_service;
}

- (id)initWithService:(id)fp8;
- (void)dealloc;
- (id)conversationForRecipients:(id)fp8 create:(BOOL)fp12;
- (id)_recipientForMessage:(id)fp8;
- (id)_createConversationForMessage:(id)fp8 groupID:(int)fp12;
- (id)_conversationForMessage:(id)fp8 groupID:(int)fp12 create:(BOOL)fp16;
- (id)conversationForGroupID:(int)fp8;
- (id)existingConversationForGroupID:(int)fp8;
- (id)conversationForMessage:(id)fp8 create:(BOOL)fp12;
- (void)resetCaches;
- (void)fixupNames;
- (id)activeConversations;
- (void)_addGroupToDeletionSchedule:(int)fp8;
- (void)_deleteGroups;
- (id)loadedConversations;
- (id)conversations;
- (id)existingConversationForAddresses:(id)fp8;
- (void)resort;
- (void)_conversationChanged;
- (void)addConversation:(id)fp8;
- (void)unpendConversation;
- (void)applyPendingConversation;
- (id)pendingConversation:(BOOL)fp8;
- (int)unreadCount;
- (void)deleteConversationAtIndex:(int)fp8;
- (id)service;

@end

