/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSStreamDelegate.h"

__attribute__((visibility("hidden")))
@interface _CFStreamDelegate : NSObject <NSStreamDelegate>
{
    unsigned long _flags;
    CDStruct_304912e7 _client;
    union {
        void *_rcb;
        void *_wcb;
        void *genericCallback;
        void *genericPointer;
    } _cb;
}

- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithStreamEvents:(unsigned long)arg1 callback:(void *)arg2 context:(CDStruct_304912e7 *)arg3;

@end
