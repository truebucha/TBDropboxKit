///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGDeviceChangeIpMobileDetails;
@class DBTEAMLOGDeviceSessionLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DeviceChangeIpMobileDetails` struct.
///
/// IP address associated with active mobile session changed.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDeviceChangeIpMobileDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Device's session logged information.
@property (nonatomic, readonly) DBTEAMLOGDeviceSessionLogInfo *deviceSessionInfo;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param deviceSessionInfo Device's session logged information.
///
/// @return An initialized instance.
///
- (instancetype)initWithDeviceSessionInfo:(DBTEAMLOGDeviceSessionLogInfo *)deviceSessionInfo;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DeviceChangeIpMobileDetails` struct.
///
@interface DBTEAMLOGDeviceChangeIpMobileDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGDeviceChangeIpMobileDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGDeviceChangeIpMobileDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceChangeIpMobileDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGDeviceChangeIpMobileDetails *)instance;

///
/// Deserializes `DBTEAMLOGDeviceChangeIpMobileDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceChangeIpMobileDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGDeviceChangeIpMobileDetails`
/// object.
///
+ (DBTEAMLOGDeviceChangeIpMobileDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
