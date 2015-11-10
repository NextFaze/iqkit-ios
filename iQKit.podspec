Pod::Spec.new do |s|

  s.name         = "iQKit"
  s.version      = "0.9.1"
  s.summary      = "Search by iQNECT."
  s.description  = <<-DESC
                   Search by iQNECT

                   * text/keyword search
                   * image search
                   DESC
  s.homepage     = "https://github.com/iqnect-org/iqkit-ios"
  s.license      = { :type => "Commercial", :text => "http://iqnect.org/business/terms-and-conditions/" }
  s.author        = "iQNECT"
  s.social_media_url   = "https://twitter.com/iQNECT_org"

  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/iqnect-org/iqkit-ios.git", :tag => s.version.to_s }
  
  s.source_files = "iQKit/include/iQKit/*.h"
  s.public_header_files = "iQKit/include/iQKit/*.h"

  s.resources = "iQKit/iQKitResources.bundle"
  s.vendored_libraries = 'iQKit/libiQKit.a'
  s.frameworks = "AVFoundation", "CoreLocation", "CoreText", "CoreData", "QuartzCore"
  s.library  = "c++"
  s.requires_arc = true

  s.dependency 'NFAllocInit', '~> 1.0'
  s.dependency 'SVProgressHUD', '1.0'
  s.dependency 'TPKeyboardAvoiding', '~> 1.0'
  s.dependency 'SDWebImage', '3.7.1'
  s.dependency 'youtube-ios-player-helper', '~> 0.1.4'
  s.dependency 'REFrostedViewController', '2.4.8'
  s.dependency 'SBJson', '~> 4.0.1'
  s.dependency 'Masonry'
  s.dependency 'OpenCV', '2.4.9'

end
