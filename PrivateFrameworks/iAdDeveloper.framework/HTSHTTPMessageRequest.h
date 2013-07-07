/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iAdDeveloper/HTSHTTPMessage.h>

@class NSString, NSURL;

@interface HTSHTTPMessageRequest : HTSHTTPMessage
{
    NSString *_requestMethod;
    NSURL *_requestURL;
}

@property(copy, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(copy, nonatomic) NSString *requestMethod; // @synthesize requestMethod=_requestMethod;
- (BOOL)responseCanUseGZip;
- (id)responseWithStatus:(int)arg1;
- (struct __CFHTTPMessage *)copyMessage;
- (id)initWithRequest:(struct __CFHTTPMessage *)arg1;
- (void)dealloc;

@end
