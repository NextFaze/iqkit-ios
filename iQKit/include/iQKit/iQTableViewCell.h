//
//  IQTableViewCell.h
//  iQNECT
//
//  Created by Luke Scholefield on 28/04/2014.
//  Copyright (c) 2014 NextFaze Pty Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SDWebImage/UIImageView+WebCache.h>

@interface iQTableViewCell : UITableViewCell

@property (assign, nonatomic) BOOL showTopLine;
@property (assign, nonatomic) BOOL showBottomLine;

@property (strong, nonatomic) UIView *topLineView;
@property (strong, nonatomic) UIView *bottomLineView;

+ (NSString *)reuseIdentifier;
+ (CGFloat)heightForRow;

@end
