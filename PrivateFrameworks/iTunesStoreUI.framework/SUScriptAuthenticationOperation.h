/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "ISOperation.h"

@class NSNumber, SSMutableAuthenticationContext;

@interface SUScriptAuthenticationOperation : ISOperation
{
    NSNumber *_authenticatedDSID;
    SSMutableAuthenticationContext *_authenticationContext;
}

@property(retain) NSNumber *authenticatedDSID; // @synthesize authenticatedDSID=_authenticatedDSID;
- (void)setScriptOptions:(id)arg1;
- (void)sendCompletionCallback:(id)arg1;
- (void)run;
- (id)authenticatedAccountDSID;
- (void)dealloc;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)init;

@end

