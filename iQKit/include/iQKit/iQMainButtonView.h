//
//  IQMainButtonView.h
//  iQNECT
//
//  Created by Ricardo Santos on 15/05/2015.
//  Copyright (c) 2015 NextFaze Pty Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class  iQMainButtonView;

@protocol iQMainButtonViewDelegate <NSObject>

- (void)mainButtonViewTapped:(iQMainButtonView *)mainButtonView;

@end

@interface iQMainButtonView : UIView

@property (nonatomic, strong) NSObject<iQMainButtonViewDelegate> *delegate;
@property (nonatomic, assign) BOOL enabled;

- (void)startSearchAnimation;
- (void)setSearchRMS:(float)RMS;
- (void)stopSearchAnimation;

- (void)startMusicRecognition;
- (void)stopMusicRecognition;

@end
