//
//  IQGroupChannelsViewController.h
//  iQNECT
//
//  Created by Li Tian on 14/10/14.
//  Copyright (c) 2014 NextFaze Pty Ltd. All rights reserved.
//

#import "IQViewController.h"
#import "iqAppModes.h"

@interface iQAllChannelsViewController : iQViewController

@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, assign) iQAppMode appMode;

@end
