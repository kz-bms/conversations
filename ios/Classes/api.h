// Autogenerated from Pigeon (v1.0.7), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class TWCONConversationClientData;
@class TWCONPropertiesData;
@class TWCONConversationData;
@class TWCONAttributesData;
@class TWCONTokenData;
@class TWCONMessageMediaData;
@class TWCONMessageData;
@class TWCONMessageOptionsData;
@class TWCONParticipantData;
@class TWCONUserData;
@class TWCONMessageCount;
@class TWCONConversationUpdatedData;
@class TWCONErrorInfoData;

@interface TWCONConversationClientData : NSObject
@property(nonatomic, copy, nullable) NSString * myIdentity;
@property(nonatomic, copy, nullable) NSString * connectionState;
@property(nonatomic, strong, nullable) NSNumber * isReachabilityEnabled;
@end

@interface TWCONPropertiesData : NSObject
@property(nonatomic, copy, nullable) NSString * region;
@end

@interface TWCONConversationData : NSObject
@property(nonatomic, copy, nullable) NSString * sid;
@property(nonatomic, strong, nullable) TWCONAttributesData * attributes;
@property(nonatomic, copy, nullable) NSString * uniqueName;
@property(nonatomic, copy, nullable) NSString * friendlyName;
@property(nonatomic, copy, nullable) NSString * status;
@property(nonatomic, copy, nullable) NSString * synchronizationStatus;
@property(nonatomic, copy, nullable) NSString * dateCreated;
@property(nonatomic, copy, nullable) NSString * createdBy;
@property(nonatomic, copy, nullable) NSString * dateUpdated;
@property(nonatomic, copy, nullable) NSString * lastMessageDate;
@property(nonatomic, strong, nullable) NSNumber * lastReadMessageIndex;
@property(nonatomic, strong, nullable) NSNumber * lastMessageIndex;
@end

@interface TWCONAttributesData : NSObject
@property(nonatomic, copy, nullable) NSString * type;
@property(nonatomic, copy, nullable) NSString * data;
@end

@interface TWCONTokenData : NSObject
@property(nonatomic, copy, nullable) NSString * token;
@end

@interface TWCONMessageMediaData : NSObject
@property(nonatomic, copy, nullable) NSString * sid;
@property(nonatomic, copy, nullable) NSString * fileName;
@property(nonatomic, copy, nullable) NSString * type;
@property(nonatomic, strong, nullable) NSNumber * size;
@property(nonatomic, copy, nullable) NSString * conversationSid;
@property(nonatomic, copy, nullable) NSString * messageSid;
@property(nonatomic, strong, nullable) NSNumber * messageIndex;
@end

@interface TWCONMessageData : NSObject
@property(nonatomic, copy, nullable) NSString * sid;
@property(nonatomic, strong, nullable) NSNumber * messageIndex;
@property(nonatomic, copy, nullable) NSString * author;
@property(nonatomic, copy, nullable) NSString * subject;
@property(nonatomic, copy, nullable) NSString * messageBody;
@property(nonatomic, copy, nullable) NSString * type;
@property(nonatomic, strong, nullable) NSNumber * hasMedia;
@property(nonatomic, strong, nullable) TWCONMessageMediaData * media;
@property(nonatomic, copy, nullable) NSString * conversationSid;
@property(nonatomic, copy, nullable) NSString * participantSid;
@property(nonatomic, copy, nullable) NSString * dateCreated;
@property(nonatomic, copy, nullable) NSString * dateUpdated;
@property(nonatomic, copy, nullable) NSString * lastUpdatedBy;
@property(nonatomic, strong, nullable) TWCONAttributesData * attributes;
@end

@interface TWCONMessageOptionsData : NSObject
@property(nonatomic, copy, nullable) NSString * body;
@property(nonatomic, strong, nullable) TWCONAttributesData * attributes;
@property(nonatomic, copy, nullable) NSString * mimeType;
@property(nonatomic, copy, nullable) NSString * filename;
@property(nonatomic, copy, nullable) NSString * inputPath;
@property(nonatomic, strong, nullable) NSNumber * mediaProgressListenerId;
@end

@interface TWCONParticipantData : NSObject
@property(nonatomic, copy, nullable) NSString * sid;
@property(nonatomic, copy, nullable) NSString * conversationSid;
@property(nonatomic, copy, nullable) NSString * type;
@property(nonatomic, strong, nullable) TWCONAttributesData * attributes;
@property(nonatomic, copy, nullable) NSString * dateCreated;
@property(nonatomic, copy, nullable) NSString * dateUpdated;
@property(nonatomic, copy, nullable) NSString * identity;
@property(nonatomic, strong, nullable) NSNumber * lastReadMessageIndex;
@property(nonatomic, copy, nullable) NSString * lastReadTimestamp;
@end

@interface TWCONUserData : NSObject
@property(nonatomic, copy, nullable) NSString * identity;
@property(nonatomic, strong, nullable) TWCONAttributesData * attributes;
@property(nonatomic, copy, nullable) NSString * friendlyName;
@property(nonatomic, strong, nullable) NSNumber * isNotifiable;
@property(nonatomic, strong, nullable) NSNumber * isOnline;
@property(nonatomic, strong, nullable) NSNumber * isSubscribed;
@end

@interface TWCONMessageCount : NSObject
@property(nonatomic, strong, nullable) NSNumber * count;
@end

@interface TWCONConversationUpdatedData : NSObject
@property(nonatomic, strong, nullable) TWCONConversationData * conversation;
@property(nonatomic, copy, nullable) NSString * reason;
@end

@interface TWCONErrorInfoData : NSObject
@property(nonatomic, strong, nullable) NSNumber * code;
@property(nonatomic, copy, nullable) NSString * message;
@property(nonatomic, strong, nullable) NSNumber * status;
@end

/// The codec used by TWCONPluginApi.
NSObject<FlutterMessageCodec> *TWCONPluginApiGetCodec(void);

@protocol TWCONPluginApi
- (void)debugEnableNative:(NSNumber *)enableNative enableSdk:(NSNumber *)enableSdk error:(FlutterError *_Nullable *_Nonnull)error;
- (void)createJwtToken:(nullable NSString *)jwtToken properties:(nullable TWCONPropertiesData *)properties completion:(void(^)(TWCONConversationClientData *_Nullable, FlutterError *_Nullable))completion;
@end

extern void TWCONPluginApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<TWCONPluginApi> *_Nullable api);

/// The codec used by TWCONConversationClientApi.
NSObject<FlutterMessageCodec> *TWCONConversationClientApiGetCodec(void);

@protocol TWCONConversationClientApi
- (void)updateTokenToken:(nullable NSString *)token completion:(void(^)(FlutterError *_Nullable))completion;
- (void)shutdownWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)createConversationFriendlyName:(nullable NSString *)friendlyName attributesData:(nullable TWCONAttributesData *)attributesData completion:(void(^)(TWCONConversationData *_Nullable, FlutterError *_Nullable))completion;
- (void)getMyConversationsWithCompletion:(void(^)(NSArray<TWCONConversationData *> *_Nullable, FlutterError *_Nullable))completion;
- (void)getConversationConversationSidOrUniqueName:(nullable NSString *)conversationSidOrUniqueName completion:(void(^)(TWCONConversationData *_Nullable, FlutterError *_Nullable))completion;
- (void)getMyUserWithCompletion:(void(^)(TWCONUserData *_Nullable, FlutterError *_Nullable))completion;
- (void)registerForNotificationTokenData:(nullable TWCONTokenData *)tokenData completion:(void(^)(FlutterError *_Nullable))completion;
- (void)unregisterForNotificationTokenData:(nullable TWCONTokenData *)tokenData completion:(void(^)(FlutterError *_Nullable))completion;
@end

extern void TWCONConversationClientApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<TWCONConversationClientApi> *_Nullable api);

/// The codec used by TWCONConversationApi.
NSObject<FlutterMessageCodec> *TWCONConversationApiGetCodec(void);

@protocol TWCONConversationApi
- (void)joinConversationSid:(nullable NSString *)conversationSid completion:(void(^)(FlutterError *_Nullable))completion;
- (void)leaveConversationSid:(nullable NSString *)conversationSid completion:(void(^)(FlutterError *_Nullable))completion;
- (void)destroyConversationSid:(nullable NSString *)conversationSid completion:(void(^)(FlutterError *_Nullable))completion;
- (void)typingConversationSid:(nullable NSString *)conversationSid completion:(void(^)(FlutterError *_Nullable))completion;
- (void)sendMessageConversationSid:(nullable NSString *)conversationSid options:(nullable TWCONMessageOptionsData *)options completion:(void(^)(TWCONMessageData *_Nullable, FlutterError *_Nullable))completion;
- (void)addParticipantByIdentityConversationSid:(nullable NSString *)conversationSid identity:(nullable NSString *)identity completion:(void(^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)removeParticipantConversationSid:(nullable NSString *)conversationSid participantSid:(nullable NSString *)participantSid completion:(void(^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)removeParticipantByIdentityConversationSid:(nullable NSString *)conversationSid identity:(nullable NSString *)identity completion:(void(^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)getParticipantByIdentityConversationSid:(nullable NSString *)conversationSid identity:(nullable NSString *)identity completion:(void(^)(TWCONParticipantData *_Nullable, FlutterError *_Nullable))completion;
- (void)getParticipantBySidConversationSid:(nullable NSString *)conversationSid participantSid:(nullable NSString *)participantSid completion:(void(^)(TWCONParticipantData *_Nullable, FlutterError *_Nullable))completion;
- (void)getParticipantsListConversationSid:(nullable NSString *)conversationSid completion:(void(^)(NSArray<TWCONParticipantData *> *_Nullable, FlutterError *_Nullable))completion;
- (void)getMessagesCountConversationSid:(nullable NSString *)conversationSid completion:(void(^)(TWCONMessageCount *_Nullable, FlutterError *_Nullable))completion;
- (void)getUnreadMessagesCountConversationSid:(nullable NSString *)conversationSid completion:(void(^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)advanceLastReadMessageIndexConversationSid:(nullable NSString *)conversationSid lastReadMessageIndex:(nullable NSNumber *)lastReadMessageIndex completion:(void(^)(TWCONMessageCount *_Nullable, FlutterError *_Nullable))completion;
- (void)setLastReadMessageIndexConversationSid:(nullable NSString *)conversationSid lastReadMessageIndex:(nullable NSNumber *)lastReadMessageIndex completion:(void(^)(TWCONMessageCount *_Nullable, FlutterError *_Nullable))completion;
- (void)setAllMessagesReadConversationSid:(nullable NSString *)conversationSid completion:(void(^)(TWCONMessageCount *_Nullable, FlutterError *_Nullable))completion;
- (void)setAllMessagesUnreadConversationSid:(nullable NSString *)conversationSid completion:(void(^)(TWCONMessageCount *_Nullable, FlutterError *_Nullable))completion;
- (void)getParticipantsCountConversationSid:(nullable NSString *)conversationSid completion:(void(^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)getMessagesAfterConversationSid:(nullable NSString *)conversationSid index:(nullable NSNumber *)index count:(nullable NSNumber *)count completion:(void(^)(NSArray<TWCONMessageData *> *_Nullable, FlutterError *_Nullable))completion;
- (void)getMessagesBeforeConversationSid:(nullable NSString *)conversationSid index:(nullable NSNumber *)index count:(nullable NSNumber *)count completion:(void(^)(NSArray<TWCONMessageData *> *_Nullable, FlutterError *_Nullable))completion;
- (void)getMessageByIndexConversationSid:(nullable NSString *)conversationSid messageIndex:(nullable NSNumber *)messageIndex completion:(void(^)(TWCONMessageData *_Nullable, FlutterError *_Nullable))completion;
- (void)getLastMessagesConversationSid:(nullable NSString *)conversationSid count:(nullable NSNumber *)count completion:(void(^)(NSArray<TWCONMessageData *> *_Nullable, FlutterError *_Nullable))completion;
- (void)removeMessageConversationSid:(nullable NSString *)conversationSid messageIndex:(nullable NSNumber *)messageIndex completion:(void(^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setAttributesConversationSid:(nullable NSString *)conversationSid attributes:(nullable TWCONAttributesData *)attributes completion:(void(^)(FlutterError *_Nullable))completion;
- (void)setFriendlyNameConversationSid:(nullable NSString *)conversationSid friendlyName:(nullable NSString *)friendlyName completion:(void(^)(FlutterError *_Nullable))completion;
- (void)setNotificationLevelConversationSid:(nullable NSString *)conversationSid notificationLevel:(nullable NSString *)notificationLevel completion:(void(^)(FlutterError *_Nullable))completion;
- (void)setUniqueNameConversationSid:(nullable NSString *)conversationSid uniqueName:(nullable NSString *)uniqueName completion:(void(^)(FlutterError *_Nullable))completion;
@end

extern void TWCONConversationApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<TWCONConversationApi> *_Nullable api);

/// The codec used by TWCONParticipantApi.
NSObject<FlutterMessageCodec> *TWCONParticipantApiGetCodec(void);

@protocol TWCONParticipantApi
- (void)getUserConversationSid:(nullable NSString *)conversationSid participantSid:(nullable NSString *)participantSid completion:(void(^)(TWCONUserData *_Nullable, FlutterError *_Nullable))completion;
- (void)setAttributesConversationSid:(nullable NSString *)conversationSid participantSid:(nullable NSString *)participantSid attributes:(nullable TWCONAttributesData *)attributes completion:(void(^)(FlutterError *_Nullable))completion;
- (void)removeConversationSid:(nullable NSString *)conversationSid participantSid:(nullable NSString *)participantSid completion:(void(^)(FlutterError *_Nullable))completion;
@end

extern void TWCONParticipantApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<TWCONParticipantApi> *_Nullable api);

/// The codec used by TWCONMessageApi.
NSObject<FlutterMessageCodec> *TWCONMessageApiGetCodec(void);

@protocol TWCONMessageApi
- (void)getMediaContentTemporaryUrlConversationSid:(nullable NSString *)conversationSid messageIndex:(nullable NSNumber *)messageIndex completion:(void(^)(NSString *_Nullable, FlutterError *_Nullable))completion;
- (void)getParticipantConversationSid:(nullable NSString *)conversationSid messageIndex:(nullable NSNumber *)messageIndex completion:(void(^)(TWCONParticipantData *_Nullable, FlutterError *_Nullable))completion;
- (void)setAttributesConversationSid:(nullable NSString *)conversationSid messageIndex:(nullable NSNumber *)messageIndex attributes:(nullable TWCONAttributesData *)attributes completion:(void(^)(FlutterError *_Nullable))completion;
- (void)updateMessageBodyConversationSid:(nullable NSString *)conversationSid messageIndex:(nullable NSNumber *)messageIndex messageBody:(nullable NSString *)messageBody completion:(void(^)(FlutterError *_Nullable))completion;
@end

extern void TWCONMessageApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<TWCONMessageApi> *_Nullable api);

/// The codec used by TWCONUserApi.
NSObject<FlutterMessageCodec> *TWCONUserApiGetCodec(void);

@protocol TWCONUserApi
- (void)setFriendlyNameIdentity:(nullable NSString *)identity friendlyName:(nullable NSString *)friendlyName completion:(void(^)(FlutterError *_Nullable))completion;
- (void)setAttributesIdentity:(nullable NSString *)identity attributes:(nullable TWCONAttributesData *)attributes completion:(void(^)(FlutterError *_Nullable))completion;
@end

extern void TWCONUserApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<TWCONUserApi> *_Nullable api);

/// The codec used by TWCONFlutterConversationClientApi.
NSObject<FlutterMessageCodec> *TWCONFlutterConversationClientApiGetCodec(void);

@interface TWCONFlutterConversationClientApi : NSObject
- (instancetype)initWithBinaryMessenger:(id<FlutterBinaryMessenger>)binaryMessenger;
- (void)errorErrorInfoData:(TWCONErrorInfoData *)errorInfoData completion:(void(^)(NSError *_Nullable))completion;
- (void)conversationAddedConversationData:(TWCONConversationData *)conversationData completion:(void(^)(NSError *_Nullable))completion;
- (void)conversationUpdatedEvent:(TWCONConversationUpdatedData *)event completion:(void(^)(NSError *_Nullable))completion;
- (void)conversationDeletedConversationData:(TWCONConversationData *)conversationData completion:(void(^)(NSError *_Nullable))completion;
- (void)clientSynchronizationSynchronizationStatus:(NSString *)synchronizationStatus completion:(void(^)(NSError *_Nullable))completion;
- (void)conversationSynchronizationChangeConversationData:(TWCONConversationData *)conversationData completion:(void(^)(NSError *_Nullable))completion;
- (void)connectionStateChangeConnectionState:(NSString *)connectionState completion:(void(^)(NSError *_Nullable))completion;
- (void)tokenAboutToExpireWithCompletion:(void(^)(NSError *_Nullable))completion;
- (void)tokenExpiredWithCompletion:(void(^)(NSError *_Nullable))completion;
- (void)userSubscribedUserData:(TWCONUserData *)userData completion:(void(^)(NSError *_Nullable))completion;
- (void)userUnsubscribedUserData:(TWCONUserData *)userData completion:(void(^)(NSError *_Nullable))completion;
- (void)userUpdatedUserData:(TWCONUserData *)userData reason:(NSString *)reason completion:(void(^)(NSError *_Nullable))completion;
- (void)addedToConversationNotificationConversationSid:(NSString *)conversationSid completion:(void(^)(NSError *_Nullable))completion;
- (void)newMessageNotificationConversationSid:(NSString *)conversationSid messageIndex:(NSNumber *)messageIndex completion:(void(^)(NSError *_Nullable))completion;
- (void)notificationSubscribedWithCompletion:(void(^)(NSError *_Nullable))completion;
- (void)notificationFailedErrorInfoData:(TWCONErrorInfoData *)errorInfoData completion:(void(^)(NSError *_Nullable))completion;
- (void)removedFromConversationNotificationConversationSid:(NSString *)conversationSid completion:(void(^)(NSError *_Nullable))completion;
- (void)registeredWithCompletion:(void(^)(NSError *_Nullable))completion;
- (void)registrationFailedErrorInfoData:(TWCONErrorInfoData *)errorInfoData completion:(void(^)(NSError *_Nullable))completion;
- (void)deregisteredWithCompletion:(void(^)(NSError *_Nullable))completion;
- (void)deregistrationFailedErrorInfoData:(TWCONErrorInfoData *)errorInfoData completion:(void(^)(NSError *_Nullable))completion;
- (void)messageAddedConversationSid:(NSString *)conversationSid messageData:(TWCONMessageData *)messageData completion:(void(^)(NSError *_Nullable))completion;
- (void)messageUpdatedConversationSid:(NSString *)conversationSid messageData:(TWCONMessageData *)messageData reason:(NSString *)reason completion:(void(^)(NSError *_Nullable))completion;
- (void)messageDeletedConversationSid:(NSString *)conversationSid messageData:(TWCONMessageData *)messageData completion:(void(^)(NSError *_Nullable))completion;
- (void)participantAddedConversationSid:(NSString *)conversationSid participantData:(TWCONParticipantData *)participantData completion:(void(^)(NSError *_Nullable))completion;
- (void)participantUpdatedConversationSid:(NSString *)conversationSid participantData:(TWCONParticipantData *)participantData reason:(NSString *)reason completion:(void(^)(NSError *_Nullable))completion;
- (void)participantDeletedConversationSid:(NSString *)conversationSid participantData:(TWCONParticipantData *)participantData completion:(void(^)(NSError *_Nullable))completion;
- (void)typingStartedConversationSid:(NSString *)conversationSid conversationData:(TWCONConversationData *)conversationData participantData:(TWCONParticipantData *)participantData completion:(void(^)(NSError *_Nullable))completion;
- (void)typingEndedConversationSid:(NSString *)conversationSid conversationData:(TWCONConversationData *)conversationData participantData:(TWCONParticipantData *)participantData completion:(void(^)(NSError *_Nullable))completion;
- (void)synchronizationChangedConversationSid:(NSString *)conversationSid conversationData:(TWCONConversationData *)conversationData completion:(void(^)(NSError *_Nullable))completion;
@end
/// The codec used by TWCONFlutterLoggingApi.
NSObject<FlutterMessageCodec> *TWCONFlutterLoggingApiGetCodec(void);

@interface TWCONFlutterLoggingApi : NSObject
- (instancetype)initWithBinaryMessenger:(id<FlutterBinaryMessenger>)binaryMessenger;
- (void)logFromHostMsg:(NSString *)msg completion:(void(^)(NSError *_Nullable))completion;
@end
NS_ASSUME_NONNULL_END
