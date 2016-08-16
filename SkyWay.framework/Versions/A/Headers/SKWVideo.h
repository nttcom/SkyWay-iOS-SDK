//
//  SKWVideo.h
//  SKWPeer
//

#ifndef SKWPeer_SKWVideo_h
#define SKWPeer_SKWVideo_h

#import <UIKit/UIKit.h>


#import "SKWMediaStream.h"

/**
 Video view
 */
@interface SKWVideo : UIView

/**
 Add media stream.
 @param stream Media stream.
 @param trackNo Media track number.
 @return Result code.
 */
- (BOOL)addSrc:(SKWMediaStream *)stream track:(NSUInteger)trackNo;

/**
 Remove video stream.
 @param stream Media stream.
 @param trackNo Media track number.
 @return Result code.
 */
- (BOOL)removeSrc:(SKWMediaStream *)stream track:(NSUInteger)trackNo;

/**
 Set change video size callback.
 @param callback Callback block.
 */
- (void)setDidChangeVideoSizeCallback:(void (^)(CGSize))callback;

/**
 Set mirror viewing
 @param mirror Mirror viewing.
 */
- (void)setMirrorViewing:(BOOL)mirror;

@end


#endif