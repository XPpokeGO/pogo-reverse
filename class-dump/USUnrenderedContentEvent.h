//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "USEvent.h"

@class NSNumber, NSString;

@interface USUnrenderedContentEvent : USEvent
{
}

+ (id)eventWithParameters:(id)arg1 contentID:(id)arg2 campaignID:(id)arg3 scope:(id)arg4;
@property(readonly, nonatomic) NSString *scope;
@property(readonly, nonatomic) NSNumber *campaignID;
@property(readonly, nonatomic) NSNumber *contentID;
- (id)initWithParameters:(id)arg1 contentID:(id)arg2 campaignID:(id)arg3 scope:(id)arg4;
- (id)initWithType:(id)arg1 parameters:(id)arg2;

@end
