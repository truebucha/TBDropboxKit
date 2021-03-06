///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMNamespaceMetadata;
@class DBTEAMNamespaceType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `NamespaceMetadata` struct.
///
/// Properties of a namespace.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMNamespaceMetadata : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The name of this namespace.
@property (nonatomic, readonly, copy) NSString *name;

/// The ID of this namespace.
@property (nonatomic, readonly, copy) NSString *namespaceId;

/// The type of this namespace.
@property (nonatomic, readonly) DBTEAMNamespaceType *namespaceType;

/// If this is a team member or app folder, the ID of the owning team member.
/// Otherwise, this field is not present.
@property (nonatomic, readonly, copy, nullable) NSString *teamMemberId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param name The name of this namespace.
/// @param namespaceId The ID of this namespace.
/// @param namespaceType The type of this namespace.
/// @param teamMemberId If this is a team member or app folder, the ID of the
/// owning team member. Otherwise, this field is not present.
///
/// @return An initialized instance.
///
- (instancetype)initWithName:(NSString *)name
                 namespaceId:(NSString *)namespaceId
               namespaceType:(DBTEAMNamespaceType *)namespaceType
                teamMemberId:(nullable NSString *)teamMemberId;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param name The name of this namespace.
/// @param namespaceId The ID of this namespace.
/// @param namespaceType The type of this namespace.
///
/// @return An initialized instance.
///
- (instancetype)initWithName:(NSString *)name
                 namespaceId:(NSString *)namespaceId
               namespaceType:(DBTEAMNamespaceType *)namespaceType;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `NamespaceMetadata` struct.
///
@interface DBTEAMNamespaceMetadataSerializer : NSObject

///
/// Serializes `DBTEAMNamespaceMetadata` instances.
///
/// @param instance An instance of the `DBTEAMNamespaceMetadata` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMNamespaceMetadata` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMNamespaceMetadata *)instance;

///
/// Deserializes `DBTEAMNamespaceMetadata` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMNamespaceMetadata` API object.
///
/// @return An instantiation of the `DBTEAMNamespaceMetadata` object.
///
+ (DBTEAMNamespaceMetadata *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
