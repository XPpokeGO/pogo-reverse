//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol GTMLogFilter, GTMLogFormatter, GTMLogWriter;

@interface GSDK_GTMLogger : NSObject
{
    id <GTMLogWriter> writer_;
    id <GTMLogFormatter> formatter_;
    id <GTMLogFilter> filter_;
}

+ (id)logger;
+ (id)loggerWithWriter:(id)arg1 formatter:(id)arg2 filter:(id)arg3;
+ (id)standardLoggerWithPath:(id)arg1;
+ (id)standardLoggerWithStdoutAndStderr;
+ (id)standardLoggerWithStderr;
+ (id)standardLogger;
+ (void)setSharedLogger:(id)arg1;
+ (id)sharedLogger;
- (void)logAssert:(id)arg1;
- (void)logError:(id)arg1;
- (void)logInfo:(id)arg1;
- (void)logDebug:(id)arg1;
- (void)setFilter:(id)arg1;
- (id)filter;
- (void)setFormatter:(id)arg1;
- (id)formatter;
- (void)setWriter:(id)arg1;
- (id)writer;
- (void)dealloc;
- (id)initWithWriter:(id)arg1 formatter:(id)arg2 filter:(id)arg3;
- (id)init;

@end

