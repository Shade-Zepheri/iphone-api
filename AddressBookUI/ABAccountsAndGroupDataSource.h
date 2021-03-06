/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ABModel, NSArray, NSDictionary, NSMutableDictionary;

@interface ABAccountsAndGroupDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    ABModel *_model;
    NSArray *_accountIdentifiers;
    NSArray *_accountDisplayNames;
    NSArray *_accountDisplayTypes;
    NSDictionary *_groupsByAccountIdentifier;
    NSMutableDictionary *_headerViewsBySection;
}

- (id)init;
- (void)dealloc;
- (id)defaultGroupWrapper;
- (void)reloadData;
- (id)createTable;
- (BOOL)needsStyleUpdateForTableView:(id)fp8;
- (id)groupWrapperForIndexPath:(id)fp8;
- (id)accountGroupWrappers;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForHeaderInSection:(int)fp12;
- (id)tableView:(id)fp8 viewForHeaderInSection:(int)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)model;
- (void)setModel:(id)fp8;

@end

