//
//  SKWDataConnection.h
//  SKWPeer
//

#ifndef SKWPeer_SKWPeerDataConnection_h
#define SKWPeer_SKWPeerDataConnection_h


#import <Foundation/Foundation.h>

#import "SKWConnection.h"
#import "SKWConnectOption.h"
#import "SKWDataChannel.h"

/**
 Data connection event type
 */
typedef NS_ENUM(NSUInteger, SKWDataConnectionEventEnum)
{
	/// Emitted when the connection is established and ready-to-use.
	SKW_DATACONNECTION_EVENT_OPEN,
	/// Emitted when data is received from the remote peer.
	SKW_DATACONNECTION_EVENT_DATA,
	/// Emitted when either you or the remote peer closes the data connection.
	SKW_DATACONNECTION_EVENT_CLOSE,
	/// Errors on the data conenction are almost always fatal and will destroy the data connection.
	SKW_DATACONNECTION_EVENT_ERROR,
};

/**
 Alternative class as DataConnection
 */
@interface SKWDataConnection : SKWConnection

/// A reference to the SKWDataChannel object associated with the connection.
@property (nonatomic, readonly) SKWDataChannel* dataChannel;
/// The number of messages queued to be sent once the browser buffer is no longer full.
@property (nonatomic, readonly) NSUInteger bufferSize;

/**
 data is sent to the remote peer.
 @param data You can send any type of NSData object.
 @return Mehtod result.
 */
- (BOOL)send:(NSObject *)data;

/**
 Closes the data connection gracefully, cleaning up underlying DataChannels and PeerConnections.
 */
- (void)close;

/**
 Set callbacks for data connection events. (Block Literal Syntax)
 @param event Event type
 @param callback Callback block
 */
- (void)on:(SKWDataConnectionEventEnum)event callback:(void (^)(NSObject *))callback;

@end


#endif