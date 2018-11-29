//
//  SKWPeerCommon.h
//  SKWPeer
//

#ifndef SKWPeer_SKWCommon_h
#define SKWPeer_SKWCommon_h


#ifdef DEBUG
	#define DLog(fmt, ...) NSLog((@"%s [L:%d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
	#define DLog(...)
#endif

#if defined(__cplusplus)
	#define SKW_EXPORT extern "C"
#else
	#define SKW_EXPORT extern
#endif


#endif