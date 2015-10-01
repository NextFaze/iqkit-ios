//
//  iQSpeechViewController.h
//  iQKit
//
//  Created by Daniel Silk on 3/06/2015.
//  Copyright (c) 2015 iQNECT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "iQKitVoiceEngine.h"

@protocol iQKitSpeechViewControllerDelegate <NSObject>

//Callback once recording is finished
- (void)recordingFinishedWithResult:(iQKitVoiceRecognition *)results error:(NSError *)error suggestion:(NSString *)suggestion;

@end

@interface iQSpeechViewController : UIViewController

@property (nonatomic, assign) id<iQKitSpeechViewControllerDelegate> delegate;

@end
