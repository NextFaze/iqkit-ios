//
//  iQAPIRequest.h
//  iQKit
//
//  Copyright (c) 2015 iQNECT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NFAllocInit.h"
#import "iQAPIErrorResponse.h"

@interface iQAPIRequest : NSObject

#pragma mark - Protected

@property (nonatomic, readonly) NSMutableDictionary *params;
@property (nonatomic, readonly) NSDateFormatter *dateFormatter;
@property (nonatomic, readonly) iQAPIErrorResponse *errorResponse;
@property (nonatomic, assign) BOOL needsSigning;

- (NSURL *)URLWithEndpoint:(NSString *)endpoint;
- (NSURL *)URLWithEndpoint:(NSString *)endpoint andParams:(NSDictionary *)params;
- (void)addParam:(id)param forKey:(NSString *)key;

- (NSMutableURLRequest *)URLRequestWithURL:(NSURL *)URL;
- (NSMutableURLRequest *)POSTURLRequestWithURL:(NSURL *)URL andParams:(NSDictionary *)params;
- (NSMutableURLRequest *)multipartPOSTURLRequestWithURL:(NSURL *)URL andParams:(NSDictionary *)params;

- (void)sendRequest:(NSURLRequest *)request withCompletionHandler:(void (^)(NSInteger statusCode, id jsonObject))completionHandler;

#pragma mark - Public

@property (nonatomic, assign) BOOL isLegacyRequest;

+ (instancetype)request;
- (void)runWithCompletionHandler:(void (^)(void))handler;

@end
