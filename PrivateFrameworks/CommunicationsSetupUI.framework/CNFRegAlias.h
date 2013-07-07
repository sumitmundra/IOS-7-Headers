/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IMAccount, NSString;

@interface CNFRegAlias : NSObject
{
    NSString *_alias;
    NSString *_displayName;
    IMAccount *_account;
}

@property(retain, nonatomic) IMAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLocalPhoneNumberAlias;
- (int)localizedCaseInsensitiveCompare:(id)arg1;
- (id)description;
- (void)setDisplayName:(id)arg1;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (int)validationErrorReason;
- (int)validationStatus;
- (BOOL)validate;
- (BOOL)isPhoneNumberAliasOnPhoneNumberAccount;
@property(readonly, nonatomic) int type; // @dynamic type;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 alias:(id)arg2;

@end
