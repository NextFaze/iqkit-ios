//
//  MyIQMainViewController.m
//  iQKit-Example
//
//  Created by Dan Silk on 1/10/2015.
//  Copyright © 2015 iQNECT. All rights reserved.
//

#import "MyIQMainViewController.h"

@implementation MyIQMainViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    UIButton *closeButton = [[UIButton alloc] initWithFrame:CGRectMake(0.0, 20.0, 44.0, 44.0)];
    [closeButton setImage:[UIImage imageNamed:@"close_button_grey"] forState:UIControlStateNormal];
    [closeButton addTarget:self action:@selector(closeIQMainView:) forControlEvents:UIControlEventTouchUpInside];
    
    [self setLeftMenuButton:closeButton];
}

- (void)closeIQMainView:(id)sender
{
    [self dismissViewControllerAnimated:YES completion:nil];
}

@end
