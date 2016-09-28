//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;
@protocol UpsightDynamicConfigurationDelegate;

@interface UpsightDynamicConfiguration : NSObject
{
    id <UpsightDynamicConfigurationDelegate> _delegate;
    NSDictionary *_configuration;
}

+ (id)defaultConfiguration;
@property(retain, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <UpsightDynamicConfigurationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)willUnload;
- (void)updateConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

