//
//  IQAPIChannelsRequest.h
//  iQNECT
//
//  Created by Ricardo Santos on 7/01/2015.
//  Copyright (c) 2015 NextFaze Pty Ltd. All rights reserved.
//

#import "IQAPIRequest.h"

@interface iQAPIChannelsRequest : iQAPIRequest

@property (nonatomic, strong) NSNumber *groupImageWidth;
@property (nonatomic, strong) NSNumber *groupImageHeight;
@property (nonatomic, strong) NSNumber *imageWidth;
@property (nonatomic, strong) NSNumber *imageHeight;

@end
