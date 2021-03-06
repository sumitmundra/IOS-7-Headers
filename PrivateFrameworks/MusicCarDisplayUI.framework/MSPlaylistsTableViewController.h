/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MusicCarDisplayUI/MSTableViewController.h>

@class NSArray, NSNumberFormatter;

@interface MSPlaylistsTableViewController : MSTableViewController
{
    NSNumberFormatter *_formatter;
    NSArray *_sortedPlaylists;
}

@property(retain, nonatomic) NSArray *sortedPlaylists; // @synthesize sortedPlaylists=_sortedPlaylists;
- (void).cxx_destruct;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;

@end

