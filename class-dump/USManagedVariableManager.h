//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "USActionHandlerDelegate-Protocol.h"
#import "USActionMapManagerObserver-Protocol.h"
#import "USManagedVariableObserver-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol USActionMapManagerInterface, USManagedVariableObserverDelegate, UpsightDataStoreInterface;

@interface USManagedVariableManager : NSObject <USActionMapManagerObserver, USActionHandlerDelegate, USManagedVariableObserver>
{
    NSMutableDictionary *_tagsToManagedVariablesMap;
    NSMutableDictionary *_mapIDToTagsMap;
    NSString *_bundleHash;
    id <USManagedVariableObserverDelegate> _delegate;
    NSDictionary *_actionTypeToHandlerMap;
    NSMutableDictionary *_mapIDToSyncBool;
    id <USActionMapManagerInterface> _actionMapManager;
    id <UpsightDataStoreInterface> _dataStore;
}

+ (id)sharedManager;
+ (id)bundleID;
+ (void)setBundleID:(id)arg1;
+ (id)bundleHash;
+ (id)managedVariableWithSchema:(id)arg1;
@property(readonly, nonatomic) id <UpsightDataStoreInterface> dataStore; // @synthesize dataStore=_dataStore;
@property(nonatomic) __weak id <USManagedVariableObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldExecuteActionOfType:(id)arg1 fromMap:(id)arg2;
- (CDUnknownBlockType)notifyUXMValuesSynchronized;
- (CDUnknownBlockType)setBundleID;
- (CDUnknownBlockType)UXMEnumerate;
- (CDUnknownBlockType)modifyValue;
@property(readonly, nonatomic) NSDictionary *actionTypeToHandlerMap; // @synthesize actionTypeToHandlerMap=_actionTypeToHandlerMap;
- (void)actionMapManager:(id)arg1 didDestroyActionMap:(id)arg2;
- (void)onDidChangeUXMVariable:(id)arg1 action:(unsigned long long)arg2;
@property __weak id <USActionMapManagerInterface> actionMapManager; // @synthesize actionMapManager=_actionMapManager;
@property(readonly) NSMutableDictionary *mapIDToSyncBool; // @synthesize mapIDToSyncBool=_mapIDToSyncBool;
@property(readonly) NSMutableDictionary *mapIDToTagsMap; // @synthesize mapIDToTagsMap=_mapIDToTagsMap;
@property(readonly) NSMutableDictionary *tagsToManagedVariablesMap; // @synthesize tagsToManagedVariablesMap=_tagsToManagedVariablesMap;
@property(retain) NSString *bundleHash; // @synthesize bundleHash=_bundleHash;
- (id)managedVariableWithSchema:(id)arg1;
- (void)dealloc;
- (id)initWithDataStore:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

