//
//  SKWConnectOption.h
//  SKWPeer
//

#ifndef SKWPeer_SKWConnectOption_h
#define SKWPeer_SKWConnectOption_h


#import <Foundation/Foundation.h>

#import "SKWConnection.h"

/**
 SKWPeer connect options
 */
@interface SKWConnectOption : NSObject < NSCopying >

/// The optional label passed in or assigned by PeerJS when the connection was initiated.
@property (nonatomic) NSString* label;
/// Any type of metadata associated with the connection, passed in by whoever initiated the connection.
@property (nonatomic) NSString* metadata;
/// The serialization format of the data sent over the connection.
@property (nonatomic) SKWSerializationEnum serialization;
/// Whether the underlying data channels are reliable; defined when the connection was initiated.
@property (nonatomic) BOOL reliable;

@end


#endif