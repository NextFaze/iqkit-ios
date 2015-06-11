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
#import "iQKitVoiceEngine.h"
#import "iQNetworkStatus.h"

@protocol iQKitDelegate <NSObject>

- (CLLocationCoordinate2D)iQKitCurrentLocation;

@end

@interface iQKit : NSObject

+ (instancetype)sharedInstance;

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
 @abstract Sets the iQKit delegate object.
 
 @param delegate the delegate.
 */
@property (nonatomic, assign) NSObject<iQKitDelegate> *delegate;

/*!
 @abstract Sets the iQKit voice recognition engine.
 
 @param voiceEngine the implementation of the engine.
 */
@property (nonatomic, strong) iQKitVoiceEngine *voiceEngine;

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
 
 @param gender The gender of the user, accepts single character 'm' or 'f' or blank.
 */
+ (void)setUserGender:(NSString *)userGender;

/*!
 @abstract The gender of the user.
 */
+ (NSString *)userGender;

@end
