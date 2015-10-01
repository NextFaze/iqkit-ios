//
//  IQTagsViewController.h
//  iQNECT
//
//  Created by Luke Scholefield on 29/04/2014.
//  Copyright (c) 2014 NextFaze Pty Ltd. All rights reserved.
//

#import "iQViewController.h"
#import "iQDataStore.h"
#import "iQMusicItem.h"

typedef enum : NSInteger {
    IQHistoryIndexSearch = 0,
    IQHistoryIndexMusic = 1
} IQHistoryIndex;

@class iQHistoryViewController;
@class MOSearchLog;

@protocol iQHistoryViewControllerDelegate <NSObject, iQViewControllerDelegate>

- (void)historyViewController:(iQHistoryViewController *)historyViewController didSelectSearchLog:(MOSearchLog *)searchLog;
- (void)historyViewController:(iQHistoryViewController *)historyViewController didSelectMusicItem:(iQMusicItem *)musicItem;

@end

@interface iQHistoryViewController : iQViewController

@property (nonatomic, assign) NSObject<iQHistoryViewControllerDelegate> *delegate;
@property (nonatomic, assign) BOOL showDoneButton;
@property (nonatomic, assign) IQHistoryIndex selectedIndex;

@end