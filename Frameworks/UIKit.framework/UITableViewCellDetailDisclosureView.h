/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@class UIButton, UIImageView;

__attribute__((visibility("hidden")))
@interface UITableViewCellDetailDisclosureView : UIControl
{
    UIButton *_infoButton;
    UIImageView *_disclosureView;
}

- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

