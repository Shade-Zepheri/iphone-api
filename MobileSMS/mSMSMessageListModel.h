/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, mSMSMessageGroup;

@interface mSMSMessageListModel : NSObject
{
    NSMutableArray *_messageGroups;
    mSMSMessageGroup *_pendingMessageGroup;
    NSMutableArray *_groupsToDelete;
    BOOL _fullyLoaded;
    NSMutableDictionary *_unsentMessages;
}

+ (id)sharedInstance;
- (void)dealloc;
- (id)messageGroupForRecipients:(id)fp8 create:(BOOL)fp12;
- (void)_restoreUnsentInformationForGroup:(id)fp8;
- (id)_recipientsForGroupID:(int)fp8;
- (void *)_recipientForMessage:(struct __CTSMSMessage *)fp8;
- (id)_createMessageGroupForMessage:(struct __CTSMSMessage *)fp8 groupID:(int)fp12;
- (id)_messageGroupForMessage:(struct __CTSMSMessage *)fp8 groupID:(int)fp12 create:(BOOL)fp16;
- (id)messageGroupForGroupID:(int)fp8;
- (void)setUnsentMessagesDictionary:(id)fp8;
- (id)existingMessageGroupForGroupID:(int)fp8;
- (id)messageGroupForMessage:(struct __CTSMSMessage *)fp8 create:(BOOL)fp12;
- (void)resetCaches;
- (void)fixupNames;
- (id)activeMessageGroups;
- (void)_addGroupToDeletionSchedule:(int)fp8;
- (void)_deleteGroups;
- (id)loadedMessageGroups;
- (id)messageGroups;
- (void)resort;
- (void)_messageGroupChanged;
- (void)addMessageGroup:(id)fp8;
- (void)unpendMessageGroup;
- (void)applyPendingMessageGroup;
- (id)pendingMessageGroup:(BOOL)fp8;
- (int)unreadCount;
- (void)markMessageGroupAsRead:(id)fp8;
- (void)deleteMessageGroupAtIndex:(int)fp8;

@end

