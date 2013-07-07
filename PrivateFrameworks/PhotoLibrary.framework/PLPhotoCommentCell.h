/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class PLCloudSharedComment, UILabel, UIView;

@interface PLPhotoCommentCell : UITableViewCell
{
    UILabel *_commentContentLabel;
    UILabel *_commentBylineLabel;
    UIView *_styledSeparatorView;
    PLCloudSharedComment *_comment;
}

+ (id)_attributedStringForBylineText:(id)arg1 color:(id)arg2;
+ (id)_attributedStringForBylineText:(id)arg1;
+ (id)_attributedStringForCommentText:(id)arg1 color:(id)arg2;
+ (id)_attributedStringForCommentText:(id)arg1;
+ (id)bylineStringForComment:(id)arg1;
+ (float)heightForComment:(id)arg1 forWidth:(float)arg2 forInterfaceOrientation:(int)arg3;
+ (float)heightForCommentText:(id)arg1 bylineText:(id)arg2 forWidth:(float)arg3 forInterfaceOrientation:(int)arg4;
+ (Class)layerClass;
+ (id)_synthesizedAttributedString:(id)arg1 withWordWrapping:(BOOL)arg2;
@property(copy, nonatomic) PLCloudSharedComment *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) UIView *styledSeparatorView; // @synthesize styledSeparatorView=_styledSeparatorView;
@property(readonly, nonatomic) UILabel *commentBylineLabel; // @synthesize commentBylineLabel=_commentBylineLabel;
@property(readonly, nonatomic) UILabel *commentContentLabel; // @synthesize commentContentLabel=_commentContentLabel;
- (void)layoutSubviews;
- (void)_updateContent;
- (void)delete:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
