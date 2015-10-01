//
//  iQKitVoiceEngine.h
//  iQKit
//
//  Created by Daniel Silk on 3/06/2015.
//  Copyright (c) 2015 iQNECT. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum transactionState {
    TS_IDLE,
    TS_INITIAL,
    TS_RECORDING,
    TS_PROCESSING,
} transactionState;

@class iQKitVoiceEngine;
@class iQKitVoiceRecognition;

@protocol iQKitVoiceEngineDelegate <NSObject>

@optional
/*!
 @abstract Sent when the recognizer starts recording audio.
 
 @param recognizer The engine sending the message.
 */
- (void)recognizerDidBeginRecording:(iQKitVoiceEngine *)recognizer;

/*!
 @abstract Sent when the recognizer stops recording audio.
 
 @param recognizer The engine sending the message.
 */
- (void)recognizerDidFinishRecording:(iQKitVoiceEngine *)recognizer;

@required
/*!
 @abstract Sent when the recognition process completes successfully.
 
 @param recognizer The engine sending the message.
 @param results The iQKitVoiceRecognition object containing the recognition results.
 
 @discussion This method is only called when the recognition process completes
 successfully.  The results object contains an array of possible results, with
 the best result at index 0 or an empty array if no error occurred but no
 speech was detected.
 */
- (void)recognizer:(iQKitVoiceEngine *)recognizer didFinishWithResults:(iQKitVoiceRecognition *)results;

/*!
 @abstract Sent when the recognition process completes with an error.
 
 @param recognizer The recognizer sending the message.
 @param error The recognition error.
 @param suggestion This is a suggestion to the user about how he or she can
 improve recognition performance and is based on the audio received.  Examples
 include moving to a less noisy location if the environment is extremely noisy, or
 waiting a bit longer to start speaking if the beeginning of the recording seems
 truncated.  Results are often still present and may still be of useful quality.
 
 @discussion This method is called when the recognition process results in an
 error due to any number of circumstances.  The audio system may fail to
 initialize, the server connection may be disrupted or a parameter specified
 during initialization, such as language or authentication information was invalid.
 */
- (void)recognizer:(iQKitVoiceEngine *)recognizer didFinishWithError:(NSError *)error suggestion:(NSString *)suggestion;

@end

@protocol iQKitVoiceRecognitionDelegate <NSObject>

//Callback once recording is finished
- (void)recordingFinishedWithResult:(iQKitVoiceRecognition *)results error:(NSError *)error suggestion:(NSString *)suggestion;

@end

@interface iQKitVoiceEngine : NSObject

/*!
 @abstract Current transaction state of the voice engine
 */
@property (nonatomic, assign) transactionState transactionState;

/*!
 @abstract Delegate class to handle the iQKitVoiceEngineDelegate methods
 */
@property (nonatomic, assign) id<iQKitVoiceEngineDelegate> delegate;

/*!
 @abstract Returns the current audio level from the engine
 */
@property (nonatomic, readonly) float audioLevel;

/*!
 @abstract Start voice engine and listening
 
 @discussion This method will start your chosen Voice-to-text SDK
 */
- (void) initVoiceSearch;

/*!
 @abstract Stop the voice engine.
 */
- (void) stopRecording;

/*!
 @abstract Indicates the voice search was cancelled.
 */
- (void) cancel;

@end

@interface iQKitVoiceRecognition : NSObject

/*!
 @abstract An NSArray containing NSStrings corresponding to what may have been
 said, in order of likelihood.
 */
@property (strong, nonatomic) NSArray *results;

/*!
 @abstract An NSArray of NSNumbers containing the confidence scores
 corresponding to each recognition result in the results array.
 */
@property (strong, nonatomic) NSArray *scores;

/*!
 @abstract A server-generated suggestion suitable for presentation to the user.
 */
@property (strong, nonatomic) NSString *suggestion;

/*!
 @abstract Additional service-specific data.
 */
@property (strong, nonatomic) NSObject *data;

/*!
 @abstract Returns the first NSString result in the results array.
 @result The first NSString result in the results array or nil.
 
 @discussion This is a convenience method to simply return the best result in the
 list of results returned from the recognition server.  It returns nil if the list
 of results is empty.
 */
- (NSString *)firstResult;

@end
