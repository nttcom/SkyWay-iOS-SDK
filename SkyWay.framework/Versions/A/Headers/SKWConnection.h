//
//  SKWConnection.h
//  SKWPeer
//

#ifndef SKWPeer_SKWPeerConnection_h
#define SKWPeer_SKWPeerConnection_h


#import <Foundation/Foundation.h>

#import "RTCPeerConnection.h"


@class SKWPeer;


/**
 Serialization type
 */
typedef NS_ENUM(NSUInteger, SKWSerializationEnum)
{
	/// Binary
	SKW_SERIALIZATION_BINARY = 0,
	/// Binary (UTF-8)
	SKW_SERIALIZATION_BINARY_UTF8 = 1,
	/// JSON
	SKW_SERIALIZATION_JSON = 2,
	/// NONE
	SKW_SERIALIZATION_NONE = 3,
};


@interface SKWConnection : NSObject

/// Connection ID
@property (nonatomic, readonly) NSString* connectionId;
/// Payload
@property (nonatomic, readonly) NSDictionary* payload;
/// Any type of metadata associated with the connection, passed in by whoever initiated the connection.
@property (nonatomic, readonly) NSString* metadata;
/// This is true if the connection is open and ready for read/write.
@property (nonatomic, readonly) BOOL isOpen;
/// The ID of the peer on the other end of this connection.
@property (nonatomic, readonly) NSString* peer;
/// For type of connection.
@property (nonatomic, readonly) NSString* type;
/// The optional label passed in or assigned by PeerJS when the connection was initiated.
@property (nonatomic, readonly) NSString* label;
/// Whether the underlying data channels are reliable; defined when the connection was initiated.
@property (nonatomic, readonly) BOOL reliable;
/// The serialization format of the data sent over the connection. Can be binary (default), binary-utf8, json, or none.
@property (nonatomic, readonly) SKWSerializationEnum serialization;
/// Provider PeerObjC object.
@property (nonatomic, weak, readonly) SKWPeer* provider;
/// A reference to the RTCPeerConnection object associated with the connection.
@property (nonatomic, readonly) RTCPeerConnection* peerConnection;

#pragma mark - Objective-C dependent

/**
 Queing to get peer connection state.
 @param bOutputDebug Output state information of debug level
 @param callback Callback block
 */
- (void)getPeerConnectionState:(BOOL)bOutputDebug callback:(void(^)(NSArray *))callback;

@end


#endif