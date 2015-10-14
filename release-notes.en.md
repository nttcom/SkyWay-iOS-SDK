SkyWay iOS SDK release notes
=============================

[日本語](./release-notes.md)

###　New features
--------------------------

Version 0.2.0

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
Version 0.1.0

* first release
