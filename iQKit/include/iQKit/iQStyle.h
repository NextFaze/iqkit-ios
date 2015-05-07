//
//  iQStyle.h
//  iQKit
//
//  Copyright (c) 2015 iQNECT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface iQStyle : NSObject

+ (instancetype)sharedInstance;
- (void)setupAppearance;

+ (UIColor *)redColor;
+ (UIColor *)tintColor;
+ (UIColor *)grayColor;
+ (UIColor *)lightGrayColor;
+ (UIColor *)themeColor;
+ (UIColor *)backgroundColor;

+ (UIFont *)fontRegularWithSize:(CGFloat)size;
+ (UIFont *)fontItalicWithSize:(CGFloat)size;
+ (UIFont *)fontBoldWithSize:(CGFloat)size;
+ (UIFont *)fontBoldItalicWithSize:(CGFloat)size;
+ (UILabel *)labelWithFrame:(CGRect)frame;
+ (UILabel *)labelWithText:(NSString *)text andFont:(UIFont *)font andFrame:(CGRect)frame andColor:(UIColor *)color;
+ (UIButton *)roundedRectButtonWithTitle:(NSString *)title;
+ (UIButton *)buttonWithImageNamed:(NSString *)imageName;

+ (UIImage *)cellPlaceholderImage;

@end
