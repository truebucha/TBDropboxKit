///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMExcludedUsersListResult;
@class DBTEAMMemberProfile;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ExcludedUsersListResult` struct.
///
/// Excluded users list result.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMExcludedUsersListResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// (no description).
@property (nonatomic, readonly) NSArray<DBTEAMMemberProfile *> *users;

/// Pass the cursor into `memberSpaceLimitsExcludedUsersListContinue` to obtain
/// additional excluded users.
@property (nonatomic, readonly, copy, nullable) NSString *cursor;

/// Is true if there are additional excluded users that have not been returned
/// yet. An additional call to `memberSpaceLimitsExcludedUsersListContinue` can
/// retrieve them.
@property (nonatomic, readonly) NSNumber *hasMore;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param users (no description).
/// @param hasMore Is true if there are additional excluded users that have not
/// been returned yet. An additional call to
/// `memberSpaceLimitsExcludedUsersListContinue` can retrieve them.
/// @param cursor Pass the cursor into
/// `memberSpaceLimitsExcludedUsersListContinue` to obtain additional excluded
/// users.
///
/// @return An initialized instance.
///
- (instancetype)initWithUsers:(NSArray<DBTEAMMemberProfile *> *)users
                      hasMore:(NSNumber *)hasMore
                       cursor:(nullable NSString *)cursor;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param users (no description).
/// @param hasMore Is true if there are additional excluded users that have not
/// been returned yet. An additional call to
/// `memberSpaceLimitsExcludedUsersListContinue` can retrieve them.
///
/// @return An initialized instance.
///
- (instancetype)initWithUsers:(NSArray<DBTEAMMemberProfile *> *)users hasMore:(NSNumber *)hasMore;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ExcludedUsersListResult` struct.
///
@interface DBTEAMExcludedUsersListResultSerializer : NSObject

///
/// Serializes `DBTEAMExcludedUsersListResult` instances.
///
/// @param instance An instance of the `DBTEAMExcludedUsersListResult` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMExcludedUsersListResult` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMExcludedUsersListResult *)instance;

///
/// Deserializes `DBTEAMExcludedUsersListResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMExcludedUsersListResult` API object.
///
/// @return An instantiation of the `DBTEAMExcludedUsersListResult` object.
///
+ (DBTEAMExcludedUsersListResult *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
