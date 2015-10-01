//
//  IQCarouselScrollView.h
//  iQNECT
//
//  Created by Luke Scholefield on 29/04/2014.
//  Copyright (c) 2014 NextFaze Pty Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface iQCarouselScrollView : UIScrollView

@property (assign, nonatomic) CGFloat overscrollPadding;
@property (assign, nonatomic) CGSize carouselSize;
@property (assign, nonatomic) CGFloat stepSize;

@end
