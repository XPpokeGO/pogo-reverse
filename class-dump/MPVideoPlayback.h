//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UnityViewControllerListener-Protocol.h"

@class CancelOnTouchView, MPMoviePlayerController, NSString, UIColor;

@interface MPVideoPlayback : NSObject <UnityViewControllerListener>
{
    MPMoviePlayerController *moviePlayer;
    CancelOnTouchView *cancelOnTouchView;
    UIColor *bgColor;
    long long controlMode;
    long long scalingMode;
    _Bool cancelOnTouch;
}

- (void).cxx_destruct;
- (void)finish;
- (void)viewDidLayoutSubviews:(id)arg1;
- (void)audioRouteChanged:(id)arg1;
- (void)moviePlayBackNaturalSizeAvailable:(id)arg1;
- (void)moviePlayBackMediaTypesAvailable:(id)arg1;
- (void)moviePlayBackSourceTypeAvailable:(id)arg1;
- (void)moviePlayBackDidFinish:(id)arg1;
- (void)actuallyStartTheMovie:(id)arg1;
- (void)dealloc;
- (id)initAndPlay:(id)arg1 bgColor:(id)arg2 controls:(long long)arg3 scaling:(long long)arg4 cancelOnTouch:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
