//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface GSDK_GTMKeyValueObservingCenter : NSObject
{
    NSMutableDictionary *observerHelpers_;
}

+ (id)defaultCenter;
- (void)removeObserver:(id)arg1 ofObject:(id)arg2 forKeyPath:(id)arg3 selector:(SEL)arg4;
- (void)addObserver:(id)arg1 ofObject:(id)arg2 forKeyPath:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 options:(unsigned long long)arg6;
- (id)dictionaryKeyForObserver:(id)arg1 ofObject:(id)arg2 forKeyPath:(id)arg3 selector:(SEL)arg4;
- (void)dealloc;
- (id)init;

@end

