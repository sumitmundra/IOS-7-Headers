/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface PKImageSetCache : NSObject
{
    NSMutableDictionary *_frontFaceImageSets;
    NSMutableDictionary *_backFaceImageSets;
    NSMutableDictionary *_previewImageSets;
    NSMutableDictionary *_partialFrontFaceImageSets;
}

- (id)_keyForImageSet:(int)arg1 displayProfile:(id)arg2;
- (id)_dictionaryForImageSet:(int)arg1;
- (void)purgeAllCaches;
- (void)garbageCollectCacheForImageSet:(int)arg1;
- (void)flushUniqueID:(id)arg1 forImageSet:(int)arg2 withDisplayProfile:(id)arg3 purge:(BOOL)arg4;
- (void)cacheImages:(id)arg1 forDisplayProfile:(id)arg2;
- (id)checkoutImageSet:(int)arg1 forDisplayProfile:(id)arg2 withUniqueID:(id)arg3;
- (void)dealloc;
- (id)init;

@end

