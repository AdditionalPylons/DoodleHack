/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFService.h"
#import "DoodleJump-Structs.h"


@interface OFConversationService : OFService {
}
+(id)sharedInstance;
+(void)initializeService;
+(void)shutdownService;
+(void)startConversationWithUser:(id)user onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)postMessage:(id)message toConversation:(id)conversation onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)getConversationHistory:(id)history page:(unsigned)page onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)deleteConversation:(id)conversation onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
-(void)populateKnownResources:(OFResourceNameMap*)resources;
@end
