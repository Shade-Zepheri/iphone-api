/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSString;

@interface CAFilter : NSObject <NSCopying, NSMutableCopying>
{
    unsigned int _type;
    NSString *_name;
    unsigned int _flags;
    struct _CAAttrList *_attr;
    void *_cache;
}

+ (id)filterTypes;
+ (id)filterWithType:(id)fp8;
+ (id)filterWithName:(id)fp8;
- (id)initWithType:(id)fp8;
- (id)initWithName:(id)fp8;
- (id)type;
- (id)name;
- (void)setName:(id)fp8;
- (BOOL)isEnabled;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)fp8;
- (void)setValue:(id)fp8 forKey:(id)fp12;
- (id)valueForKey:(id)fp8;
- (void)setDefaults;
- (void)dealloc;
- (void *)CA_copyRenderValue;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)mutableCopyWithZone:(struct _NSZone *)fp8;
- (void)willChangeValueForKey:(id)fp8;
- (void)didChangeValueForKey:(id)fp8;

@end

