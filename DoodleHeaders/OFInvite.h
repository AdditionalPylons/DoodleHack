/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFResource.h"
#import "OFCallbackable.h"

@class OFUser, NSString, OFInviteDefinition;

@interface OFInvite : OFResource <OFCallbackable> {
	OFUser* senderUser;
	OFUser* receiverUser;
	NSString* clientApplicationName;
	NSString* clientApplicationID;
	NSString* inviteIdentifier;
	NSString* senderParameter;
	NSString* receiverParameter;
	NSString* inviteIconURL;
	NSString* developerMessage;
	NSString* receiverNotification;
	NSString* senderNotification;
	NSString* userMessage;
	NSString* state;
	OFInviteDefinition* inviteDefinition;
	OFPointer<OFHttpService> mHttpService;
	OFPointer<OFImageViewHttpServiceObserver> mHttpServiceObserver;
}
@property(readonly, assign, nonatomic) OFUser* senderUser;
@property(readonly, assign, nonatomic) OFUser* receiverUser;
@property(readonly, assign, nonatomic) NSString* clientApplicationName;
@property(readonly, assign, nonatomic) NSString* clientApplicationID;
@property(readonly, assign, nonatomic) NSString* inviteIdentifier;
@property(readonly, assign, nonatomic) NSString* senderParameter;
@property(readonly, assign, nonatomic) NSString* receiverParameter;
@property(readonly, assign, nonatomic) NSString* inviteIconURL;
@property(readonly, assign, nonatomic) NSString* developerMessage;
@property(readonly, assign, nonatomic) NSString* receiverNotification;
@property(readonly, assign, nonatomic) NSString* senderNotification;
@property(retain, nonatomic) NSString* userMessage;
@property(readonly, assign, nonatomic) NSString* state;
+(void)setDelegate:(id)delegate;
+(id)getService;
+(OFResourceDataMap*)getDataMap;
+(id)getResourceName;
+(bool)canReceiveCallbacksNow;
-(id)initWithInviteDefinition:(id)inviteDefinition;
-(id)sendInviteToUsers:(id)users;
-(void)displayAndSendInviteScreen;
-(id)getInviteIcon;
-(void)_sendInviteSuccess;
-(void)_sendInviteFailure;
-(void)_getInviteIconSuccess:(id)success;
-(void)_getInviteIconFailure;
-(void)setSenderUser:(id)user;
-(void)setReceiverUser:(id)user;
-(void)setClientApplicationName:(id)name;
-(void)setClientApplicationID:(id)anId;
-(void)setInviteIdentifier:(id)identifier;
-(void)setSenderParameter:(id)parameter;
-(void)setReceiverParameter:(id)parameter;
-(void)setInviteIconURL:(id)url;
-(void)setDeveloperMessage:(id)message;
-(void)setReceiverNotification:(id)notification;
-(void)setSenderNotification:(id)notification;
-(void)setState:(id)state;
-(bool)canReceiveCallbacksNow;
-(void)dealloc;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

