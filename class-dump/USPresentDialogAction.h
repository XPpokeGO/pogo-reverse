//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "USBaseAction.h"

@protocol USViewController;

@interface USPresentDialogAction : USBaseAction
{
    id <USViewController> _alert;
}

+ (id)type;
@property(retain, nonatomic) id <USViewController> alert; // @synthesize alert=_alert;
- (void).cxx_destruct;
- (id)initWithParameters:(id)arg1 map:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

