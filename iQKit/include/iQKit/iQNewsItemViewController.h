//
//  IQNewsStoryViewController.h
//  iQNECT
//
//  Created by Luke Scholefield on 1/05/2014.
//  Copyright (c) 2014 NextFaze Pty Ltd. All rights reserved.
//

#import "iQViewController.h"
#import "iQNewsItem.h"

@interface iQNewsItemViewController : iQViewController

@property (nonatomic, strong) iQNewsItem *newsItem;
@property (nonatomic, assign) BOOL showDoneButton;

@end
