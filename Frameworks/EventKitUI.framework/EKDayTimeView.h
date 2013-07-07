/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class EKCurrentTimeMarkerView, NSTimer, UIColor;

@interface EKDayTimeView : UIView
{
    UIView *_topContentView;
    UIView *_bottomContentView;
    unsigned int _leftBorder:1;
    unsigned int _rightBorder:1;
    BOOL _useLightText;
    double _highlightedHour;
    int _orientation;
    float _hourSize;
    float _designatorSize;
    EKCurrentTimeMarkerView *_timeMarker;
    NSTimer *_timeMarkerTimer;
    UIView *_timeMarkerExtension;
    BOOL _showsTimeMarker;
    BOOL _showsTimeMarkerExtension;
    BOOL _usesLightText;
    UIColor *_timeColor;
    int _hoursToPad;
    float _hourHeight;
    float _timeWidth;
    id <EKDayTimeViewDelegate> _delegate;
    struct _NSRange _hoursToRender;
}

+ (float)defaultHeightForOrientation:(int)arg1;
+ (float)designatorSizeForOrientation:(int)arg1;
+ (float)hourSizeForOrientation:(int)arg1;
+ (float)hourHeightForOrientation:(int)arg1;
+ (float)timeWidthForOrientation:(int)arg1;
+ (float)timeVerticalInsetForOrientation:(int)arg1;
+ (float)timeInsetForOrientation:(int)arg1;
+ (float)verticalPadding;
+ (float)_hourWidthForOrientation:(int)arg1;
+ (void)_calculateWidthForOrientation:(int)arg1;
+ (void)_invalidateWidth;
@property(nonatomic) __weak id <EKDayTimeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) float timeWidth; // @synthesize timeWidth=_timeWidth;
@property(readonly, nonatomic) float hourHeight; // @synthesize hourHeight=_hourHeight;
@property(nonatomic) struct _NSRange hoursToRender; // @synthesize hoursToRender=_hoursToRender;
@property(nonatomic) int hoursToPad; // @synthesize hoursToPad=_hoursToPad;
@property(nonatomic) BOOL usesLightText; // @synthesize usesLightText=_usesLightText;
@property(nonatomic) BOOL showsTimeMarkerExtension; // @synthesize showsTimeMarkerExtension=_showsTimeMarkerExtension;
@property(nonatomic) BOOL showsTimeMarker; // @synthesize showsTimeMarker=_showsTimeMarker;
- (void).cxx_destruct;
- (float)_positionOfSecond:(int)arg1;
- (void)_updateMarkerPosition;
- (void)_invalidateMarkerTimer;
- (void)_startMarkerTimer;
- (void)drawRect:(struct CGRect)arg1 forContentView:(id)arg2 withHourRange:(struct _NSRange)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setOrientation:(int)arg1;
@property(readonly, nonatomic) EKCurrentTimeMarkerView *timeMarker;
@property(retain, nonatomic) UIColor *timeColor; // @synthesize timeColor=_timeColor;
@property(nonatomic) double highlightedHour;
@property(nonatomic) BOOL showsRightBorder;
@property(nonatomic) BOOL showsLeftBorder;
- (void)setOpaque:(BOOL)arg1;
- (float)topPadding;
- (void)_localeChanged;
- (void)setNeedsDisplay;
- (void)dealloc;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) float defaultHeight;

@end
