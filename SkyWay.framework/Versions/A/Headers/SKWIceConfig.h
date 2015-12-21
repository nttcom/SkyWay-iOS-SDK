//
//  SKWIceConfig.h
//  SKWPeer
//

#ifndef SKWPeer_SKWIceConfig_h
#define SKWPeer_SKWIceConfig_h


#import <Foundation/Foundation.h>

/**
 ICE server config
 */
@interface SKWIceConfig : NSObject < NSCopying >

/// STUN/TURN server URL string (ex. stun:stun.l.google.com:19302, turn:homeo@turn.bistri.com:80, turn:153.149.7.233:443?transport=udp, turn:153.149.7.233:443?transport=tcp)
@property (nonatomic) NSString* url;
/// User name string
@property (nonatomic) NSString* username;
/// Credential string
@property (nonatomic) NSString* credential;

@end


#endif