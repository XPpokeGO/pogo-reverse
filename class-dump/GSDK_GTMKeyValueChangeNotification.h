//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface GSDK_GTMKeyValueChangeNotification : NSObject <NSCopying>
{
    NSString *keyPath_;
    id object_;
    id userInfo_;
    NSDictionary *change_;
}

- (id)change;
- (id)userInfo;
- (id)object;
- (id)keyPath;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 userInfo:(id)arg3 change:(id)arg4;

@end

