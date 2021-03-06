/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFCallbackable.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class OFNotificationData, MPOAuthAPIRequestLoader;

@interface OFActionRequest : XXUnknownSuperclass <OFCallbackable> {
	MPOAuthAPIRequestLoader* mLoader;
	int mRequestType;
	OFNotificationData* mNoticeData;
	int mPreviousHttpStatusCode;
	bool mRequiresAuthentication;
}
@property(readonly, assign, nonatomic) OFNotificationData* notice;
@property(readonly, assign, nonatomic) bool requiresAuthentication;
@property(readonly, assign, nonatomic) bool failedNotAuthorized;
@property(readonly, assign, nonatomic) MPOAuthAPIRequestLoader* loader;
+(id)actionRequestWithLoader:(id)loader withRequestType:(int)requestType withNotice:(id)notice requiringAuthentication:(bool)authentication;
-(bool)_checkAndHandleHttpErrors:(id)errors;
-(void)_onFailure:(id)failure nextCall:(id)call;
-(id)initWithLoader:(id)loader withRequestType:(int)requestType withNotice:(id)notice requiringAuthentication:(bool)authentication;
-(void)setRequestDoesNotExpectAuthentication;
-(void)dealloc;
-(void)dispatch;
-(void)abandonInLightOfASeriousError;
-(bool)canReceiveCallbacksNow;
@end

