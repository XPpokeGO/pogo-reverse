//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "USBaseAction.h"

@class NSArray, NSString;

@interface USModifyValueAction : USBaseAction
{
    NSString *_type;
    NSArray *_matchValues;
    NSArray *_operations;
}

+ (id)type;
@property(readonly, nonatomic) NSArray *operations; // @synthesize operations=_operations;
@property(readonly, nonatomic) NSArray *matchValues; // @synthesize matchValues=_matchValues;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithParameters:(id)arg1 map:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
