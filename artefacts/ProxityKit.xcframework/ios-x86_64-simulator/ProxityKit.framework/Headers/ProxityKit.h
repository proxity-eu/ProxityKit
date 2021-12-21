#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class ProxityKitLocationCompanion, ProxityKitLocation, ProxityKitTag, ProxityKitMessageCompanion, ProxityKitMessage, ProxityKitKotlinByteArray, ProxityKitProxityClient, ProxityKitPlatform, ProxityKitTagCompanion, ProxityKitCachedContent, ProxityKitGetMessagesSince, ProxityKitProxityDBCompanion, ProxityKitRuntimeQuery<__covariant RowType>, ProxityKitKotlinByteIterator, ProxityKitRuntimeTransacterTransaction, ProxityKitKotlinx_serialization_coreSerializersModule, ProxityKitKotlinx_serialization_coreSerialKind, ProxityKitKotlinNothing;

@protocol ProxityKitKotlinx_serialization_coreKSerializer, ProxityKitProxityDelegate, ProxityKitProxityQueries, ProxityKitRuntimeTransactionWithoutReturn, ProxityKitRuntimeTransactionWithReturn, ProxityKitRuntimeTransacter, ProxityKitProxityDB, ProxityKitRuntimeSqlDriver, ProxityKitRuntimeSqlDriverSchema, ProxityKitKotlinx_serialization_coreEncoder, ProxityKitKotlinx_serialization_coreSerialDescriptor, ProxityKitKotlinx_serialization_coreSerializationStrategy, ProxityKitKotlinx_serialization_coreDecoder, ProxityKitKotlinx_serialization_coreDeserializationStrategy, ProxityKitRuntimeTransactionCallbacks, ProxityKitRuntimeSqlPreparedStatement, ProxityKitRuntimeSqlCursor, ProxityKitRuntimeCloseable, ProxityKitRuntimeQueryListener, ProxityKitKotlinx_serialization_coreCompositeEncoder, ProxityKitKotlinAnnotation, ProxityKitKotlinx_serialization_coreCompositeDecoder, ProxityKitKotlinIterator, ProxityKitKotlinx_serialization_coreSerializersModuleCollector, ProxityKitKotlinKClass, ProxityKitKotlinKDeclarationContainer, ProxityKitKotlinKAnnotatedElement, ProxityKitKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface ProxityKitBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface ProxityKitBase (ProxityKitBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface ProxityKitMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface ProxityKitMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorProxityKitKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface ProxityKitNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface ProxityKitByte : ProxityKitNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface ProxityKitUByte : ProxityKitNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface ProxityKitShort : ProxityKitNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface ProxityKitUShort : ProxityKitNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface ProxityKitInt : ProxityKitNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface ProxityKitUInt : ProxityKitNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface ProxityKitLong : ProxityKitNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface ProxityKitULong : ProxityKitNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface ProxityKitFloat : ProxityKitNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface ProxityKitDouble : ProxityKitNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface ProxityKitBoolean : ProxityKitNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location")))
@interface ProxityKitLocation : ProxityKitBase
- (instancetype)initWithLatitude:(float)latitude longitude:(float)longitude __attribute__((swift_name("init(latitude:longitude:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ProxityKitLocationCompanion *companion __attribute__((swift_name("companion")));
- (float)component1 __attribute__((swift_name("component1()")));
- (float)component2 __attribute__((swift_name("component2()")));
- (ProxityKitLocation *)doCopyLatitude:(float)latitude longitude:(float)longitude __attribute__((swift_name("doCopy(latitude:longitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float latitude __attribute__((swift_name("latitude")));
@property (readonly) float longitude __attribute__((swift_name("longitude")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location.Companion")))
@interface ProxityKitLocationCompanion : ProxityKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ProxityKitLocationCompanion *shared __attribute__((swift_name("shared")));
- (id<ProxityKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message")))
@interface ProxityKitMessage : ProxityKitBase
- (instancetype)initWithId:(NSString *)id title:(NSString *)title text:(NSString *)text url:(NSString * _Nullable)url image:(NSString *)image tags:(NSArray<ProxityKitTag *> *)tags regionId:(NSString *)regionId regionName:(NSString *)regionName regionImage:(NSString *)regionImage usertagId:(NSString * _Nullable)usertagId usertagLabel:(NSString * _Nullable)usertagLabel usertagImage:(NSString * _Nullable)usertagImage receivedAt:(int64_t)receivedAt __attribute__((swift_name("init(id:title:text:url:image:tags:regionId:regionName:regionImage:usertagId:usertagLabel:usertagImage:receivedAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ProxityKitMessageCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (int64_t)component13 __attribute__((swift_name("component13()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSArray<ProxityKitTag *> *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (ProxityKitMessage *)doCopyId:(NSString *)id title:(NSString *)title text:(NSString *)text url:(NSString * _Nullable)url image:(NSString *)image tags:(NSArray<ProxityKitTag *> *)tags regionId:(NSString *)regionId regionName:(NSString *)regionName regionImage:(NSString *)regionImage usertagId:(NSString * _Nullable)usertagId usertagLabel:(NSString * _Nullable)usertagLabel usertagImage:(NSString * _Nullable)usertagImage receivedAt:(int64_t)receivedAt __attribute__((swift_name("doCopy(id:title:text:url:image:tags:regionId:regionName:regionImage:usertagId:usertagLabel:usertagImage:receivedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *image __attribute__((swift_name("image")));
@property int64_t receivedAt __attribute__((swift_name("receivedAt")));
@property (readonly) NSString *regionId __attribute__((swift_name("regionId")));
@property (readonly) NSString *regionImage __attribute__((swift_name("regionImage")));
@property (readonly) NSString *regionName __attribute__((swift_name("regionName")));
@property (readonly) NSArray<ProxityKitTag *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) NSString * _Nullable usertagId __attribute__((swift_name("usertagId")));
@property (readonly) NSString * _Nullable usertagImage __attribute__((swift_name("usertagImage")));
@property (readonly) NSString * _Nullable usertagLabel __attribute__((swift_name("usertagLabel")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.Companion")))
@interface ProxityKitMessageCompanion : ProxityKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ProxityKitMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<ProxityKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface ProxityKitPlatform : ProxityKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ProxityKitLong * _Nullable)getFileLastModifiedId:(NSString *)id __attribute__((swift_name("getFileLastModified(id:)")));
- (NSString * _Nullable)writeImageId:(NSString *)id bytes:(ProxityKitKotlinByteArray *)bytes __attribute__((swift_name("writeImage(id:bytes:)")));
@property (readonly) int64_t epoch __attribute__((swift_name("epoch")));
@property (readonly) NSString *lang __attribute__((swift_name("lang")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProxityClient")))
@interface ProxityKitProxityClient : ProxityKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)proxityClient __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ProxityKitProxityClient *shared __attribute__((swift_name("shared")));
- (void)configureApiKey:(NSString *)apiKey delegate:(id<ProxityKitProxityDelegate>)delegate platform:(ProxityKitPlatform *)platform lang:(NSString * _Nullable)lang endpoint:(NSString *)endpoint __attribute__((swift_name("configure(apiKey:delegate:platform:lang:endpoint:)")));
- (ProxityKitMessage * _Nullable)loadMessageId:(NSString *)id ts:(ProxityKitLong * _Nullable)ts __attribute__((swift_name("loadMessage(id:ts:)")));
- (NSString * _Nullable)loadMessageAsJsonId:(NSString *)id ts:(ProxityKitLong * _Nullable)ts __attribute__((swift_name("loadMessageAsJson(id:ts:)")));
- (NSArray<ProxityKitMessage *> *)loadMessagesSinceFrom:(int64_t)from __attribute__((swift_name("loadMessagesSince(from:)")));
- (NSString *)loadMessagesSinceAsJsonFrom:(int64_t)from __attribute__((swift_name("loadMessagesSinceAsJson(from:)")));
- (void)start __attribute__((swift_name("start()")));
- (void)stop __attribute__((swift_name("stop()")));
@end;

__attribute__((swift_name("ProxityDelegate")))
@protocol ProxityKitProxityDelegate
@required
- (BOOL)onFilterMessageTags:(NSArray<NSString *> * _Nullable)tags __attribute__((swift_name("onFilterMessage(tags:)")));
- (void)onMessageMessage:(ProxityKitMessage *)message __attribute__((swift_name("onMessage(message:)")));
- (NSString *)onWebhookId:(NSString *)id __attribute__((swift_name("onWebhook(id:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tag")))
@interface ProxityKitTag : ProxityKitBase
- (instancetype)initWithId:(NSString *)id label:(NSString *)label __attribute__((swift_name("init(id:label:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ProxityKitTagCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (ProxityKitTag *)doCopyId:(NSString *)id label:(NSString *)label __attribute__((swift_name("doCopy(id:label:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tag.Companion")))
@interface ProxityKitTagCompanion : ProxityKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ProxityKitTagCompanion *shared __attribute__((swift_name("shared")));
- (id<ProxityKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CachedContent")))
@interface ProxityKitCachedContent : ProxityKitBase
- (instancetype)initWithId:(NSString *)id content:(NSString * _Nullable)content updated_at:(int64_t)updated_at received_at:(int64_t)received_at expiry:(int64_t)expiry __attribute__((swift_name("init(id:content:updated_at:received_at:expiry:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (int64_t)component4 __attribute__((swift_name("component4()")));
- (int64_t)component5 __attribute__((swift_name("component5()")));
- (ProxityKitCachedContent *)doCopyId:(NSString *)id content:(NSString * _Nullable)content updated_at:(int64_t)updated_at received_at:(int64_t)received_at expiry:(int64_t)expiry __attribute__((swift_name("doCopy(id:content:updated_at:received_at:expiry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable content __attribute__((swift_name("content")));
@property (readonly) int64_t expiry __attribute__((swift_name("expiry")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) int64_t received_at __attribute__((swift_name("received_at")));
@property (readonly) int64_t updated_at __attribute__((swift_name("updated_at")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMessagesSince")))
@interface ProxityKitGetMessagesSince : ProxityKitBase
- (instancetype)initWithContent:(NSString *)content received_at:(int64_t)received_at __attribute__((swift_name("init(content:received_at:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (ProxityKitGetMessagesSince *)doCopyContent:(NSString *)content received_at:(int64_t)received_at __attribute__((swift_name("doCopy(content:received_at:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t received_at __attribute__((swift_name("received_at")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol ProxityKitRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<ProxityKitRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<ProxityKitRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("ProxityDB")))
@protocol ProxityKitProxityDB <ProxityKitRuntimeTransacter>
@required
@property (readonly) id<ProxityKitProxityQueries> proxityQueries __attribute__((swift_name("proxityQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProxityDBCompanion")))
@interface ProxityKitProxityDBCompanion : ProxityKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ProxityKitProxityDBCompanion *shared __attribute__((swift_name("shared")));
- (id<ProxityKitProxityDB>)invokeDriver:(id<ProxityKitRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<ProxityKitRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((swift_name("ProxityQueries")))
@protocol ProxityKitProxityQueries <ProxityKitRuntimeTransacter>
@required
- (void)clearCache __attribute__((swift_name("clearCache()")));
- (ProxityKitRuntimeQuery<ProxityKitCachedContent *> *)getMessageId:(NSString *)id __attribute__((swift_name("getMessage(id:)")));
- (ProxityKitRuntimeQuery<id> *)getMessageId:(NSString *)id mapper:(id (^)(NSString *, NSString * _Nullable, ProxityKitLong *, ProxityKitLong *, ProxityKitLong *))mapper __attribute__((swift_name("getMessage(id:mapper:)")));
- (ProxityKitRuntimeQuery<ProxityKitGetMessagesSince *> *)getMessagesSinceReceived_at:(int64_t)received_at __attribute__((swift_name("getMessagesSince(received_at:)")));
- (ProxityKitRuntimeQuery<id> *)getMessagesSinceReceived_at:(int64_t)received_at mapper:(id (^)(NSString *, ProxityKitLong *))mapper __attribute__((swift_name("getMessagesSince(received_at:mapper:)")));
- (ProxityKitRuntimeQuery<ProxityKitLong *> *)isContentCachedId:(NSString *)id expiry:(int64_t)expiry __attribute__((swift_name("isContentCached(id:expiry:)")));
- (ProxityKitRuntimeQuery<ProxityKitCachedContent *> *)loadContentId:(NSString *)id __attribute__((swift_name("loadContent(id:)")));
- (ProxityKitRuntimeQuery<id> *)loadContentId:(NSString *)id mapper:(id (^)(NSString *, NSString * _Nullable, ProxityKitLong *, ProxityKitLong *, ProxityKitLong *))mapper __attribute__((swift_name("loadContent(id:mapper:)")));
- (void)replaceContentCachedContent:(ProxityKitCachedContent *)cachedContent __attribute__((swift_name("replaceContent(cachedContent:)")));
- (void)updateTimestampsReceived_at:(int64_t)received_at expiry:(int64_t)expiry id:(NSString *)id __attribute__((swift_name("updateTimestamps(received_at:expiry:id:)")));
@end;

@interface ProxityKitMessage (Extensions)
- (NSString *)toJson __attribute__((swift_name("toJson()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol ProxityKitKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<ProxityKitKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<ProxityKitKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol ProxityKitKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<ProxityKitKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<ProxityKitKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol ProxityKitKotlinx_serialization_coreKSerializer <ProxityKitKotlinx_serialization_coreSerializationStrategy, ProxityKitKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface ProxityKitKotlinByteArray : ProxityKitBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(ProxityKitByte *(^)(ProxityKitInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (ProxityKitKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol ProxityKitRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol ProxityKitRuntimeTransactionWithoutReturn <ProxityKitRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<ProxityKitRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol ProxityKitRuntimeTransactionWithReturn <ProxityKitRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<ProxityKitRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol ProxityKitRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol ProxityKitRuntimeSqlDriver <ProxityKitRuntimeCloseable>
@required
- (ProxityKitRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(ProxityKitInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<ProxityKitRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<ProxityKitRuntimeSqlCursor>)executeQueryIdentifier:(ProxityKitInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<ProxityKitRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (ProxityKitRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol ProxityKitRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<ProxityKitRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<ProxityKitRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface ProxityKitRuntimeQuery<__covariant RowType> : ProxityKitBase
- (instancetype)initWithQueries:(NSMutableArray<ProxityKitRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<ProxityKitRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<ProxityKitRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<ProxityKitRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<ProxityKitRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<ProxityKitRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol ProxityKitKotlinx_serialization_coreEncoder
@required
- (id<ProxityKitKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<ProxityKitKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<ProxityKitKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<ProxityKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<ProxityKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) ProxityKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol ProxityKitKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<ProxityKitKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<ProxityKitKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) ProxityKitKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol ProxityKitKotlinx_serialization_coreDecoder
@required
- (id<ProxityKitKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<ProxityKitKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (ProxityKitKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<ProxityKitKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<ProxityKitKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) ProxityKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol ProxityKitKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface ProxityKitKotlinByteIterator : ProxityKitBase <ProxityKitKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ProxityKitByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface ProxityKitRuntimeTransacterTransaction : ProxityKitBase <ProxityKitRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) ProxityKitRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol ProxityKitRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(ProxityKitKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(ProxityKitDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(ProxityKitLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol ProxityKitRuntimeSqlCursor <ProxityKitRuntimeCloseable>
@required
- (ProxityKitKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (ProxityKitDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (ProxityKitLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol ProxityKitRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol ProxityKitKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<ProxityKitKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<ProxityKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<ProxityKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) ProxityKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface ProxityKitKotlinx_serialization_coreSerializersModule : ProxityKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<ProxityKitKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<ProxityKitKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<ProxityKitKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<ProxityKitKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<ProxityKitKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<ProxityKitKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<ProxityKitKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<ProxityKitKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol ProxityKitKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface ProxityKitKotlinx_serialization_coreSerialKind : ProxityKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol ProxityKitKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<ProxityKitKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<ProxityKitKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<ProxityKitKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<ProxityKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) ProxityKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface ProxityKitKotlinNothing : ProxityKitBase
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol ProxityKitKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<ProxityKitKotlinKClass>)kClass provider:(id<ProxityKitKotlinx_serialization_coreKSerializer> (^)(NSArray<id<ProxityKitKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<ProxityKitKotlinKClass>)kClass serializer:(id<ProxityKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<ProxityKitKotlinKClass>)baseClass actualClass:(id<ProxityKitKotlinKClass>)actualClass actualSerializer:(id<ProxityKitKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<ProxityKitKotlinKClass>)baseClass defaultSerializerProvider:(id<ProxityKitKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol ProxityKitKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol ProxityKitKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol ProxityKitKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol ProxityKitKotlinKClass <ProxityKitKotlinKDeclarationContainer, ProxityKitKotlinKAnnotatedElement, ProxityKitKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
