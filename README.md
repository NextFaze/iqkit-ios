iQKit iOS SDK
-------------

The iQKit iOS SDK gives you access to the powerful iQNECT Vision Search platform
to integrate into your iOS app.

Installation
------------

#### With CocoaPods

Using [CocoaPods](https://cocoapods.org), add to your podfile:

```
pod 'iQKit', '~> 1.0'
```

Run `pod install` to download the SDK and install it into your project, along with the SDK's dependencies.


Initialization
---------------

#### Required

In your App Delegate, initialise the SDK with the App ID and secret you obtained from the [iQNECT Developer Portal](http://developer.iqnect.org):

```ojbc
#import "iQKit.h"
```

```objc
[iQKit setAppID:@"APP-ID"
   andAppSecret:@"APP-SECRET"];
```

#### Optional

For best results, report some further information about the user:

```objc
[iQKit setUserAge:@(42)];
[iQKit setUserGender:@"f"]; 
```

The age and gender can be updated at anytime with these functions.

Usage
-----

#### Vision Search

To initiate a vision search, add the following code to an appropriate view controller:

```objc
iQScannerViewController *scannerViewController = [[iQScannerViewController alloc] init];
scannerViewController.delegate = self;
[self presentViewController:scannerViewController animated:NO completion:nil];
```

When the search is complete, you will get a callback via the `iQScannerViewControllerDelegate` protocol:

```objc
- (void)scannerViewController:(iQScannerViewController *)scannerViewController didLoadSearchResponse:(iQAPISearchResponse *)searchResponse
{    
    [self dismissViewControllerAnimated:YES completion:^{
		NSLog(@"Payload URL: %@", searchResponse.payload);
    }];
}
```

In the callback, the `iQAPISearchResponse` ojbect has a `payload` property which is the URL returned by the search. Use this URL, typically to load in a web view or to open the iQNECT app.

#### Keyword Search

Unlike the vision search, keyword search does not present any UI. In this case, you will pass a keyword(`NSString`) to a SearchRequest object and send the request. There is a block parameter to place your response handling code.

```objc
[[iQAPISearchRequest requestWithKeyword:@"keyword"] runWithCompletionHandler:^(iQAPISearchResponse *response) {    NSLog(@"Payload: %@", response.payload); }];```

#### Image Search

This is the same as the Keyword search, except the parameter is of type `UIImage`. 

```objc
[[iQAPISearchRequest requestWithImage:image] runWithCompletionHandler:^(iQAPISearchResponse *response) {    NSLog(@"Payload: %@", response.payload); }];
```