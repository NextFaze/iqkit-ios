//
//  iQAppModeSet.h
//  iQNECT
//
//  Created by Ric Santos on 10/07/2014.
//  Copyright (c) 2014 NextFaze Pty Ltd. All rights reserved.
//

#import "iQModelObject.h"
#import "iQChannel.h"

@interface iQChannelSet : iQModelObject

@property (nonatomic, strong) NSMutableArray *activeChannels;
@property (nonatomic, strong) NSMutableArray *inactiveChannels;
- (NSArray *)allChannels;

- (void)updateWithNewChannelList:(NSArray *)newChannelList;

@end
