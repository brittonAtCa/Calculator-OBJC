Pod::Spec.new do |s|
  s.name             = "Calculator"
  s.version          = "1.0.0"
  s.summary          = <<-SUMMARY
  <p>Simple Calculator API</p>

SUMMARY
  s.homepage         = "http://apimatic.io"
  s.license          = 'MIT'
  s.author           = { "APIMATIC" => "support@apimatic.io" }

  s.requires_arc     = true
  s.ios.deployment_target = '9.0'
  s.source           = {:git => 'https://github.com/brittonAtCa/Calculator-OBJC.git'}

  s.source_files     = 'Calculator/**/*.{h,m}'

  s.dependency       'Unirest-APIMATIC'
  s.dependency       'JSONModel'
  s.dependency       'ISO8601DateFormatter', '~> 0.7'

  s.xcconfig = { 'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES'}
end
