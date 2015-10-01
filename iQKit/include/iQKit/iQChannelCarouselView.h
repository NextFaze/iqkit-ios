//
//  iQChannelCarouselView.h
//  iQNECT
//
//  Created by Ricardo Santos on 15/10/2014.
//  Copyright (c) 2014 NextFaze Pty Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "iQAppModes.h"
#import "iQChannel.h"

#define ChannelSize CGSizeMake(80.0, 40.0)

@class iQChannelCarouselView;

@protocol iQChannelCarouselViewDelegate <NSObject>

- (void)channelCarouselView:(iQChannelCarouselView *)channelCarouselView didScrollToChannel:(iQChannel *)channel;
- (void)channelCarouselViewDidLongPress:(iQChannelCarouselView *)channelCarouselView;

@end

@interface iQChannelCarouselView : UIView

- (instancetype)initWithFrame:(CGRect)frame;

@property (nonatomic, assign) NSObject<iQChannelCarouselViewDelegate> *delegate;
@property (nonatomic, strong) NSArray *appModes;
@property (nonatomic, readonly) iQAppMode selectedAppMode;
@property (nonatomic, readonly) iQChannel *selectedChannel;

- (void)resetAllCarouselsToFirstChannel;
- (void)scrollToCarouselAtIndex:(NSUInteger)index animated:(BOOL)animated;
- (void)scrollToCarouselWithAppMode:(iQAppMode)appMode animated:(BOOL)animated;
- (void)scrollCarouselToFirstChannelAnimated:(BOOL)animated;
- (void)scrollCarouselToIQNECTChannel;
- (void)scrollCarouselToIQNECTChannelAnimated:(BOOL)animated;
- (void)scrollCarouselToGoogleChannelAnimated:(BOOL)animated;
- (void)scrollCarouselToChannel:(iQChannel *)channel animated:(BOOL)animated;
- (void)scrollCarouselToChannelWithHost:(NSString *)host animated:(BOOL)animated;
- (void)scrollCarouselToChannelWithID:(NSNumber *)channelID animated:(BOOL)animated;

@end
