//
//  SKWMediaConstraints.h
//  SKWPeer
//

#ifndef SKWPeer_SKWMediaConstraints_h
#define SKWPeer_SKWMediaConstraints_h


#import <Foundation/Foundation.h>

/**
 Device camera position
 */
typedef NS_ENUM(NSUInteger, SKWCameraPositionEnum)
{
	/// Unspecified
	SKW_CAMERA_POSITION_UNSPECIFIED = 0,
	/// Back camera
	SKW_CAMERA_POSITION_BACK = 1,
	/// Front camera
	SKW_CAMERA_POSITION_FRONT = 2,
};

/**
 Device camera mode
 */
typedef NS_ENUM(NSUInteger, SKWCameraModeEnum)
{
    /// Camera Switchable
    SKW_CAMERA_MODE_SWITCHABLE = 0,
    /// Width/Height Adjustable
    SKW_CAMERA_MODE_ADJUSTABLE = 1,
};

/**
 Media constraints class
 */
@interface SKWMediaConstraints : NSObject < NSCopying >

/// Using video track. Default value is YES.
@property (nonatomic) BOOL videoFlag;
/// Using audio track. Default value is YES.
@property (nonatomic) BOOL audioFlag;
/// Using camera position. Default value is SKW_CAMERA_POSITION_FRONT.
@property (nonatomic) SKWCameraPositionEnum cameraPosition;
/// Using camera mode. Default value is SKW_CAMERA_MODE_SWITCHABLE.
@property (nonatomic) SKWCameraModeEnum cameraMode;

/// Mandatory ///

/// Maximum width pixel. 0 is Engine default. Default value is 640.
@property (nonatomic) NSUInteger maxWidth;
/// Minimum width pixel. 0 is Engine default. Default value is 192.
@property (nonatomic) NSUInteger minWidth;
/// Maximum height pixel. 0 is Engine default. Default value is 640.
@property (nonatomic) NSUInteger maxHeight;
/// Minimum height pixel. 0 is Engine default. Default value is 144.
@property (nonatomic) NSUInteger minHeight;
/// Maximum frame rate. 0 is Engine default. Default value is 10.
@property (nonatomic) NSUInteger maxFrameRate;
/// Minimum frame rate. 0 is Engine default. Default value is 2.
@property (nonatomic) NSUInteger minFrameRate;

/// Optional ///

@end


#endif