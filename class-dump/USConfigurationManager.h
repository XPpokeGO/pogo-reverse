//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSOperationQueue, NSTimer;
@protocol USAnalyticsInterface, UpsightDataStoreInterface;

@interface USConfigurationManager : NSObject
{
    int _midFlightAttempt;
    id <UpsightDataStoreInterface> _dataStore;
    id <USAnalyticsInterface> _analytics;
    NSTimer *_sendTimer;
    NSTimer *_retryTimer;
    NSOperationQueue *_queue;
    NSDictionary *_configuration;
}

+ (id)defaultConfiguration;
@property int midFlightAttempt; // @synthesize midFlightAttempt=_midFlightAttempt;
@property(retain) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(retain, nonatomic) NSTimer *sendTimer; // @synthesize sendTimer=_sendTimer;
@property(nonatomic) __weak id <USAnalyticsInterface> analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) id <UpsightDataStoreInterface> dataStore; // @synthesize dataStore=_dataStore;
- (void).cxx_destruct;
- (void)applyConfiguration:(id)arg1;
- (void)ownConfigurationDidUpdate:(id)arg1 action:(unsigned long long)arg2;
- (void)loadOwnConfiguration;
- (void)removeAllObjectsInDataStore:(id)arg1 withType:(id)arg2 predicate:(id)arg3;
- (void)updateConfigurationsWithResponseObject:(id)arg1;
- (void)processStoredConfigurationResponses;
- (void)configurationResponseDidUpdate:(id)arg1 action:(unsigned long long)arg2;
- (void)sendConfigurationRequest;
- (void)invalidateTimers;
- (_Bool)isValidateConfiguration:(id)arg1;
- (void)setup;
- (id)initWithDataStore:(id)arg1 analytics:(id)arg2;
- (id)initWithDataStore:(id)arg1;
- (id)init;
- (void)dealloc;

@end

