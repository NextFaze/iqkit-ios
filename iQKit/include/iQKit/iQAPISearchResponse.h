//
//  iQAPISearchResponse.h
//  iQKit
//
//  Copyright (c) 2015 iQNECT. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface iQAPISearchResponse : NSObject

@property (nonatomic, assign) BOOL success;
@property (nonatomic, assign) BOOL showLogoRama;
@property (nonatomic, strong) NSString *triggerID;
@property (nonatomic, strong) NSString *campaignID;
@property (nonatomic, strong) NSString *rulesetID;
@property (nonatomic, strong) NSString *brandID;
@property (nonatomic, strong) NSString *productID;
@property (nonatomic, strong) NSString *ruleID;
@property (nonatomic, strong) NSURL *payload;
@property (nonatomic, strong) NSString *searchBarTitle;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)dictionaryRepresentation;

@end
