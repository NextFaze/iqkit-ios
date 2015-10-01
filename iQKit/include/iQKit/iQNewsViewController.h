//
//  IQNewsViewController.h
//  iQNECT
//
//  Created by Luke Scholefield on 29/04/2014.
//  Copyright (c) 2014 NextFaze Pty Ltd. All rights reserved.
//

#import "iQViewController.h"
#import "iQNewsItem.h"

@class iQNewsViewController;

@protocol iQNewsViewControllerDelegate <NSObject, iQViewControllerDelegate>

- (void)newsViewController:(iQNewsViewController *)newsViewController wantsNewsItemDisplayed:(iQNewsItem*)newsItem;

@end

@interface iQNewsViewController : iQViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, assign) CGFloat cellHeight;
@property (nonatomic, assign) NSObject<iQNewsViewControllerDelegate> *delegate;

@end
