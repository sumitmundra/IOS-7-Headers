/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIStatusBarForegroundStyleAttributes.h>

__attribute__((visibility("hidden")))
@interface UIStatusBarWhiteOnBlackEtchForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes
{
}

- (float)bluetoothBatteryExtraLeftPadding;
- (float)airplaneItemExtraMargin;
- (int)legacyStyle;
- (struct CGPoint)positionForMoonMaskInBounds:(struct CGRect)arg1;
- (float)sizeForMoonMaskVisible:(BOOL)arg1;
- (id)textColorForStyle:(int)arg1;
- (id)makeTextFontForStyle:(int)arg1;
- (float)textOffsetForStyle:(int)arg1;
- (id)expandedNameForImageName:(id)arg1;
- (float)edgePadding;
- (void)drawTextInRect:(struct CGRect)arg1 withColor:(id)arg2 withBlock:(id)arg3;
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(float)arg2;
- (void)drawBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(float)arg2 charging:(BOOL)arg3;

@end

