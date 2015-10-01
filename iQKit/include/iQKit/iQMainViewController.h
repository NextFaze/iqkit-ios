//
//  IQMainViewController.h
//  iQNECT
//
//  Created by Luke Scholefield on 28/04/2014.
//  Copyright (c) 2014 NextFaze Pty Ltd. All rights reserved.
//

#import "iQViewController.h"
#import "iQChannelCarouselView.h"
#import "iQScannerViewController.h"
#import "iQChannel.h"
#import "iQManageChannelsViewController.h"
#import "iQSpeechViewController.h"
#import "iQMainButtonView.h"
#import "iQMusicPayloadViewController.h"
#import "iQBrowserTab.h"
#import "iQTabSwitcherViewController.h"

@interface iQMainViewController : iQViewController <UIScrollViewDelegate, iQManageChannelsViewControllerDelegate, iQKitSpeechViewControllerDelegate, iQMusicPayloadViewControllerDelegate, iQViewControllerDelegate, iQChannelCarouselViewDelegate, iQScannerViewControllerDelegate, iQTabSwitcherViewControllerDelegate>

@property (nonatomic, strong) iQChannelCarouselView *channelCarouselView;
@property (nonatomic, strong) iQMainButtonView *mainButtonView;

//@property (nonatomic, strong) UIButton *homeButton;
//@property (nonatomic, strong) UIButton *hamburgerButton;

@property (nonatomic, strong) UIButton *micButton;
@property (nonatomic, strong) UIView *touchToSpeakView;
@property (nonatomic, strong) UISearchBar *searchBar;

@property (nonatomic, readonly) UIView *contentView;

@property (nonatomic, assign) iQAppMode appMode;

@property iQChannel *previousChannel;
@property (nonatomic, strong) iQBrowserTab *browserTab;

@property (nonatomic, assign) BOOL isMusicRecognitionRunning;

- (void)saveState;

// Search
- (void)handleSearchResponse:(iQAPISearchResponse *)response;

/*
 * Load URL in the Webview
 */
- (void)loadURL:(NSURL *)URL;


- (void)buildChannelCarousel;
- (void)showCarouselHintsView;

- (void)setSearchBarText:(NSString *)text;
- (void)searchWithSelectedChannel;

- (void)showManageChannelsView;

/*
 * Attempt to handle this URL
 *
 * returns YES if handled.
 */
- (BOOL)handleURL:(NSURL *)URL;
- (void)showTabSwitcher;
- (void)showContentView:(UIView *)view;
- (void)hideContentView:(BOOL)animated;
- (void)showMusicItem:(iQMusicItem *)item;


- (void)showContentViewController:(UIViewController *)viewController animated:(BOOL)animated;
- (void)showContentViewController:(UIViewController *)viewController;
- (void)presentModalViewController:(UIViewController *)modalViewController;
- (void)scrollNewsFeedViewToVisible:(CGRect)rect;
- (void)addNewTabPage;

- (void)setLeftMenuButton:(UIButton*)leftButton;
- (void)setRightMenuButton:(UIButton*)rightButton;

//- (void)showWallet;
//- (void)showMusicTrending;
//- (void)showPaymentDetails;
//- (void)showClarifAI;
//
//- (void)showARWithChannelID:(NSNumber *)channelID;

@end
