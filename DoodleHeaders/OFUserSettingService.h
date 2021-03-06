/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFService.h"
#import "DoodleJump-Structs.h"


@interface OFUserSettingService : OFService {
}
+(id)sharedInstance;
+(void)initializeService;
+(void)shutdownService;
+(void)getIndexOnSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)getUserSettingWithKey:(id)key onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)setUserSettingWithId:(id)anId toBoolValue:(bool)boolValue onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)setUserSettingWithKey:(id)key toBoolValue:(bool)boolValue onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)setSubscribeToDeveloperNewsLetter:(BOOL)developerNewsLetter clientApplicationId:(id)anId onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
+(void)getSubscribingToDeveloperNewsLetter:(id)developerNewsLetter onSuccess:(const OFDelegate*)success onFailure:(const OFDelegate*)failure;
-(void)populateKnownResources:(OFResourceNameMap*)resources;
@end

