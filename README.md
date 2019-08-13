# Adobe Target VEC SDK
Home of the official Target VEC SDKs for mobile apps.

## Documentation Links
- [Adobe Target Documentation](https://docs.adobe.com/content/help/en/target/using/implement-target/mobile-apps/composer/mobile-visual-experience-composer.html)
- [Adobe Target VEC SDK documentation](https://aep-sdks.gitbook.io/docs/using-mobile-extensions/adobe-target-vec)

Adobe Target VEC SDK depends on ACP Core and Adobe Target SDK 

More details about them can be found at:
- [Adobe Experience Platform SDK documentation](https://aep-sdks.gitbook.io/docs/)
- [Adobe Target SDK documentation](https://aep-sdks.gitbook.io/docs/using-mobile-extensions/adobe-target)
- [Launch documentation](https://docs.adobelaunch.com/)

# Latest Versions

| Extension | Cocopods | Maven | Github |
| :--- | :--- | :--- | :--- |
| [Adobe Target VEC](https://aep-sdks.gitbook.io/docs/using-mobile-extensions/adobe-target-vec) | [![Cocoapods](https://img.shields.io/cocoapods/v/ACPTargetVEC.svg?color=orange&label=ACPTargetVEC&logo=apple&logoColor=white&style=flat-square)](https://cocoapods.org/pods/ACPTargetVEC) | [![Maven Central](https://img.shields.io/maven-central/v/com.adobe.marketing.mobile/target-vec.svg?logo=android&logoColor=white)](https://mvnrepository.com/artifact/com.adobe.marketing.mobile/target-vec) | [Android](https://github.com/Adobe-Marketing-Cloud/aep-target-sdk/tree/master/android) \| [iOS](https://github.com/Adobe-Marketing-Cloud/aep-target-sdk/tree/master/iOS/ACPTargetVEC) |

## Installing the Target VEC SDK for Android

Target VEC SDK supports Android API 16 (Jelly Bean) and newer.

#### <a name="gradle"></a>Installation using Maven/Gradle << Preferred >>
Installation via [Maven](https://maven.apache.org/) & [Gradle](https://gradle.org/) is the easiest and recommended way to get the AEP SDK into your Android app.  In your `build.gradle` file, include the following dependencies:

    implementation 'com.adobe.marketing.mobile:target:1.+'
    implementation 'com.adobe.marketing.mobile:target-vec:1.+'

    implementation 'android.arch.lifecycle:extensions:1.1.1'
    implementation 'io.github.sac:SocketclusterClientJava:1.7.5'
    implementation 'com.android.support:support-compat:28.0.0'
    implementation 'com.android.support:support-fragment:28.0.0'

#### <a name="manual-android"></a>Manual installation
In order to do a manual installation of the AEP SDK `.aar` binaries, please complete the following steps for each `.aar` you need:
- Download the `.aar` file from the `Android/` directory on the `master` branch.
- Go to "File > New > New Module" in the menu.
- Select the "Import .JAR/.AAR Package" from the New Module window.
- In the "Import Module from Library" dialog, enter the path to the `.aar` you are installing.
   - Enter a Subproject Name of your choice.
- Click "Finish".
- Once Gradle sync is complete and you see the library as a module in the Android project view, add the new library module as a dependency to your app.
   - Right-click on your app module, and select "Open Module Settings".
   - In the next dialog, select your app and click on the "Dependencies" tab.
   - Click on the "+" button on the bottom, and select module dependency.
   - In the next dialog, select the library module as your dependency.

__Important__ - note that all AEP SDK Android binaries depend on `core-1.x.x.aar`.

## Installing the AEP SDK for iOS

The AEP SDK supports iOS 10 and newer.

#### <a name="cocoapods"></a>Installation using Cocoapods << Preferred >>
Installation via [Cocoapods](https://cocoapods.org/) is the easiest and recommended way to get the AEP SDK into your iOS app.  In your `Podfile`, simply add the following changes as needed:

    # minimum supported version of iOS is 10.0
    platform :ios, '10.0'    

    # Uncomment the next line if you're using Swift or would like to use dynamic frameworks
    # use_frameworks!

    # Adobe ACP Pods
    pod 'ACPCore', '~> 2.0'
    pod 'ACPTarget', '~> 2.0'
    pod 'ACPTargetVEC', '~> 2.0'


#### <a name="manual-ios"></a>Manual installation
In order to do a manual installation of the AEP SDK libraries, please complete the following steps:
- Download the extensions needed by your app from the `iOS/` directory.
- In the Xcode project create a new Group, and then drag all the folders you just download and drop them under the group. And verify the following:
    * `The Copy Items if needed checkbox` is selected.
    * `Create groups` is selected.
    * In the`Add to targets` section select all the targets that need AEP SDKs.
- Select your project from the `Project Navigator`, select your App from the `TARGETS` frame, then select the `General` tab at the top of the window.
- In the `Link Binary With Libraries` section, click the `+` link and add the following frameworks and libraries: `UIKit`, `SystemConfiguration`, `WebKit`, `UserNotifications`, `libsqlite3.0`, `libc++`, `libz`.

__Important__ - note that all AEP SDK iOS libraries depend on `libACPCore.a`.

