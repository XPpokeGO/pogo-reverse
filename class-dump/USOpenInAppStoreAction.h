//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "USBaseAction.h"

@class NSString;

@interface USOpenInAppStoreAction : USBaseAction
{
    NSString *_iTunesID;
}

+ (id)type;
@property(copy, nonatomic) NSString *iTunesID; // @synthesize iTunesID=_iTunesID;
- (void).cxx_destruct;
- (id)initWithParameters:(id)arg1 map:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
