# Deprecated!

We have released a new WebRTC platform, [ECLWebRTC](https://webrtc.ecl.ntt.com/en/?origin=skyway), to take the place of SkyWay. We will be shutting down the SkyWay servers in March 2018. Customers who are currently using SkyWay are required to migrate to ECLWebRTC by then or their services will stop working.

If you are looking for the repository of ECLWebRTC, please see the [new iOS SDK](https://github.com/skyway/skyway-ios-sdk).

このレポジトリは、2018年3月に提供を終了する旧SkyWayのiOS SDKです。[新しいSkyWay](https://webrtc.ecl.ntt.com/?origin=skyway)への移行をお願いします。

すでに新しいSkyWayをご利用の方は、[新しいiOS SDK](https://github.com/skyway/skyway-ios-sdk)をご覧ください。

## SkyWay-iOS-SDK

"SkyWay iOS SDK" is a framework that enables using SkyWay in iOS apps.<br>
SkyWay simplifies peer-to-peer data, video, and audio calls using WebRTC.

### Learn more
* [Getting Started/API Reference](http://nttcom.github.io/skyway/en/docs/#iOS)
* [Sample Application](https://github.com/nttcom/SkyWay-iOS-Sample)

### Supported OS
iOS 7+

### Notes
We are using Git Large File Storage from v0.2.2.
Because SkyWay.framework is too big to put github repository.(over 100MB)
If you download them from DOWNLOAD ZIP button, SkyWay.framework doesn't contain binary file.

You can download below.
1. download from [here](https://s3-ap-northeast-1.amazonaws.com/skyway-sdk-production/skyway-ios-sdk.zip)
2. Install git-lfs & download from this repository using 'git clone https://github.com/nttcom/SkyWay-iOS-SDK.git'

---
## SkyWay-iOS-SDK

「SkyWay iOS SDK」はSkyWayをiOSから利用できるフレームワークです。<br>
SkyWayは、WebRTCを利用したピア·ツー·ピアのデータ、ビデオ、オーディオ通信を簡単に実現します。

### 関連リンク
* [Getting Started/API Reference](http://nttcom.github.io/skyway/en/docs/#iOS)
* [サンプルアプリ](https://github.com/nttcom/SkyWay-iOS-Sample)

### 対応OS
iOS 7+

### 注意事項
このリポジトリは、Git Large File Storageを利用しています（SDK v0.2.2以降）。
そのため、DOWNLOAD ZIPボタンを使ってダウンロードすると、ビルドエラーが発生します。
SDKのダウンロードは、以下のいずれかの方法で行って下さい。

1. [こちらのリンク](https://s3-ap-northeast-1.amazonaws.com/skyway-sdk-production/skyway-ios-sdk.zip)からダウンロード
2. git-lfsをinstallし、'git clone https://github.com/nttcom/SkyWay-iOS-SDK.git' でクローン
