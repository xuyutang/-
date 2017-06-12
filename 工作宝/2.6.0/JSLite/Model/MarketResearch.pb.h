// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

#import "Generic.pb.h"
#import "User.pb.h"
#import "Customer.pb.h"

@class AppSetting;
@class AppSetting_Builder;
@class Company;
@class Company_Builder;
@class Contact;
@class Contact_Builder;
@class Customer;
@class CustomerCategory;
@class CustomerCategory_Builder;
@class CustomerParams;
@class CustomerParams_Builder;
@class Customer_Builder;
@class Department;
@class Department_Builder;
@class Device;
@class Device_Builder;
@class Function;
@class Function_Builder;
@class Location;
@class Location_Builder;
@class MarketResearch;
@class MarketResearchParams;
@class MarketResearchParams_Builder;
@class MarketResearchReply;
@class MarketResearchReply_Builder;
@class MarketResearch_Builder;
@class PageCustomer;
@class PageCustomer_Builder;
@class PageMarketResearch;
@class PageMarketResearch_Builder;
@class PageUser;
@class PageUser_Builder;
@class Pagination;
@class Pagination_Builder;
@class Permission;
@class Permission_Builder;
@class Position;
@class Position_Builder;
@class Product;
@class ProductCategory;
@class ProductCategory_Builder;
@class Product_Builder;
@class SystemSetting;
@class SystemSetting_Builder;
@class User;
@class UserParams;
@class UserParams_Builder;
@class User_Builder;
#ifndef __has_feature
  #define __has_feature(x) 0 // Compatibility with non-clang compilers.
#endif // __has_feature

#ifndef NS_RETURNS_NOT_RETAINED
  #if __has_feature(attribute_ns_returns_not_retained)
    #define NS_RETURNS_NOT_RETAINED __attribute__((ns_returns_not_retained))
  #else
    #define NS_RETURNS_NOT_RETAINED
  #endif
#endif


@interface MarketResearchRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface MarketResearch : PBGeneratedMessage {
@private
  BOOL hasId_:1;
  BOOL hasReplyCount_:1;
  BOOL hasBusinessArea_:1;
  BOOL hasBusinessSize_:1;
  BOOL hasCreateDate_:1;
  BOOL hasPrimaryProduct_:1;
  BOOL hasTurnover_:1;
  BOOL hasRemarks_:1;
  BOOL hasBusinessCategory_:1;
  BOOL hasCameraCategory_:1;
  BOOL hasCustomer_:1;
  BOOL hasLocation_:1;
  BOOL hasUser_:1;
  int32_t id;
  int32_t replyCount;
  NSString* businessArea;
  NSString* businessSize;
  NSString* createDate;
  NSString* primaryProduct;
  NSString* turnover;
  NSString* remarks;
  NSString* businessCategory;
  NSString* cameraCategory;
  Customer* customer;
  Location* location;
  User* user;
  PBAppendableArray * filePathArray;
  PBAppendableArray * marketResearchRepliesArray;
  PBAppendableArray * filesArray;
}
- (BOOL) hasId;
- (BOOL) hasCustomer;
- (BOOL) hasBusinessArea;
- (BOOL) hasLocation;
- (BOOL) hasBusinessSize;
- (BOOL) hasCreateDate;
- (BOOL) hasPrimaryProduct;
- (BOOL) hasTurnover;
- (BOOL) hasRemarks;
- (BOOL) hasBusinessCategory;
- (BOOL) hasUser;
- (BOOL) hasReplyCount;
- (BOOL) hasCameraCategory;
@property (readonly) int32_t id;
@property (readonly, retain) Customer* customer;
@property (readonly, retain) NSString* businessArea;
@property (readonly, retain) Location* location;
@property (readonly, retain) PBArray * files;
@property (readonly, retain) PBArray * filePath;
@property (readonly, retain) NSString* businessSize;
@property (readonly, retain) NSString* createDate;
@property (readonly, retain) NSString* primaryProduct;
@property (readonly, retain) NSString* turnover;
@property (readonly, retain) NSString* remarks;
@property (readonly, retain) NSString* businessCategory;
@property (readonly, retain) PBArray * marketResearchReplies;
@property (readonly, retain) User* user;
@property (readonly) int32_t replyCount;
@property (readonly, retain) NSString* cameraCategory;
- (NSData*)filesAtIndex:(NSUInteger)index;
- (NSString*)filePathAtIndex:(NSUInteger)index;
- (MarketResearchReply*)marketResearchRepliesAtIndex:(NSUInteger)index;

+ (MarketResearch*) defaultInstance;
- (MarketResearch*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (MarketResearch_Builder*) builder;
+ (MarketResearch_Builder*) builder;
+ (MarketResearch_Builder*) builderWithPrototype:(MarketResearch*) prototype;
- (MarketResearch_Builder*) toBuilder;

+ (MarketResearch*) parseFromData:(NSData*) data;
+ (MarketResearch*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MarketResearch*) parseFromInputStream:(NSInputStream*) input;
+ (MarketResearch*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MarketResearch*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (MarketResearch*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface MarketResearch_Builder : PBGeneratedMessage_Builder {
@private
  MarketResearch* result;
}

- (MarketResearch*) defaultInstance;

- (MarketResearch_Builder*) clear;
- (MarketResearch_Builder*) clone;

- (MarketResearch*) build;
- (MarketResearch*) buildPartial;

- (MarketResearch_Builder*) mergeFrom:(MarketResearch*) other;
- (MarketResearch_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (MarketResearch_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (int32_t) id;
- (MarketResearch_Builder*) setId:(int32_t) value;
- (MarketResearch_Builder*) clearId;

- (BOOL) hasCustomer;
- (Customer*) customer;
- (MarketResearch_Builder*) setCustomer:(Customer*) value;
- (MarketResearch_Builder*) setCustomerBuilder:(Customer_Builder*) builderForValue;
- (MarketResearch_Builder*) mergeCustomer:(Customer*) value;
- (MarketResearch_Builder*) clearCustomer;

- (BOOL) hasBusinessArea;
- (NSString*) businessArea;
- (MarketResearch_Builder*) setBusinessArea:(NSString*) value;
- (MarketResearch_Builder*) clearBusinessArea;

- (BOOL) hasLocation;
- (Location*) location;
- (MarketResearch_Builder*) setLocation:(Location*) value;
- (MarketResearch_Builder*) setLocationBuilder:(Location_Builder*) builderForValue;
- (MarketResearch_Builder*) mergeLocation:(Location*) value;
- (MarketResearch_Builder*) clearLocation;

- (PBAppendableArray *)files;
- (NSData*)filesAtIndex:(NSUInteger)index;
- (MarketResearch_Builder *)addFiles:(NSData*)value;
- (MarketResearch_Builder *)setFilesArray:(NSArray *)array;
- (MarketResearch_Builder *)setFilesValues:(const NSData* *)values count:(NSUInteger)count;
- (MarketResearch_Builder *)clearFiles;

- (PBAppendableArray *)filePath;
- (NSString*)filePathAtIndex:(NSUInteger)index;
- (MarketResearch_Builder *)addFilePath:(NSString*)value;
- (MarketResearch_Builder *)setFilePathArray:(NSArray *)array;
- (MarketResearch_Builder *)setFilePathValues:(const NSString* *)values count:(NSUInteger)count;
- (MarketResearch_Builder *)clearFilePath;

- (BOOL) hasBusinessSize;
- (NSString*) businessSize;
- (MarketResearch_Builder*) setBusinessSize:(NSString*) value;
- (MarketResearch_Builder*) clearBusinessSize;

- (BOOL) hasCreateDate;
- (NSString*) createDate;
- (MarketResearch_Builder*) setCreateDate:(NSString*) value;
- (MarketResearch_Builder*) clearCreateDate;

- (BOOL) hasPrimaryProduct;
- (NSString*) primaryProduct;
- (MarketResearch_Builder*) setPrimaryProduct:(NSString*) value;
- (MarketResearch_Builder*) clearPrimaryProduct;

- (BOOL) hasTurnover;
- (NSString*) turnover;
- (MarketResearch_Builder*) setTurnover:(NSString*) value;
- (MarketResearch_Builder*) clearTurnover;

- (BOOL) hasRemarks;
- (NSString*) remarks;
- (MarketResearch_Builder*) setRemarks:(NSString*) value;
- (MarketResearch_Builder*) clearRemarks;

- (BOOL) hasBusinessCategory;
- (NSString*) businessCategory;
- (MarketResearch_Builder*) setBusinessCategory:(NSString*) value;
- (MarketResearch_Builder*) clearBusinessCategory;

- (PBAppendableArray *)marketResearchReplies;
- (MarketResearchReply*)marketResearchRepliesAtIndex:(NSUInteger)index;
- (MarketResearch_Builder *)addMarketResearchReplies:(MarketResearchReply*)value;
- (MarketResearch_Builder *)setMarketResearchRepliesArray:(NSArray *)array;
- (MarketResearch_Builder *)setMarketResearchRepliesValues:(const MarketResearchReply* *)values count:(NSUInteger)count;
- (MarketResearch_Builder *)clearMarketResearchReplies;

- (BOOL) hasUser;
- (User*) user;
- (MarketResearch_Builder*) setUser:(User*) value;
- (MarketResearch_Builder*) setUserBuilder:(User_Builder*) builderForValue;
- (MarketResearch_Builder*) mergeUser:(User*) value;
- (MarketResearch_Builder*) clearUser;

- (BOOL) hasReplyCount;
- (int32_t) replyCount;
- (MarketResearch_Builder*) setReplyCount:(int32_t) value;
- (MarketResearch_Builder*) clearReplyCount;

- (BOOL) hasCameraCategory;
- (NSString*) cameraCategory;
- (MarketResearch_Builder*) setCameraCategory:(NSString*) value;
- (MarketResearch_Builder*) clearCameraCategory;
@end

@interface PageMarketResearch : PBGeneratedMessage {
@private
  BOOL hasPage_:1;
  Pagination* page;
  PBAppendableArray * marketResearchsArray;
}
- (BOOL) hasPage;
@property (readonly, retain) Pagination* page;
@property (readonly, retain) PBArray * marketResearchs;
- (MarketResearch*)marketResearchsAtIndex:(NSUInteger)index;

+ (PageMarketResearch*) defaultInstance;
- (PageMarketResearch*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (PageMarketResearch_Builder*) builder;
+ (PageMarketResearch_Builder*) builder;
+ (PageMarketResearch_Builder*) builderWithPrototype:(PageMarketResearch*) prototype;
- (PageMarketResearch_Builder*) toBuilder;

+ (PageMarketResearch*) parseFromData:(NSData*) data;
+ (PageMarketResearch*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PageMarketResearch*) parseFromInputStream:(NSInputStream*) input;
+ (PageMarketResearch*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PageMarketResearch*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (PageMarketResearch*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface PageMarketResearch_Builder : PBGeneratedMessage_Builder {
@private
  PageMarketResearch* result;
}

- (PageMarketResearch*) defaultInstance;

- (PageMarketResearch_Builder*) clear;
- (PageMarketResearch_Builder*) clone;

- (PageMarketResearch*) build;
- (PageMarketResearch*) buildPartial;

- (PageMarketResearch_Builder*) mergeFrom:(PageMarketResearch*) other;
- (PageMarketResearch_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (PageMarketResearch_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasPage;
- (Pagination*) page;
- (PageMarketResearch_Builder*) setPage:(Pagination*) value;
- (PageMarketResearch_Builder*) setPageBuilder:(Pagination_Builder*) builderForValue;
- (PageMarketResearch_Builder*) mergePage:(Pagination*) value;
- (PageMarketResearch_Builder*) clearPage;

- (PBAppendableArray *)marketResearchs;
- (MarketResearch*)marketResearchsAtIndex:(NSUInteger)index;
- (PageMarketResearch_Builder *)addMarketResearchs:(MarketResearch*)value;
- (PageMarketResearch_Builder *)setMarketResearchsArray:(NSArray *)array;
- (PageMarketResearch_Builder *)setMarketResearchsValues:(const MarketResearch* *)values count:(NSUInteger)count;
- (PageMarketResearch_Builder *)clearMarketResearchs;
@end

@interface MarketResearchParams : PBGeneratedMessage {
@private
  BOOL hasPage_:1;
  BOOL hasId_:1;
  BOOL hasStartDate_:1;
  BOOL hasEndDate_:1;
  int32_t page;
  int32_t id;
  NSString* startDate;
  NSString* endDate;
  PBAppendableArray * usersArray;
  PBAppendableArray * customerCategoryArray;
  PBAppendableArray * customersArray;
  PBAppendableArray * departmentsArray;
  PBAppendableArray * companiesArray;
}
- (BOOL) hasPage;
- (BOOL) hasStartDate;
- (BOOL) hasEndDate;
- (BOOL) hasId;
@property (readonly) int32_t page;
@property (readonly, retain) PBArray * users;
@property (readonly, retain) PBArray * customerCategory;
@property (readonly, retain) PBArray * customers;
@property (readonly, retain) PBArray * departments;
@property (readonly, retain) PBArray * companies;
@property (readonly, retain) NSString* startDate;
@property (readonly, retain) NSString* endDate;
@property (readonly) int32_t id;
- (User*)usersAtIndex:(NSUInteger)index;
- (CustomerCategory*)customerCategoryAtIndex:(NSUInteger)index;
- (Customer*)customersAtIndex:(NSUInteger)index;
- (Department*)departmentsAtIndex:(NSUInteger)index;
- (Company*)companiesAtIndex:(NSUInteger)index;

+ (MarketResearchParams*) defaultInstance;
- (MarketResearchParams*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (MarketResearchParams_Builder*) builder;
+ (MarketResearchParams_Builder*) builder;
+ (MarketResearchParams_Builder*) builderWithPrototype:(MarketResearchParams*) prototype;
- (MarketResearchParams_Builder*) toBuilder;

+ (MarketResearchParams*) parseFromData:(NSData*) data;
+ (MarketResearchParams*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MarketResearchParams*) parseFromInputStream:(NSInputStream*) input;
+ (MarketResearchParams*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MarketResearchParams*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (MarketResearchParams*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface MarketResearchParams_Builder : PBGeneratedMessage_Builder {
@private
  MarketResearchParams* result;
}

- (MarketResearchParams*) defaultInstance;

- (MarketResearchParams_Builder*) clear;
- (MarketResearchParams_Builder*) clone;

- (MarketResearchParams*) build;
- (MarketResearchParams*) buildPartial;

- (MarketResearchParams_Builder*) mergeFrom:(MarketResearchParams*) other;
- (MarketResearchParams_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (MarketResearchParams_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasPage;
- (int32_t) page;
- (MarketResearchParams_Builder*) setPage:(int32_t) value;
- (MarketResearchParams_Builder*) clearPage;

- (PBAppendableArray *)users;
- (User*)usersAtIndex:(NSUInteger)index;
- (MarketResearchParams_Builder *)addUsers:(User*)value;
- (MarketResearchParams_Builder *)setUsersArray:(NSArray *)array;
- (MarketResearchParams_Builder *)setUsersValues:(const User* *)values count:(NSUInteger)count;
- (MarketResearchParams_Builder *)clearUsers;

- (PBAppendableArray *)customerCategory;
- (CustomerCategory*)customerCategoryAtIndex:(NSUInteger)index;
- (MarketResearchParams_Builder *)addCustomerCategory:(CustomerCategory*)value;
- (MarketResearchParams_Builder *)setCustomerCategoryArray:(NSArray *)array;
- (MarketResearchParams_Builder *)setCustomerCategoryValues:(const CustomerCategory* *)values count:(NSUInteger)count;
- (MarketResearchParams_Builder *)clearCustomerCategory;

- (PBAppendableArray *)customers;
- (Customer*)customersAtIndex:(NSUInteger)index;
- (MarketResearchParams_Builder *)addCustomers:(Customer*)value;
- (MarketResearchParams_Builder *)setCustomersArray:(NSArray *)array;
- (MarketResearchParams_Builder *)setCustomersValues:(const Customer* *)values count:(NSUInteger)count;
- (MarketResearchParams_Builder *)clearCustomers;

- (PBAppendableArray *)departments;
- (Department*)departmentsAtIndex:(NSUInteger)index;
- (MarketResearchParams_Builder *)addDepartments:(Department*)value;
- (MarketResearchParams_Builder *)setDepartmentsArray:(NSArray *)array;
- (MarketResearchParams_Builder *)setDepartmentsValues:(const Department* *)values count:(NSUInteger)count;
- (MarketResearchParams_Builder *)clearDepartments;

- (PBAppendableArray *)companies;
- (Company*)companiesAtIndex:(NSUInteger)index;
- (MarketResearchParams_Builder *)addCompanies:(Company*)value;
- (MarketResearchParams_Builder *)setCompaniesArray:(NSArray *)array;
- (MarketResearchParams_Builder *)setCompaniesValues:(const Company* *)values count:(NSUInteger)count;
- (MarketResearchParams_Builder *)clearCompanies;

- (BOOL) hasStartDate;
- (NSString*) startDate;
- (MarketResearchParams_Builder*) setStartDate:(NSString*) value;
- (MarketResearchParams_Builder*) clearStartDate;

- (BOOL) hasEndDate;
- (NSString*) endDate;
- (MarketResearchParams_Builder*) setEndDate:(NSString*) value;
- (MarketResearchParams_Builder*) clearEndDate;

- (BOOL) hasId;
- (int32_t) id;
- (MarketResearchParams_Builder*) setId:(int32_t) value;
- (MarketResearchParams_Builder*) clearId;
@end

@interface MarketResearchReply : PBGeneratedMessage {
@private
  BOOL hasId_:1;
  BOOL hasMarketResearchId_:1;
  BOOL hasContent_:1;
  BOOL hasCreateDate_:1;
  BOOL hasSender_:1;
  int32_t id;
  int32_t marketResearchId;
  NSString* content;
  NSString* createDate;
  User* sender;
  PBAppendableArray * filePathArray;
  PBAppendableArray * receiversArray;
  PBAppendableArray * filesArray;
}
- (BOOL) hasId;
- (BOOL) hasMarketResearchId;
- (BOOL) hasSender;
- (BOOL) hasContent;
- (BOOL) hasCreateDate;
@property (readonly) int32_t id;
@property (readonly) int32_t marketResearchId;
@property (readonly, retain) User* sender;
@property (readonly, retain) PBArray * receivers;
@property (readonly, retain) NSString* content;
@property (readonly, retain) NSString* createDate;
@property (readonly, retain) PBArray * files;
@property (readonly, retain) PBArray * filePath;
- (User*)receiversAtIndex:(NSUInteger)index;
- (NSData*)filesAtIndex:(NSUInteger)index;
- (NSString*)filePathAtIndex:(NSUInteger)index;

+ (MarketResearchReply*) defaultInstance;
- (MarketResearchReply*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (MarketResearchReply_Builder*) builder;
+ (MarketResearchReply_Builder*) builder;
+ (MarketResearchReply_Builder*) builderWithPrototype:(MarketResearchReply*) prototype;
- (MarketResearchReply_Builder*) toBuilder;

+ (MarketResearchReply*) parseFromData:(NSData*) data;
+ (MarketResearchReply*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MarketResearchReply*) parseFromInputStream:(NSInputStream*) input;
+ (MarketResearchReply*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MarketResearchReply*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (MarketResearchReply*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface MarketResearchReply_Builder : PBGeneratedMessage_Builder {
@private
  MarketResearchReply* result;
}

- (MarketResearchReply*) defaultInstance;

- (MarketResearchReply_Builder*) clear;
- (MarketResearchReply_Builder*) clone;

- (MarketResearchReply*) build;
- (MarketResearchReply*) buildPartial;

- (MarketResearchReply_Builder*) mergeFrom:(MarketResearchReply*) other;
- (MarketResearchReply_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (MarketResearchReply_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (int32_t) id;
- (MarketResearchReply_Builder*) setId:(int32_t) value;
- (MarketResearchReply_Builder*) clearId;

- (BOOL) hasMarketResearchId;
- (int32_t) marketResearchId;
- (MarketResearchReply_Builder*) setMarketResearchId:(int32_t) value;
- (MarketResearchReply_Builder*) clearMarketResearchId;

- (BOOL) hasSender;
- (User*) sender;
- (MarketResearchReply_Builder*) setSender:(User*) value;
- (MarketResearchReply_Builder*) setSenderBuilder:(User_Builder*) builderForValue;
- (MarketResearchReply_Builder*) mergeSender:(User*) value;
- (MarketResearchReply_Builder*) clearSender;

- (PBAppendableArray *)receivers;
- (User*)receiversAtIndex:(NSUInteger)index;
- (MarketResearchReply_Builder *)addReceivers:(User*)value;
- (MarketResearchReply_Builder *)setReceiversArray:(NSArray *)array;
- (MarketResearchReply_Builder *)setReceiversValues:(const User* *)values count:(NSUInteger)count;
- (MarketResearchReply_Builder *)clearReceivers;

- (BOOL) hasContent;
- (NSString*) content;
- (MarketResearchReply_Builder*) setContent:(NSString*) value;
- (MarketResearchReply_Builder*) clearContent;

- (BOOL) hasCreateDate;
- (NSString*) createDate;
- (MarketResearchReply_Builder*) setCreateDate:(NSString*) value;
- (MarketResearchReply_Builder*) clearCreateDate;

- (PBAppendableArray *)files;
- (NSData*)filesAtIndex:(NSUInteger)index;
- (MarketResearchReply_Builder *)addFiles:(NSData*)value;
- (MarketResearchReply_Builder *)setFilesArray:(NSArray *)array;
- (MarketResearchReply_Builder *)setFilesValues:(const NSData* *)values count:(NSUInteger)count;
- (MarketResearchReply_Builder *)clearFiles;

- (PBAppendableArray *)filePath;
- (NSString*)filePathAtIndex:(NSUInteger)index;
- (MarketResearchReply_Builder *)addFilePath:(NSString*)value;
- (MarketResearchReply_Builder *)setFilePathArray:(NSArray *)array;
- (MarketResearchReply_Builder *)setFilePathValues:(const NSString* *)values count:(NSUInteger)count;
- (MarketResearchReply_Builder *)clearFilePath;
@end

