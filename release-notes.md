SkyWay iOS SDK release notes
=============================

[English](./release-notes.en.md)

###　新機能
--------------------------
**Version 0.2.2**

- MediaConnectionクラスのmetadataオプションの不具合を解消しました。

- SKWMediaConstraintsにcameraModeプロパティを追加しました。
	- cameraModeプロパティ
		- SKW_CAMERA_MODE_SWITCHABLE(デフォルト)：メディアストリームを送信中にカメラの切り替えが可能です
		- SKW_CAMERA_MODE_ADJUSTABLE：カメラのwidth/heightを変更可能です。

--------------------------
**Version 0.2.1**

- SWKMediaStreamにメソッドを追加しました。
	- switchCamera

- SKWPeerOptionの*turn*プロパティのデフォルトを ```YES``` に変更しました。

- SKWPeerクラスの*disconnect*メソッドにて、既存のピア接続が切断される不具合を解消しました。

- SKWMediaConstraintsクラスの*videoFlag*プロパティが ```NO``` の時に、再接続を行うと誤動作が発生する不具合を解消しました。

- H.264のハードウェア支援有効化をデフォルトでOFFにしました。
	- 現在接続数が多くなると不具合が発生することが確認されたためです。
	- H.264での通信かつ接続数が少なくなるような利用をされる方で、CPU負荷や本体の発熱等を抑えたい場合は、SKWPeerOptionの*useH264*プロパティ（リファレンスには未記載）を ```YES``` にして下さい。

--------------------------
**Version 0.2.0**

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
**Version 0.1.0**

* first release
