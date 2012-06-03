/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFService.h"


@interface OFChatMessageService : OFService {
}
+(id)sharedInstance;
+(void)initializeService;
+(void)shutdownService;
+(void)getIndexOnSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)clearCacheAndPollNow;
-(void)populateKnownResources:(OFResourceNameMap*)resources;
-(void)registerPolledResources:(id)resources;
-(void)_onChatMessagesDiscovered:(id)discovered;
@end
