//
//  iQManageChannelsViewController.h
//  iQNECT
//
//  Created by Luke Scholefield on 5/05/2014.
//  Copyright (c) 2014 NextFaze Pty Ltd. All rights reserved.
//

#import "iQViewController.h"
#import "iQAppModes.h"

@class iQManageChannelsViewController;

@protocol iQManageChannelsViewControllerDelegate <NSObject, iQViewControllerDelegate>

@optional
- (void)manageChannelsViewControllerDidComplete:(iQManageChannelsViewController *)viewController;

@end

@interface iQManageChannelsViewController : iQViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, assign) NSObject<iQManageChannelsViewControllerDelegate> *delegate;
@property (nonatomic, assign) iQAppMode appMode;

@end
