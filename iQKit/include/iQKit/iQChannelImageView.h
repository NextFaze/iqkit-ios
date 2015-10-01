//
//  iQAppModeImageView.h
//  iQNECT
//
//  Created by Luke Scholefield on 2/05/2014.
//  Copyright (c) 2014 NextFaze Pty Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "iQChannel.h"

@interface iQChannelImageView : UIImageView

@property (strong, nonatomic) iQChannel *channel;

@property (assign, nonatomic) BOOL showLeftLine;

@property (strong, nonatomic) UIView *leftLineView;


@end
