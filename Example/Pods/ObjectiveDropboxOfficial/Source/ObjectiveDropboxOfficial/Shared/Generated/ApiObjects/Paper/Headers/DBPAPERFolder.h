///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBPAPERFolder;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `Folder` struct.
///
/// Data structure representing a Paper folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERFolder : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Paper folder ID. This ID uniquely identifies the folder.
@property (nonatomic, readonly, copy) NSString *id_;

/// Paper folder name.
@property (nonatomic, readonly, copy) NSString *name;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param id_ Paper folder ID. This ID uniquely identifies the folder.
/// @param name Paper folder name.
///
/// @return An initialized instance.
///
- (instancetype)initWithId_:(NSString *)id_ name:(NSString *)name;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `Folder` struct.
///
@interface DBPAPERFolderSerializer : NSObject

///
/// Serializes `DBPAPERFolder` instances.
///
/// @param instance An instance of the `DBPAPERFolder` API object.
///
/// @return A json-compatible dictionary representation of the `DBPAPERFolder`
/// API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBPAPERFolder *)instance;

///
/// Deserializes `DBPAPERFolder` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERFolder` API object.
///
/// @return An instantiation of the `DBPAPERFolder` object.
///
+ (DBPAPERFolder *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
