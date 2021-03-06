/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "IUCZAlbumTableViewControllerDelegate.h"
#import "IUCZCollectionViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CADisplayLink, CAMediaTimingFunction, IUCZAlbumTableViewController, IUCZCollectionViewController, IUCoverMaskView, MPImageCache, NSArray, NSIndexPath, UIPinchGestureRecognizer, UIView;

@interface IUCoverZoomViewController : UIViewController <IUCZAlbumTableViewControllerDelegate, IUCZCollectionViewControllerDelegate, UIGestureRecognizerDelegate>
{
    NSArray *_albums;
    IUCZAlbumTableViewController *_albumTableViewController;
    double _animationStartTimeInterval;
    double _animationDuration;
    float _animationEndProgress;
    float _animationStartProgress;
    CADisplayLink *_animationTimer;
    IUCZCollectionViewController *_collectionViewController;
    int _coverCountPerColumn;
    MPImageCache *_imageCache;
    IUCoverMaskView *_maskView;
    float _pinchContentOffsetDelta;
    NSIndexPath *_pinchContentOffsetIndexPath;
    int _pinchDirection;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    BOOL _pinching;
    CAMediaTimingFunction *_timingFunction;
    UIView *_transformView;
    IUCZCollectionViewController *_transitionCollectionViewController;
    int _transitionCoverCountPerColumn;
    struct CGSize _transitionEndItemSize;
    struct CGSize _transitionStartItemSize;
    float _transitionStartScale;
    struct CGAffineTransform _unzoomedAlbumViewTransform;
    BOOL _zoomed;
    id <IUCoverZoomViewControllerDelegate> _delegate;
}

@property(nonatomic) id <IUCoverZoomViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateContentOffsetForCollectionView:(id)arg1;
- (void)_updateContentOffset;
- (void)_setTransitionProgress:(float)arg1;
- (void)_removeTransitionCollectionViewForEndProgress:(float)arg1;
- (void)_endTransitionAtProgress:(float)arg1 velocity:(float)arg2;
- (float)_collectionViewHeightForItemSize:(struct CGSize)arg1 coverCountPerColumn:(unsigned int)arg2;
- (void)_beginTransitionForScale:(float)arg1;
- (void)_deviceOrientationDidChangeNotification:(id)arg1;
- (void)_pinchAction:(id)arg1;
- (void)_displayLinkAction:(id)arg1;
- (void)collectionViewController:(id)arg1 didSelectCell:(id)arg2 atIndexPath:(id)arg3;
- (void)albumTableViewDidTapAlbumArtwork:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

