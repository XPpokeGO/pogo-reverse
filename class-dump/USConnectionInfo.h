//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSMutableData, NSOperationQueue, NSString;

@interface USConnectionInfo : NSObject
{
    NSMutableData *_responseData;
    NSOperationQueue *_callbackQueue;
    NSString *_referenceID;
    NSString *_signature;
    NSError *_error;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *referenceID; // @synthesize referenceID=_referenceID;
@property(retain, nonatomic) NSOperationQueue *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
- (void).cxx_destruct;
- (void)notifyClientWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
