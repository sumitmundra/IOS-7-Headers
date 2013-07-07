/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "VKObjectPoolObject.h"

@class NSCache, NSDictionary, NSString, VKObjectPool, VKPShieldVariant;

__attribute__((visibility("hidden")))
@interface VKShieldArtwork : NSObject <VKObjectPoolObject>
{
    float _scale;
    struct CGImage *_image;
    VKPShieldVariant *_variantData;
    VKObjectPool *_pool;
    NSString *_poolKey;
    NSCache *_imageCache;
    NSDictionary *_stringAttributes;
    struct CGColor *_shadowColor;
    struct __CTFont *_nonDigitFont;
    float _extraScale;
    struct CGRect _rectInAtlas;
    struct CGPoint _center;
}

- (id).cxx_construct;
- (struct CGImage *)newImageWithShieldText:(id)arg1 centerPoint:(struct CGPoint *)arg2;
@property(readonly) struct CGSize size;
- (void)setPool:(id)arg1 withKey:(id)arg2;
- (id)imageWithShieldText:(id)arg1;
- (void)dealloc;
- (id)initWithPackedVariant:(id)arg1 imageAtlas:(id)arg2 quadSize:(struct CGSize)arg3 scale:(float)arg4 extraScale:(float)arg5;

@end
