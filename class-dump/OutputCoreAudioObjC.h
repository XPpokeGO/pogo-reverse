//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface OutputCoreAudioObjC : NSObject
{
    struct OutputCoreAudio *mOutput;
}

- (void)dealloc;
- (void)deactivate;
- (void)activate:(struct OutputCoreAudio *)arg1;
- (void)becomeActive:(id)arg1;
- (void)screenConnect:(id)arg1;
- (void)enterForeground:(id)arg1;

@end
