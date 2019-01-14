///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"
#import "DBTEAMIncludeMembersArg.h"

@class DBTEAMCOMMONGroupManagementType;
@class DBTEAMGroupSelector;
@class DBTEAMGroupUpdateArgs;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupUpdateArgs` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMGroupUpdateArgs : DBTEAMIncludeMembersArg <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Specify a group.
@property (nonatomic, readonly) DBTEAMGroupSelector *group;

/// Optional argument. Set group name to this if provided.
@property (nonatomic, readonly, copy, nullable) NSString *dNewGroupName;

/// Optional argument. New group external ID. If the argument is None, the
/// group's external_id won't be updated. If the argument is empty string, the
/// group's external id will be cleared.
@property (nonatomic, readonly, copy, nullable) NSString *dNewGroupExternalId;

/// Set new group management type, if provided.
@property (nonatomic, readonly, nullable) DBTEAMCOMMONGroupManagementType *dNewGroupManagementType;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param group Specify a group.
/// @param returnMembers Whether to return the list of members in the group.
/// Note that the default value will cause all the group members  to be returned
/// in the response. This may take a long time for large groups.
/// @param dNewGroupName Optional argument. Set group name to this if provided.
/// @param dNewGroupExternalId Optional argument. New group external ID. If the
/// argument is None, the group's external_id won't be updated. If the argument
/// is empty string, the group's external id will be cleared.
/// @param dNewGroupManagementType Set new group management type, if provided.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroup:(DBTEAMGroupSelector *)group
                returnMembers:(nullable NSNumber *)returnMembers
                dNewGroupName:(nullable NSString *)dNewGroupName
          dNewGroupExternalId:(nullable NSString *)dNewGroupExternalId
      dNewGroupManagementType:(nullable DBTEAMCOMMONGroupManagementType *)dNewGroupManagementType;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param group Specify a group.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroup:(DBTEAMGroupSelector *)group;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupUpdateArgs` struct.
///
@interface DBTEAMGroupUpdateArgsSerializer : NSObject

///
/// Serializes `DBTEAMGroupUpdateArgs` instances.
///
/// @param instance An instance of the `DBTEAMGroupUpdateArgs` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMGroupUpdateArgs` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMGroupUpdateArgs *)instance;

///
/// Deserializes `DBTEAMGroupUpdateArgs` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMGroupUpdateArgs` API object.
///
/// @return An instantiation of the `DBTEAMGroupUpdateArgs` object.
///
+ (DBTEAMGroupUpdateArgs *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
