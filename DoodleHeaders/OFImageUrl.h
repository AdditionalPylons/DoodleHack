/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFResource.h"

@class NSString;

@interface OFImageUrl : OFResource {
	NSString* url;
}
@property(readonly, assign, nonatomic) NSString* url;
+(id)getService;
+(OFResourceDataMap*)getDataMap;
+(id)getResourceName;
+(id)getResourceDiscoveredNotification;
-(void)setUrl:(id)url;
-(void)dealloc;
@end

