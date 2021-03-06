/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSOrderedSet, TDPNGAsset;

@interface TDSimpleArtworkRenditionSpec : TDRenditionSpec
{
}

- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned int)arg2 document:(id)arg3;
- (CDStruct_29e12816)_edgeMetricsForAlignmentRect:(struct CGRect)arg1 withRenditionSize:(CDStruct_1ef3fb1f)arg2;
- (id)_sliceRectanglesForRenditionSize:(CDStruct_1ef3fb1f)arg1;
- (id)_slicesToUseForCSI;
- (void)_logExtra:(id)arg1;
- (void)_logWarning:(id)arg1;
- (void)_logError:(id)arg1;
- (id)associatedFileModificationDateWithDocument:(id)arg1;

// Remaining properties
@property(retain, nonatomic) TDPNGAsset *asset; // @dynamic asset;
@property(retain, nonatomic) NSOrderedSet *slices; // @dynamic slices;

@end

