//
//  SKWMediaConnection.h
//  SKWPeer
//

#ifndef SKWPeer_SKWPeerMediaConnection_h
#define SKWPeer_SKWPeerMediaConnection_h


#import <Foundation/Foundation.h>

#import "SKWConnection.h"
#import "SKWNavigator.h"
#import "SKWCallOption.h"
#import "SKWVideo.h"

/**
 Media connection event type
 */
typedef NS_ENUM(NSUInteger, SKWMediaConnectionEventEnum)
{
	/// Emitted when a remote peer adds a stream.
	SKW_MEDIACONNECTION_EVENT_STREAM,
	/// Emitted when a remote peer remove a stream.
	SKW_MEDIACONNECTION_EVENT_REMOVE_STREAM,
	/// Emitted when either you or the remote peer closes the media connection.
	SKW_MEDIACONNECTION_EVENT_CLOSE,
	/// Errors on the media conenction are almost always fatal and will destroy the media connection.
	SKW_MEDIACONNECTION_EVENT_ERROR,
};

/**
 Alternative class as MediaConnection
 */
@interface SKWMediaConnection : SKWConnection

/**
 When recieving a call event on a peer, you can call .answer on the media connection provided by the callback to accept the call.
 */
- (void)answer;

/**
 When recieving a call event on a peer, you can call .answer on the media connection provided by the callback to accept the call.
 @param stream Video stream
 */
- (void)answer:(SKWMediaStream *)stream;

/**
 Closes the media connection.
 */
- (void)close;

/**
 Set callbacks for media connection events. (Block Literal Syntax)
 @param event Event type
 @param callback Callback block literal
 */
- (void)on:(SKWMediaConnectionEventEnum)event callback:(void (^)(NSObject *))callback;


@end


#endif