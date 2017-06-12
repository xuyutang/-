// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "Qchat.pb.h"

@implementation QchatRoot
static PBExtensionRegistry* extensionRegistry = nil;
+ (PBExtensionRegistry*) extensionRegistry {
  return extensionRegistry;
}

+ (void) initialize {
  if (self == [QchatRoot class]) {
    PBMutableExtensionRegistry* registry = [PBMutableExtensionRegistry registry];
    [self registerAllExtensions:registry];
    [GenericRoot registerAllExtensions:registry];
    [UserRoot registerAllExtensions:registry];
    extensionRegistry = [registry retain];
  }
}
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry {
}
@end

@interface QchatUserGroup ()
@property int32_t id;
@property (retain) PBAppendableArray * usersArray;
@property (retain) NSString* name;
@property (retain) NSString* comment;
@property (retain) Company* company;
@property (retain) User* createUser;
@end

@implementation QchatUserGroup

- (BOOL) hasId {
  return !!hasId_;
}
- (void) setHasId:(BOOL) value_ {
  hasId_ = !!value_;
}
@synthesize id;
@synthesize usersArray;
@dynamic users;
- (BOOL) hasName {
  return !!hasName_;
}
- (void) setHasName:(BOOL) value_ {
  hasName_ = !!value_;
}
@synthesize name;
- (BOOL) hasComment {
  return !!hasComment_;
}
- (void) setHasComment:(BOOL) value_ {
  hasComment_ = !!value_;
}
@synthesize comment;
- (BOOL) hasCompany {
  return !!hasCompany_;
}
- (void) setHasCompany:(BOOL) value_ {
  hasCompany_ = !!value_;
}
@synthesize company;
- (BOOL) hasCreateUser {
  return !!hasCreateUser_;
}
- (void) setHasCreateUser:(BOOL) value_ {
  hasCreateUser_ = !!value_;
}
@synthesize createUser;
- (void) dealloc {
  self.usersArray = nil;
  self.name = nil;
  self.comment = nil;
  self.company = nil;
  self.createUser = nil;
  [super dealloc];
}
- (id) init {
  if ((self = [super init])) {
    self.id = 0;
    self.name = @"";
    self.comment = @"";
    self.company = [Company defaultInstance];
    self.createUser = [User defaultInstance];
  }
  return self;
}
static QchatUserGroup* defaultQchatUserGroupInstance = nil;
+ (void) initialize {
  if (self == [QchatUserGroup class]) {
    defaultQchatUserGroupInstance = [[QchatUserGroup alloc] init];
  }
}
+ (QchatUserGroup*) defaultInstance {
  return defaultQchatUserGroupInstance;
}
- (QchatUserGroup*) defaultInstance {
  return defaultQchatUserGroupInstance;
}
- (PBArray *)users {
  return usersArray;
}
- (User*)usersAtIndex:(NSUInteger)index {
  return [usersArray objectAtIndex:index];
}
- (BOOL) isInitialized {
  if (!self.hasId) {
    return NO;
  }
  if (!self.hasCreateUser) {
    return NO;
  }
  for (User* element in self.users) {
    if (!element.isInitialized) {
      return NO;
    }
  }
  if (self.hasCompany) {
    if (!self.company.isInitialized) {
      return NO;
    }
  }
  if (!self.createUser.isInitialized) {
    return NO;
  }
  return YES;
}
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output {
  if (self.hasId) {
    [output writeInt32:1 value:self.id];
  }
  for (User *element in self.usersArray) {
    [output writeMessage:2 value:element];
  }
  if (self.hasName) {
    [output writeString:3 value:self.name];
  }
  if (self.hasComment) {
    [output writeString:4 value:self.comment];
  }
  if (self.hasCompany) {
    [output writeMessage:5 value:self.company];
  }
  if (self.hasCreateUser) {
    [output writeMessage:6 value:self.createUser];
  }
  [self.unknownFields writeToCodedOutputStream:output];
}
- (int32_t) serializedSize {
  int32_t size_ = memoizedSerializedSize;
  if (size_ != -1) {
    return size_;
  }

  size_ = 0;
  if (self.hasId) {
    size_ += computeInt32Size(1, self.id);
  }
  for (User *element in self.usersArray) {
    size_ += computeMessageSize(2, element);
  }
  if (self.hasName) {
    size_ += computeStringSize(3, self.name);
  }
  if (self.hasComment) {
    size_ += computeStringSize(4, self.comment);
  }
  if (self.hasCompany) {
    size_ += computeMessageSize(5, self.company);
  }
  if (self.hasCreateUser) {
    size_ += computeMessageSize(6, self.createUser);
  }
  size_ += self.unknownFields.serializedSize;
  memoizedSerializedSize = size_;
  return size_;
}
+ (QchatUserGroup*) parseFromData:(NSData*) data {
  return (QchatUserGroup*)[[[QchatUserGroup builder] mergeFromData:data] build];
}
+ (QchatUserGroup*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (QchatUserGroup*)[[[QchatUserGroup builder] mergeFromData:data extensionRegistry:extensionRegistry] build];
}
+ (QchatUserGroup*) parseFromInputStream:(NSInputStream*) input {
  return (QchatUserGroup*)[[[QchatUserGroup builder] mergeFromInputStream:input] build];
}
+ (QchatUserGroup*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (QchatUserGroup*)[[[QchatUserGroup builder] mergeFromInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (QchatUserGroup*) parseFromCodedInputStream:(PBCodedInputStream*) input {
  return (QchatUserGroup*)[[[QchatUserGroup builder] mergeFromCodedInputStream:input] build];
}
+ (QchatUserGroup*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (QchatUserGroup*)[[[QchatUserGroup builder] mergeFromCodedInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (QchatUserGroup_Builder*) builder {
  return [[[QchatUserGroup_Builder alloc] init] autorelease];
}
+ (QchatUserGroup_Builder*) builderWithPrototype:(QchatUserGroup*) prototype {
  return [[QchatUserGroup builder] mergeFrom:prototype];
}
- (QchatUserGroup_Builder*) builder {
  return [QchatUserGroup builder];
}
- (QchatUserGroup_Builder*) toBuilder {
  return [QchatUserGroup builderWithPrototype:self];
}
- (void) writeDescriptionTo:(NSMutableString*) output withIndent:(NSString*) indent {
  if (self.hasId) {
    [output appendFormat:@"%@%@: %@\n", indent, @"id", [NSNumber numberWithInt:self.id]];
  }
  for (User* element in self.usersArray) {
    [output appendFormat:@"%@%@ {\n", indent, @"users"];
    [element writeDescriptionTo:output
                     withIndent:[NSString stringWithFormat:@"%@  ", indent]];
    [output appendFormat:@"%@}\n", indent];
  }
  if (self.hasName) {
    [output appendFormat:@"%@%@: %@\n", indent, @"name", self.name];
  }
  if (self.hasComment) {
    [output appendFormat:@"%@%@: %@\n", indent, @"comment", self.comment];
  }
  if (self.hasCompany) {
    [output appendFormat:@"%@%@ {\n", indent, @"company"];
    [self.company writeDescriptionTo:output
                         withIndent:[NSString stringWithFormat:@"%@  ", indent]];
    [output appendFormat:@"%@}\n", indent];
  }
  if (self.hasCreateUser) {
    [output appendFormat:@"%@%@ {\n", indent, @"createUser"];
    [self.createUser writeDescriptionTo:output
                         withIndent:[NSString stringWithFormat:@"%@  ", indent]];
    [output appendFormat:@"%@}\n", indent];
  }
  [self.unknownFields writeDescriptionTo:output withIndent:indent];
}
- (BOOL) isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (![other isKindOfClass:[QchatUserGroup class]]) {
    return NO;
  }
  QchatUserGroup *otherMessage = other;
  return
      self.hasId == otherMessage.hasId &&
      (!self.hasId || self.id == otherMessage.id) &&
      [self.usersArray isEqualToArray:otherMessage.usersArray] &&
      self.hasName == otherMessage.hasName &&
      (!self.hasName || [self.name isEqual:otherMessage.name]) &&
      self.hasComment == otherMessage.hasComment &&
      (!self.hasComment || [self.comment isEqual:otherMessage.comment]) &&
      self.hasCompany == otherMessage.hasCompany &&
      (!self.hasCompany || [self.company isEqual:otherMessage.company]) &&
      self.hasCreateUser == otherMessage.hasCreateUser &&
      (!self.hasCreateUser || [self.createUser isEqual:otherMessage.createUser]) &&
      (self.unknownFields == otherMessage.unknownFields || (self.unknownFields != nil && [self.unknownFields isEqual:otherMessage.unknownFields]));
}
- (NSUInteger) hash {
  NSUInteger hashCode = 7;
  if (self.hasId) {
    hashCode = hashCode * 31 + [[NSNumber numberWithInt:self.id] hash];
  }
  for (User* element in self.usersArray) {
    hashCode = hashCode * 31 + [element hash];
  }
  if (self.hasName) {
    hashCode = hashCode * 31 + [self.name hash];
  }
  if (self.hasComment) {
    hashCode = hashCode * 31 + [self.comment hash];
  }
  if (self.hasCompany) {
    hashCode = hashCode * 31 + [self.company hash];
  }
  if (self.hasCreateUser) {
    hashCode = hashCode * 31 + [self.createUser hash];
  }
  hashCode = hashCode * 31 + [self.unknownFields hash];
  return hashCode;
}
@end

@interface QchatUserGroup_Builder()
@property (retain) QchatUserGroup* result;
@end

@implementation QchatUserGroup_Builder
@synthesize result;
- (void) dealloc {
  self.result = nil;
  [super dealloc];
}
- (id) init {
  if ((self = [super init])) {
    self.result = [[[QchatUserGroup alloc] init] autorelease];
  }
  return self;
}
- (PBGeneratedMessage*) internalGetResult {
  return result;
}
- (QchatUserGroup_Builder*) clear {
  self.result = [[[QchatUserGroup alloc] init] autorelease];
  return self;
}
- (QchatUserGroup_Builder*) clone {
  return [QchatUserGroup builderWithPrototype:result];
}
- (QchatUserGroup*) defaultInstance {
  return [QchatUserGroup defaultInstance];
}
- (QchatUserGroup*) build {
  [self checkInitialized];
  return [self buildPartial];
}
- (QchatUserGroup*) buildPartial {
  QchatUserGroup* returnMe = [[result retain] autorelease];
  self.result = nil;
  return returnMe;
}
- (QchatUserGroup_Builder*) mergeFrom:(QchatUserGroup*) other {
  if (other == [QchatUserGroup defaultInstance]) {
    return self;
  }
  if (other.hasId) {
    [self setId:other.id];
  }
  if (other.usersArray.count > 0) {
    if (result.usersArray == nil) {
      result.usersArray = [[other.usersArray copyWithZone:[other.usersArray zone]] autorelease];
    } else {
      [result.usersArray appendArray:other.usersArray];
    }
  }
  if (other.hasName) {
    [self setName:other.name];
  }
  if (other.hasComment) {
    [self setComment:other.comment];
  }
  if (other.hasCompany) {
    [self mergeCompany:other.company];
  }
  if (other.hasCreateUser) {
    [self mergeCreateUser:other.createUser];
  }
  [self mergeUnknownFields:other.unknownFields];
  return self;
}
- (QchatUserGroup_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input {
  return [self mergeFromCodedInputStream:input extensionRegistry:[PBExtensionRegistry emptyRegistry]];
}
- (QchatUserGroup_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  PBUnknownFieldSet_Builder* unknownFields = [PBUnknownFieldSet builderWithUnknownFields:self.unknownFields];
  while (YES) {
    int32_t tag = [input readTag];
    switch (tag) {
      case 0:
        [self setUnknownFields:[unknownFields build]];
        return self;
      default: {
        if (![self parseUnknownField:input unknownFields:unknownFields extensionRegistry:extensionRegistry tag:tag]) {
          [self setUnknownFields:[unknownFields build]];
          return self;
        }
        break;
      }
      case 8: {
        [self setId:[input readInt32]];
        break;
      }
      case 18: {
        User_Builder* subBuilder = [User builder];
        [input readMessage:subBuilder extensionRegistry:extensionRegistry];
        [self addUsers:[subBuilder buildPartial]];
        break;
      }
      case 26: {
        [self setName:[input readString]];
        break;
      }
      case 34: {
        [self setComment:[input readString]];
        break;
      }
      case 42: {
        Company_Builder* subBuilder = [Company builder];
        if (self.hasCompany) {
          [subBuilder mergeFrom:self.company];
        }
        [input readMessage:subBuilder extensionRegistry:extensionRegistry];
        [self setCompany:[subBuilder buildPartial]];
        break;
      }
      case 50: {
        User_Builder* subBuilder = [User builder];
        if (self.hasCreateUser) {
          [subBuilder mergeFrom:self.createUser];
        }
        [input readMessage:subBuilder extensionRegistry:extensionRegistry];
        [self setCreateUser:[subBuilder buildPartial]];
        break;
      }
    }
  }
}
- (BOOL) hasId {
  return result.hasId;
}
- (int32_t) id {
  return result.id;
}
- (QchatUserGroup_Builder*) setId:(int32_t) value {
  result.hasId = YES;
  result.id = value;
  return self;
}
- (QchatUserGroup_Builder*) clearId {
  result.hasId = NO;
  result.id = 0;
  return self;
}
- (PBAppendableArray *)users {
  return result.usersArray;
}
- (User*)usersAtIndex:(NSUInteger)index {
  return [result usersAtIndex:index];
}
- (QchatUserGroup_Builder *)addUsers:(User*)value {
  if (result.usersArray == nil) {
    result.usersArray = [PBAppendableArray arrayWithValueType:PBArrayValueTypeObject];
  }
  [result.usersArray addObject:value];
  return self;
}
- (QchatUserGroup_Builder *)setUsersArray:(NSArray *)array {
  result.usersArray = [PBAppendableArray arrayWithArray:array valueType:PBArrayValueTypeObject];
  return self;
}
- (QchatUserGroup_Builder *)setUsersValues:(const User* *)values count:(NSUInteger)count {
  result.usersArray = [PBAppendableArray arrayWithValues:values count:count valueType:PBArrayValueTypeObject];
  return self;
}
- (QchatUserGroup_Builder *)clearUsers {
  result.usersArray = nil;
  return self;
}
- (BOOL) hasName {
  return result.hasName;
}
- (NSString*) name {
  return result.name;
}
- (QchatUserGroup_Builder*) setName:(NSString*) value {
  result.hasName = YES;
  result.name = value;
  return self;
}
- (QchatUserGroup_Builder*) clearName {
  result.hasName = NO;
  result.name = @"";
  return self;
}
- (BOOL) hasComment {
  return result.hasComment;
}
- (NSString*) comment {
  return result.comment;
}
- (QchatUserGroup_Builder*) setComment:(NSString*) value {
  result.hasComment = YES;
  result.comment = value;
  return self;
}
- (QchatUserGroup_Builder*) clearComment {
  result.hasComment = NO;
  result.comment = @"";
  return self;
}
- (BOOL) hasCompany {
  return result.hasCompany;
}
- (Company*) company {
  return result.company;
}
- (QchatUserGroup_Builder*) setCompany:(Company*) value {
  result.hasCompany = YES;
  result.company = value;
  return self;
}
- (QchatUserGroup_Builder*) setCompanyBuilder:(Company_Builder*) builderForValue {
  return [self setCompany:[builderForValue build]];
}
- (QchatUserGroup_Builder*) mergeCompany:(Company*) value {
  if (result.hasCompany &&
      result.company != [Company defaultInstance]) {
    result.company =
      [[[Company builderWithPrototype:result.company] mergeFrom:value] buildPartial];
  } else {
    result.company = value;
  }
  result.hasCompany = YES;
  return self;
}
- (QchatUserGroup_Builder*) clearCompany {
  result.hasCompany = NO;
  result.company = [Company defaultInstance];
  return self;
}
- (BOOL) hasCreateUser {
  return result.hasCreateUser;
}
- (User*) createUser {
  return result.createUser;
}
- (QchatUserGroup_Builder*) setCreateUser:(User*) value {
  result.hasCreateUser = YES;
  result.createUser = value;
  return self;
}
- (QchatUserGroup_Builder*) setCreateUserBuilder:(User_Builder*) builderForValue {
  return [self setCreateUser:[builderForValue build]];
}
- (QchatUserGroup_Builder*) mergeCreateUser:(User*) value {
  if (result.hasCreateUser &&
      result.createUser != [User defaultInstance]) {
    result.createUser =
      [[[User builderWithPrototype:result.createUser] mergeFrom:value] buildPartial];
  } else {
    result.createUser = value;
  }
  result.hasCreateUser = YES;
  return self;
}
- (QchatUserGroup_Builder*) clearCreateUser {
  result.hasCreateUser = NO;
  result.createUser = [User defaultInstance];
  return self;
}
@end

