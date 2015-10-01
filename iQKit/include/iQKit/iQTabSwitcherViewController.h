//
//  IQTabSwitcherViewController.h
//  iQNECT
//
//  Created by Ric Santos on 28/11/2014.
//  Copyright (c) 2014 NextFaze Pty Ltd. All rights reserved.
//

#import "iQViewController.h"
#import "WKPagesCollectionView.h"
#import "iQBrowserTab.h"

@class iQTabSwitcherViewController;

@protocol iQTabSwitcherViewControllerDelegate <NSObject, iQViewControllerDelegate>

- (void)tabSwitcherViewController:(iQTabSwitcherViewController *)tabSwitcher didSelectBrowserTab:(iQBrowserTab *)browserTab;
- (void)tabSwitcherViewController:(iQTabSwitcherViewController *)tabSwitcher willAddBrowserTab:(iQBrowserTab *)browserTab;

@end

@interface iQTabSwitcherViewController : iQViewController

@property (nonatomic, assign) NSObject<iQTabSwitcherViewControllerDelegate> *delegate;
@property (nonatomic, strong) iQBrowserTab *currentBrowserTab;
@property (nonatomic, strong) WKPagesCollectionView *collectionView;
- (void)loadTabs;
@end
