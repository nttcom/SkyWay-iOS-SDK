//
//  SKWMediaStream.h
//  SKWPeer
//

#ifndef SKWPeer_SKWMediaStream_h
#define SKWPeer_SKWMediaStream_h


#import <Foundation/Foundation.h>

#import "SKWMediaConstraints.h"

/**
 Media stream
 */
@interface SKWMediaStream : NSObject

/**
 Close all tracks.
 */
- (void)close;

/**
 Get video track count.
 @return Count of video track.
 */
- (NSUInteger)getVideoTracks;

/**
 Set video track enabling state.
 @param pos Track number.
 @param enable Enabling state.
 */
- (void)setEnableVideoTrack:(NSUInteger)pos enable:(BOOL)enable;

/**
 Get video track enabling state.
 @param pos Track number.
 @return Enabling state.
 */
- (BOOL)getEnableVideoTrack:(NSUInteger)pos;

/**
 Get count of audio track.
 @return Count of audio track.
 */
- (NSUInteger)getAudioTracks;

/**
 Set enabling state of audio track.
 @param pos Track number.
 @param enable Enabling state.
 */
- (void)setEnableAudioTrack:(NSUInteger)pos enable:(BOOL)enable;

/**
 Get enabling stare of audio track.
 @param pos Track number.
 @return Enabling state.
 */
- (BOOL)getEnableAudioTrack:(NSUInteger)pos;

/**
 Set camera position.
 @param pos Camera position.
 @return Method result.
 */
- (BOOL)setCameraPosition:(SKWCameraPositionEnum)pos;

/**
 Get camera position.
 @return Current camera position.
 */
- (SKWCameraPositionEnum)getCameraPosition;

/**
 Switch camera.
 @return Method result.
 */
- (BOOL)switchCamera;

@end


#endif