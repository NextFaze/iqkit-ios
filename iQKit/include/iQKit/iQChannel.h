//
//  iQChannel.h
//  iQNECT
//
//  Created by Luke Scholefield on 1/05/2014.
//  Copyright (c) 2014 NextFaze Pty Ltd. All rights reserved.
//

#import "iQModelObject.h"

@interface iQChannel : iQModelObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSNumber *channelID;
@property (nonatomic, strong) NSString *imageName;
@property (nonatomic, strong) NSString *imageURLString;
@property (nonatomic, strong) NSString *searchQuery;
@property (nonatomic, strong) NSString *groupName;
@property (nonatomic, strong) NSString *groupImageURLString;
@property (nonatomic, strong) NSNumber *isDefault;

- (instancetype)initWithName:(NSString *)name imageNamed:(NSString *)imageName;

- (BOOL)isiQNECTChannel;
- (BOOL)isiQMUSICChannel;
- (BOOL)isiTunesChannel;
- (BOOL)isBestPriceChannel;
- (BOOL)isGoogleChannel;
- (BOOL)isSpotifyChannel;
- (BOOL)isGapChannel;
- (NSURL *)URLWithKeyword:(NSString *)keyword;
- (NSURL *)baseURL;

@end
