/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface ABGroupWrapper : NSObject
{
    void *_addressBook;
    NSString *_accountIdentifier;
    void *_store;
    void *_group;
    NSString *_cachedName;
}

+ (id)createGroupWrappersWithAccountIdentifier:(id)fp8 addressBook:(void *)fp12;
+ (id)createGroupWrapperFromDictionaryRepresentation:(id)fp8 withAddressBook:(void *)fp12;
- (id)initWithAddressBook:(void *)fp8 accountIdentifier:(id)fp12 store:(void *)fp16 group:(void *)fp20;
- (void)dealloc;
- (BOOL)isGlobalWrapper;
- (BOOL)isContainerWrapper;
- (BOOL)isDirectoryWrapper;
- (id)name;
- (int)compareToGroupWrapper:(id)fp8;
- (void *)storeForNewRecords;
- (id)_accountDescriptionBasedOnIdentifier;
- (id)copyDictionaryRepresentation;
- (BOOL)isEqual:(id)fp8;
- (void *)group;
- (void *)store;
- (void *)addressBook;
- (id)accountIdentifier;

@end

