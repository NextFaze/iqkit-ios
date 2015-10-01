//
//  iQAppModes.h
//  iQNECT
//
//  Created by Ricardo Santos on 31/10/2014.
//  Copyright (c) 2014 NextFaze Pty Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface iQAppModes : NSObject

typedef NS_ENUM(NSInteger, iQAppMode) {
    iQAppModeSearch,
    iQAppModeMusic,
    iQAppModeSocial,
    iQAppModeChat,
    iQAppModeUndefined
};

+ (iQAppMode)appModeFromString:(NSString *)string;
+ (NSString *)stringFromAppMode:(iQAppMode)appMode;

+ (iQAppMode)appModeFromIdentifier:(NSString *)identifier;
+ (NSString *)identifierFromAppMode:(iQAppMode)appMode;

@end