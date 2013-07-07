/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSIndexSet, NSMutableIndexSet, NSMutableSet;

@interface PUPhotoSelectionEntry : NSObject
{
    BOOL _hasValidAssetIndexes;
    id <PLAssetContainer> _container;
    NSMutableSet *_selectedAssets;
    NSMutableIndexSet *_selectedIndexes;
}

@property(readonly, nonatomic) id <PLAssetContainer> container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)setSelectedAssetsSet:(id)arg1;
- (void)handleCollectionChangeNotification:(id)arg1;
- (void)enumerateSelectedAssetsWithBlock:(id)arg1;
- (BOOL)isIndexSelected:(unsigned int)arg1;
- (void)deselectAssetsAtIndexes:(id)arg1;
- (void)selectAssetsAtIndexes:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedAssets;
@property(readonly, nonatomic) NSIndexSet *selectedIndexes;
- (void)invalidateAllAssetIndexes;
- (void)_ensureValidAssetIndexes;
- (id)initWithContainer:(id)arg1;

@end
