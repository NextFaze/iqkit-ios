//
//  iQKitMusicDetection.h
//  iQKit
//
//  Created by Dan Silk on 20/07/2015.
//  Copyright (c) 2015 iQNECT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class iQKitMusicDetectionResult;

typedef void  (^iQKitMusicDetectionSetupCompletionHandler)(NSError *error);
typedef void  (^iQKitMusicDetectionCompletionHandler)(iQKitMusicDetectionResult *result, BOOL success, BOOL cancelled);
typedef void  (^iQKitMusicDetectionVisualizationHandler)(float RMS);

@interface iQKitMusicDetectionResult : NSObject

@property (strong) NSString *albumArtist;
@property (strong) NSString *albumGenre;
@property (strong) NSString *albumID;
@property (strong) NSString *albumXID;
@property (strong) NSString *albumYear;
@property (strong) NSString *albumTitle;
@property (strong) NSString *albumTrackCount;
@property (strong) NSString *albumLanguage;
@property (strong) NSString *albumReview;
@property (strong) NSData* albumImageData;
@property (strong) NSString* albumImageURLString;
@property (strong) NSString* albumLabel;

@property (strong) NSString *trackArtist;
@property (strong) NSString *trackMood;
@property (strong) NSData* artistImageData;
@property (strong) NSString* artistImageURLString;
@property (strong) NSString *artistBiography;

@property (strong) NSString *currentPosition;
@property (strong) NSString *trackMatchPosition;
@property (strong) NSString *trackDuration;
@property (strong) NSString *trackTempo;
@property (strong) NSString *trackOrigin;
@property (strong) NSString *trackGenre;
@property (strong) NSString *trackID;
@property (strong) NSString *trackXID;
@property (strong) NSString *trackNumber;
@property (strong) NSString *trackTitle;
@property (strong) NSString *trackArtistType;

@end

@interface iQKitMusicDetection : NSObject

@property (nonatomic, assign) NSUInteger maxRetries;
@property (nonatomic, strong) UIImageView *licenceImageView;

- (void)initialSetup;
- (void)setupWithCompletionHandler:(iQKitMusicDetectionSetupCompletionHandler)setupCompletionHandler;
- (void)identifyAlbumWithCompletionHandler:(iQKitMusicDetectionCompletionHandler)completionHandler andVisualizationHandler:(iQKitMusicDetectionVisualizationHandler)visualizationHandler;
- (void)cancel;

@end
