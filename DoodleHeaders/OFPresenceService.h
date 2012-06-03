/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFCRVStompClientDelegate.h"
#import "OFService.h"
#import "DoodleJump-Structs.h"

@class NSMutableDictionary, NSString, NSThread, OFCRVStompClient;

@interface OFPresenceService : OFService <OFCRVStompClientDelegate> {
	NSString* presenceQueue;
	NSThread* presenceThread;
	BOOL pipeHttpOverPresence;
	BOOL httpPipeAvailable;
	int retriesAttempted;
	BOOL isPresenceActive;
	NSMutableDictionary* httpRequests;
	OFCRVStompClient* stompClient;
}
@property(retain) NSString* presenceQueue;
@property(assign) BOOL pipeHttpOverPresence;
@property(assign) BOOL httpPipeAvailable;
@property(retain) NSThread* presenceThread;
@property(retain, nonatomic) NSMutableDictionary* httpRequests;
@property(retain) OFCRVStompClient* stompClient;
+(id)sharedInstance;
+(void)initializeService;
+(void)shutdownService;
+(BOOL)isHttpPipeEnabled;
-(void)populateKnownResources:(OFResourceNameMap*)resources;
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
-(void)connect;
-(void)disconnect;
-(void)_reconnect;
-(void)_presenceMain:(id)main;
-(void)_pingThread;
-(void)_requestNewPresenceQueue;
-(void)_onPresenceQueueLoaded:(id)loaded;
-(void)_onFailedToLoadPresenceQueue;
-(void)postInMainThread:(id)mainThread;
-(void)stompClient:(id)client messageReceived:(id)received withHeader:(id)header;
-(void)stompClientDidDisconnect:(id)stompClient;
-(void)stompClientDidConnect:(id)stompClient;
-(void)serverDidSendReceipt:(id)server withReceiptId:(id)receiptId;
-(void)serverDidSendError:(id)server withErrorMessage:(id)errorMessage detailedErrorMessage:(id)message;
-(void)wrapUrlConnection:(id)connection andRequest:(id)request andDelegate:(id)delegate;
-(id)stringFromStreamData:(id)streamData;
-(void)sendHttpRequest:(id)request;
@end
