/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFResource.h"

@class NSString;

@interface OFGameDiscoveryImageHyperlink : OFResource {
	float secondsToDisplay;
	NSString* imageUrl;
	NSString* targetDiscoveryActionName;
	NSString* targetDiscoveryPageTitle;
	NSString* targetApplicationIPurchaseId;
	NSString* appBannerPlacement;
}
@property(retain, nonatomic) NSString* imageUrl;
@property(retain, nonatomic) NSString* targetDiscoveryActionName;
@property(retain, nonatomic) NSString* targetApplicationIPurchaseId;
@property(assign, nonatomic) float secondsToDisplay;
@property(retain, nonatomic) NSString* targetDiscoveryPageTitle;
@property(retain, nonatomic) NSString* appBannerPlacement;
+(OFResourceDataMap*)getDataMap;
+(id)getService;
+(id)getResourceName;
+(id)getResourceDiscoveredNotification;
-(void)setSecondsToDisplayFromString:(id)string;
-(bool)isCategoryLink;
-(bool)isIPurchaseLink;
-(void)dealloc;
@end

