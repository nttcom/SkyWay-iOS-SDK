Pod::Spec.new do |s|
  s.name             = 'SkyWay-iOS-SDK'
  s.version          = '0.2.1'
  s.summary          = 'SkyWay simplifies peer-to-peer data, video, and audio calls using WebRTC.'
  s.description      = <<-DESC
  "SkyWay iOS SDK" is a framework that enables using SkyWay in iOS apps.
SkyWay simplifies peer-to-peer data, video, and audio calls using WebRTC.
                       DESC
  s.homepage         = 'https://github.com/nttcom/SkyWay-iOS-SDK'
  s.license          = { :type => 'MIT', :file => 'LICENSE.txt' }
  s.author           = { 'NTT Communications' => 'skyway@ntt.com' }
  s.source           = { :git => 'https://github.com/nttcom/SkyWay-iOS-SDK.git', :tag => 'v0.2.1' }
  s.ios.deployment_target = '7.0'
  s.vendored_frameworks = 'SkyWay.framework'
  s.frameworks = 'AudioToolbox', 'AVFoundation', 'CoreMedia','CoreVideo','VideoToolbox','CoreGraphics','Foundation','GLKit','SystemConfiguration'
  s.ios.libraries = 'c++', 'stdc++.6.0.9','sqlite3','icucore'
end