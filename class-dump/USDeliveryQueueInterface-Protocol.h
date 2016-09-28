//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, USDeliveryPacket, USQueueConfiguration;
@protocol USDeliveryQueueDelegate;

@protocol USDeliveryQueueInterface
@property(nonatomic) __weak id <USDeliveryQueueDelegate> delegate;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) USQueueConfiguration *queueConfiguration;
- (void)drain;
- (void)enqueuePacket:(USDeliveryPacket *)arg1;
@end
