//
//  IQMusicPayloadViewController.h
//  iQNECT
//
//  Created by Ric Santos on 8/07/2014.
//  Copyright (c) 2014 NextFaze Pty Ltd. All rights reserved.
//

#import "iQViewController.h"
#import "iQChannel.h"
#import "iQITunesSearchAlbumsRequest.h"
#import "iQMusicItem.h"

@class iQMusicPayloadViewController;

@protocol iQMusicPayloadViewControllerDelegate <NSObject, iQViewControllerDelegate>

- (void)musicPayloadViewController:(iQMusicPayloadViewController *)musicPayloadViewController wantsURLDisplayed:(NSURL *)URL;
- (void)musicPayloadViewController:(iQMusicPayloadViewController *)musicPayloadViewController wantsMusicItemDisplayed:(iQMusicItem *)musicItem;

@end

@interface iQMusicPayloadViewController : iQViewController

@property (nonatomic, assign) NSObject<iQMusicPayloadViewControllerDelegate> *delegate;
@property (nonatomic, strong) iQMusicItem *musicItem;
@property (nonatomic, strong) UIScrollView *contentScrollView;

@end
