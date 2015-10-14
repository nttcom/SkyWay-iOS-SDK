SkyWay iOS SDK release notes
=============================

[English](./release-notes.en.md)

###　新機能
--------------------------

Version 0.2.0

- iOS9、Xcode7での動作をサポートしました。ただし、Bitcodeにはサポートしていないため、Build SettingsのBuild Options > Enable BitcodeをNOに設定してください。

- 新しく以下のフレームワークの追加が必要になります。
	- CoreVideo.framework
	- VideoToolbox.framework 

- SWKMediaStreamにメソッドを追加しました。
	- setCameraPosition
	- getcameraPosition

- SKWMediaConstraintsのmaxWidth, minWidth, maxHeight, minHeight, maxFrameRate, minFrameRateの仕様が変更となりました。

- H.264のハードウェア支援有効化に対応しました(iOS 8.0以降)。

- サポート端末を変更しました。
	- iPod Touch 5を対象外としました。

- SKWDataConnectionクラスのmetadataオプションの不具合を解消しました。

--------------------------
Version 0.1.0

* first release
