Pod::Spec.new do |s|

  s.name         = "iQKit"
  s.version      = "0.8"
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
  
  s.public_header_files = "iQKit/include/**/*.h"
  s.resources = "iQKit/iQKitResources.bundle"
  s.ios.vendored_libraries = 'iQKit/libiQKit.a'
  s.frameworks = "AVFoundation", "CoreLocation", "CoreText"
  s.requires_arc = true

  s.dependency 'SDWebImage', '~> 3.7'
  s.dependency 'NFAllocInit', '~> 1.0'
  s.dependency 'SVProgressHUD', '~> 1.0'

end
