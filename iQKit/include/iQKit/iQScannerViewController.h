//
//  iQScannerViewController.h
//  iQKit
//
//  Copyright (c) 2015 iQNECT. All rights reserved.
//

#import "iQViewController.h"
#import <AVFoundation/AVFoundation.h>

@class iQScannerViewController;
@class iQAPISearchResponse;

typedef NS_ENUM(NSInteger, iQScannerViewControllerIntent) {
    iQScannerViewControllerIntentBarcode,
    iQScannerViewControllerIntentQR,
    iQScannerViewControllerIntentPhoto,
    iQScannerViewControllerIntentBusinessCard
};

@protocol iQScannerViewControllerDelegate <NSObject>

- (void)scannerViewController:(iQScannerViewController *)scannerViewController didLoadSearchResponse:(iQAPISearchResponse *)searchResponse;
- (void)scannerViewController:(iQScannerViewController *)scannerViewController didSearchWithKeyword:(NSString *)keyword;
@optional
- (void)scannerViewControllerDidTapMusic:(iQScannerViewController *)scannerViewController;
- (void)scannerViewControllerDidCancel:(iQScannerViewController *)scannerViewController;
- (void)scannerViewControllerDidTapMic:(iQScannerViewController *)scannerViewController;

@end

@interface iQScannerViewController : iQViewController <AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>

@property (nonatomic, assign) NSObject<iQScannerViewControllerDelegate> *delegate;

/*!
 @abstract Determines how the scanner should handle failed image searches.
 
 @param handleFailedImages - If YES, the scanner will present a form for the user to submit the failed image to the image database. If NO the scanner will return with a nil response. Defaults to YES.
 */
@property (nonatomic, assign) BOOL handleFailedImages;

@end
