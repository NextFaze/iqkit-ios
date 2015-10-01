//
//  IQNewsTableViewCell.h
//  iQNECT
//
//  Created by Xu Zhao on 31/12/14.
//  Copyright (c) 2014 NextFaze Pty Ltd. All rights reserved.
//

#import "iQTableViewCell.h"
#import "iQNewsItem.h"

@interface iQNewsTableViewCell : iQTableViewCell

@property (strong, nonatomic) UIImageView *newsImageView;
@property (strong, nonatomic) UILabel *titleLabel;
@property (strong, nonatomic) UILabel *subtitleLabel;

@end