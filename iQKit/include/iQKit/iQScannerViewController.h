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
@optional
- (void)scannerViewControllerDidCancel:(iQScannerViewController *)scannerViewController;

@end

@interface iQScannerViewController : iQViewController <AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>

@property (nonatomic, assign) NSObject<iQScannerViewControllerDelegate> *delegate;

@end
