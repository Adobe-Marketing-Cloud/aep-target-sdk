Pod::Spec.new do |s|
  s.name         = "ACPTargetVEC"
  s.version      = "2.1.0"
  s.summary      = "This framework lets your personalize content on native mobile apps in a do-it-yourself fashion"
  s.description  = <<-DESC
                    Adobe Target Visual Experience Composed (Target VEC) for Mobile Apps lets you personalize content on native mobile apps in a do-it-yourself fashion without continous development dependencies and app-release cycles
                   DESC
  s.homepage     = "https://github.com/Adobe-Marketing-Cloud/aep-target-sdk"
  s.license      = {:type => "Commercial", :text => "Adobe Inc. All Rights Reserved"}
  s.author       = "Adobe Inc"
  s.platform     = :ios, '10.0'
  s.static_framework = true
  s.source       = { :git => 'https://github.com/Adobe-Marketing-Cloud/aep-target-sdk.git', :tag => "v#{s.version}-#{s.name}" }
  s.dependency "ACPCore", ">= 2.2.1"
  s.dependency "ACPTarget", "> 2.0.0"

  s.requires_arc = true
  s.vendored_libraries = "iOS/ACPTargetVEC/libACPTargetVEC.a"
  s.source_files = 'iOS/ACPTargetVEC/include/*.h', "iOS/ACPTargetVEC/include/*.m"
  s.frameworks = "UIKit", "SystemConfiguration"
  s.libraries = "sqlite3.0", "c++", "z"

end
