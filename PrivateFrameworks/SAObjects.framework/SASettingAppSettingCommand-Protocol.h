/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SAAceSerializable.h"
#import "SAClientBoundCommand.h"

@class NSString;

@protocol SASettingAppSettingCommand <SAAceSerializable, SAClientBoundCommand>
@property(copy, nonatomic) NSString *location;
@property(copy, nonatomic) NSString *appWithSettingsId;
@end

