//
//  SKWNavigator.h
//  SKWPeer
//

#ifndef SKWPeer_SKWNavigator_h
#define SKWPeer_SKWNavigator_h


#import <Foundation/Foundation.h>

#import "SKWMediaStream.h"
#import "SKWMediaConstraints.h"

@class SKWPeer;

/**
 Alternative class as browser navigator
 */
@interface SKWNavigator : NSObject

/**
 Initialize navigator
 @param peer Initialized SKWPeer object.
 */
+ (void)initialize:(SKWPeer *)peer;

/**
 Terminate navigator
 */
+ (void)terminate;

/**
 Get video stream
 @param constraints Using media constraints.
 @return Media stream object.
 */
+ (SKWMediaStream *)getUserMedia:(SKWMediaConstraints *)constraints;

@end


#endif