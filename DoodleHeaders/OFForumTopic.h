/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OFResource.h"
#import "DoodleJump-Structs.h"

@class NSArray, NSString;

@interface OFForumTopic : OFResource {
	NSString* title;
	NSArray* children;
	int threadCount;
	BOOL isShowingChildren;
	int indentLevel;
	NSString* parentId;
}
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSArray* children;
@property(assign, nonatomic) int threadCount;
@property(assign, nonatomic) BOOL isShowingChildren;
@property(assign, nonatomic) int indentLevel;
+(id)announcementsTopic;
+(id)suggestionsTopic:(id)topic;
+(id)getService;
+(OFResourceDataMap*)getDataMap;
+(id)getResourceName;
+(id)getResourceDiscoveredNotification;
-(void)dealloc;
-(BOOL)hasParent;
-(BOOL)hasChildren;
-(void)setParentId:(id)anId;
-(id)parentId;
-(void)setThreadCountFromString:(id)string;
-(id)threadCountAsString;
@end

