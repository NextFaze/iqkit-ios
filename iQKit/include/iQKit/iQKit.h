//
//  iQKit.h
//  iQKit
//
//  Copyright (c) 2015 iQNECT. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "iQStyle.h"
#import "iQScannerViewController.h"
#import "iQAPISearchRequest.h"

@interface iQKit : NSObject

///--------------------------------------
/// @name Configuring iQKit
///--------------------------------------

/*!
 @abstract Sets the appId and appToken of your application.
 
 @param appId The app ID for your iQKit application.
 @param appToken The app token for your iQKit application.
 */
+ (void)setAppID:(NSString *)appID andAppSecret:(NSString *)appSecret;

/*!
 @abstract The current app id that was used to configure iQKit.
 */
+ (NSString *)appId;

/*!
 @abstract The current client key that was used to configure Parse framework.
 */
+ (NSString *)appSecret;

/*!
 @abstract Sets the age of the app user.
 
 @param age The age of the user.
 */
+ (void)setUserAge:(NSNumber *)userAge;

/*!
 @abstract The age of the user.
 */
+ (NSNumber *)userAge;

/*!
 @abstract Sets the gender of the app user.
 
 @param gender The gender of the user, typically 'm' or 'f' but not restricted to.
 */
+ (void)setUserGender:(NSString *)userGender;

/*!
 @abstract The gender of the user.
 */
+ (NSString *)userGender;

@end
