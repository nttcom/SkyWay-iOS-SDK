//
//  SKWCallOption.h
//  SKWPeer
//

#ifndef SKWPeer_SKWCallOption_h
#define SKWPeer_SKWCallOption_h


#import <Foundation/Foundation.h>

/**
 SKWPeer call options
 */
@interface SKWCallOption : NSObject < NSCopying >

/// Any type of metadata associated with the connection, passed in by whoever initiated the connection.
@property (nonatomic) NSString* metadata;

@end


#endif