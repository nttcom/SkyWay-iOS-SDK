//
//  SKWPeerOption.h
//  SKWPeer
//

#ifndef SKWPeer_SKWPeerOption_h
#define SKWPeer_SKWPeerOption_h


#import <Foundation/Foundation.h>

/**
 Peer type
 */
typedef NS_ENUM(NSUInteger, SKWPeerTypeEnum)
{
	/// skyway.io
	SKW_PEER_TYPE_SKYWAY = 0,
	/// peerjs.com
	SKW_PEER_TYPE_PEERJS = 1,
};

/**
 Debug output level
 */
typedef NS_ENUM(NSUInteger, SKWDebugLevelEnum)
{
	/// Prints no logs.
	SKW_DEBUG_LEVEL_NO_LOGS = 0,
	/// Prints only errors.
	SKW_DEBUG_LEVEL_ONLY_ERROR = 1,
	/// Prints errors and warnings.
	SKW_DEBUG_LEVEL_ERROR_AND_WARNING = 2,
	/// Prints all logs.
	SKW_DEBUG_LEVEL_ALL_LOGS = 3,
};

/**
 SKWPeer initialize option class
 */
@interface SKWPeerOption : NSObject < NSCopying >

/// Type of the PeerServer. Defaults to PEER_TYPE_SKYWAY.
@property (nonatomic) SKWPeerTypeEnum type;
/// API key for the cloud PeerServer.
@property (nonatomic) NSString* key;
/// PeerServer host. Defaults to 0.peerjs.com. Also accepts '/' to signify relative hostname
@property (nonatomic) NSString* host;
/// PeerServer port.
@property (nonatomic) NSInteger port;
/// The path where your self-hosted PeerServer is running. Defaults to '/'.
@property (nonatomic) NSString* path;
/// true if you're using SSL.
@property (nonatomic) BOOL secure;
/// This contains any custom ICE/TURN server configuration.
@property (nonatomic) NSArray* config;
/// Prints log messages depending on the debug level passed in. Defaults to PEER_DEBUG_LEVEL_NO_LOGS.
@property (nonatomic) SKWDebugLevelEnum debug;
/// Domain related to the SkyWay API Key
@property (nonatomic) NSString* domain;
/// Using SkyWay TURN server. (Need to request for a TURN server use to SkyWay)
@property (nonatomic) BOOL turn;
/// Using Hardware codec H.264 (iOS 8.0 later)
@property (nonatomic) BOOL useH264;

@end


#endif
