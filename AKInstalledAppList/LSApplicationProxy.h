//
//  LSApplicationProxy.h
//  AKInstalledAppList
//
//  Created by Arafat on 07/04/2016.
//  Copyright © 2016 Arafat Khan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MobileCoreServices/MobileCoreServices.h>
#include <objc/runtime.h>

@interface LSApplicationProxy : NSObject <NSSecureCoding>{

NSArray *_UIBackgroundModes;
NSArray *_VPNPlugins;
NSArray *_appTags;
NSString *_applicationDSID;
NSArray *_audioComponents;
NSArray *_deviceFamily;
NSUUID *_deviceIdentifierForVendor;
NSArray *_directionsModes;
NSNumber *_dynamicDiskUsage;
NSArray *_externalAccessoryProtocols;
unsigned int _flags;
NSDictionary *_groupContainers;
NSArray *_groupIdentifiers;
unsigned int _installType;
BOOL _isContainerized;
NSNumber *_itemID;
NSString *_itemName;
NSString *_minimumSystemVersion;
long _modTime;
unsigned int _originalInstallType;
NSArray *_plugInKitPlugins;
NSArray *_pluginUUIDs;
NSArray *_privateDocumentIconNames;
LSApplicationProxy *_privateDocumentTypeOwner;
NSArray *_requiredDeviceCapabilities;
NSString *_sdkVersion;
NSString *_shortVersionString;
NSString *_sourceAppIdentifier;
NSNumber *_staticDiskUsage;
NSString *_storeCohortMetadata;
NSNumber *_storeFront;
NSString *_teamID;
NSString *_vendorName;
}

@property (nonatomic, readonly) NSArray *UIBackgroundModes;
@property (nonatomic, readonly) NSArray *VPNPlugins;
@property (nonatomic, readonly) NSArray *appTags;
@property (nonatomic, readonly) NSString *applicationDSID;
@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) NSString *applicationType;
@property (nonatomic, readonly) NSArray *audioComponents;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSArray *deviceFamily;
@property (nonatomic, readonly) NSUUID *deviceIdentifierForVendor;
@property (nonatomic, readonly) NSArray *directionsModes;
@property (nonatomic, readonly) NSNumber *dynamicDiskUsage;
@property (nonatomic, readonly) NSArray *externalAccessoryProtocols;
@property (nonatomic, readonly) BOOL fileSharingEnabled;
@property (nonatomic, readonly) NSDictionary *groupContainers;
@property (nonatomic, readonly) NSArray *groupIdentifiers;
@property (nonatomic, readonly) BOOL hasSettingsBundle;
@property (nonatomic, readonly) BOOL iconIsPrerendered;
@property (nonatomic, readonly) NSProgress *installProgress;
@property (nonatomic, readonly) unsigned int installType;
@property (nonatomic, readonly) BOOL isAppUpdate;
@property (nonatomic, readonly) BOOL isBetaApp;
@property (nonatomic, readonly) BOOL isContainerized;
@property (nonatomic, readonly) BOOL isInstalled;
@property (nonatomic, readonly) BOOL isNewsstandApp;
@property (nonatomic, readonly) BOOL isPlaceholder;
@property (nonatomic, readonly) BOOL isPurchasedReDownload;
@property (nonatomic, readonly) BOOL isRestricted;
@property (nonatomic, readonly) BOOL isWatchKitApp;
@property (nonatomic, readonly) NSNumber *itemID;
@property (nonatomic, readonly) NSString *itemName;
@property (nonatomic, readonly) NSString *minimumSystemVersion;
@property (nonatomic, readonly) unsigned int originalInstallType;
@property (nonatomic, readonly) NSArray *plugInKitPlugins;
@property (nonatomic, readonly) BOOL profileValidated;
@property (nonatomic, readonly) NSArray *requiredDeviceCapabilities;
@property (nonatomic, readonly) NSString *roleIdentifier;
@property (nonatomic, readonly) NSString *sdkVersion;
@property (nonatomic, readonly) NSString *shortVersionString;
@property (nonatomic, readonly) NSString *sourceAppIdentifier;
@property (nonatomic, readonly) NSNumber *staticDiskUsage;
@property (nonatomic, readonly) NSString *storeCohortMetadata;
@property (nonatomic, readonly) NSNumber *storeFront;
@property (nonatomic, readonly) BOOL supportsAudiobooks;
@property (nonatomic, readonly) BOOL supportsExternallyPlayableContent;
@property (nonatomic, readonly) NSString *teamID;
@property (nonatomic, readonly) NSString *vendorName;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)applicationProxyForBundleURL:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1 placeholder:(BOOL)arg2;
+ (id)applicationProxyForIdentifier:(id)arg1 roleIdentifier:(id)arg2;
+ (id)applicationProxyForItemID:(id)arg1;
+ (id)applicationProxyWithBundleUnitID:(unsigned long)arg1;
+ (BOOL)supportsSecureCoding;

- (id)UIBackgroundModes;
- (id)VPNPlugins;
- (id)_initWithBundleUnit:(unsigned long)arg1 applicationIdentifier:(id)arg2;
- (id)appStoreReceiptURL;
- (id)appTags;
- (id)applicationDSID;
- (id)applicationType;
- (id)audioComponents;
- (long)bundleModTime;
- (void)dealloc;
- (id)description;
- (id)deviceFamily;
- (id)deviceIdentifierForVendor;
- (id)directionsModes;
- (id)dynamicDiskUsage;
- (void)encodeWithCoder:(id)arg1;
- (id)externalAccessoryProtocols;
- (BOOL)fileSharingEnabled;
- (id)groupContainers;
- (id)groupIdentifiers;
- (BOOL)hasSettingsBundle;
- (unsigned int)hash;
- (id)iconDataForVariant:(int)arg1;
- (BOOL)iconIsPrerendered;
- (id)iconStyleDomain;
- (id)initWithCoder:(id)arg1;
- (unsigned int)installType;
- (BOOL)isAppUpdate;
- (BOOL)isBetaApp;
- (BOOL)isContainerized;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInstalled;
- (BOOL)isNewsstandApp;
- (BOOL)isPlaceholder;
- (BOOL)isPurchasedReDownload;
- (BOOL)isRestricted;
- (BOOL)isWatchKitApp;
- (id)itemID;
- (id)itemName;
- (id)localizedName;
- (id)localizedShortName;
- (id)machOUUIDs;
- (id)minimumSystemVersion;
- (unsigned int)originalInstallType;
- (id)plugInKitPlugins;
- (void)populateNotificationData;
- (BOOL)privateDocumentIconAllowOverride;
- (id)privateDocumentIconNames;
- (id)privateDocumentTypeOwner;
- (BOOL)profileValidated;
- (id)requiredDeviceCapabilities;
- (id)resourcesDirectoryURL;
- (id)roleIdentifier;
- (id)sdkVersion;
- (void)setPrivateDocumentIconAllowOverride:(BOOL)arg1;
- (void)setPrivateDocumentIconNames:(id)arg1;
- (void)setPrivateDocumentTypeOwner:(id)arg1;
- (id)shortVersionString;
- (id)sourceAppIdentifier;
- (id)staticDiskUsage;
- (id)storeCohortMetadata;
- (id)storeFront;
- (BOOL)supportsAudiobooks;
- (BOOL)supportsExternallyPlayableContent;
- (id)teamID;
- (id)userActivityStringForAdvertisementData:(id)arg1;
- (id)vendorName;

@end