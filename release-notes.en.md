SkyWay iOS SDK release notes
=============================

[日本語](./release-notes.md)

###　New features
--------------------------
**Version 0.2.2**

- Fixed a bug in the metadata option of MediaConnection.

- Added cameraMode property to SKWMediaConstraints Class.
	- cameraMode
  	- SKW_CAMERA_MODE_SWITCHABLE(default)：You can change the camera during the transmission of the media stream.
		- SKW_CAMERA_MODE_ADJUSTABLE：You can change width/height.

--------------------------
**Version 0.2.1**

- Added methods to SKWMediaStream Class.
	- switchCamera

- Changed the default value to ```YES``` on *turn* property of SKWPeerOption Class.

- Fixed bug that disconnected existing P2P connections, when *disconnect* method of SKWPeer Class was called.

- Fixed bug that caused reconnecting to fail, when *videoFlag* property of SKWMediaConstraints Class is ```NO```.

- Changed the dafault value to OFF on supporting for H.264 hardware encoding.
	- When there is a lot of connections, an error occurs.
	- If you're using only a few H.264 connections and you want to reduce CPU load and device heat etc, please set *useH264* property to ```YES```.

--------------------------
**Version 0.2.0**

- Support for iOS 9 & Xcode 7. This SDK doesn't support Bitcode, so please set "Build Options > Enable Bitcode = NO" in Build Settings.

- It is necessary to add the additional frameworks below.
	- CoreVideo.framework
	- VideoToolbox.framework

- Added methods to SKWMediaStream Class.
	- setCameraPosition
	- getcameraPosition

- Changed specs maxWidth, minWidth, maxHeight, minHeight, maxFrameRate, minFrameRate of SKWMediaConstraints Class.

- Support for H264 hardware encoding (iOS 8.0+).

- Changed supported devices
	- Removed iPod Touch 5

- Fixed a bug in the metadata option of SKWDataConnection.

--------------------------
**Version 0.1.0**

* first release
