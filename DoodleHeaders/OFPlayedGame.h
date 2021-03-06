/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DoodleJump-Structs.h"
#import "OFResource.h"
#import "OFCallbackable.h"

@class NSString, NSMutableArray;

@interface OFPlayedGame : OFResource <OFCallbackable> {
	NSString* name;
	NSString* iconUrl;
	NSString* clientApplicationId;
	unsigned totalGamerscore;
	unsigned friendsWithApp;
	NSMutableArray* userGameStats;
	NSString* iTunesAppStoreUrl;
	BOOL favorite;
	NSString* review;
	OFPointer<OFHttpService> mHttpService;
	OFPointer<OFImageViewHttpServiceObserver> mHttpServiceObserver;
}
@property(readonly, assign, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) NSString* iconUrl;
@property(readonly, assign, nonatomic) NSString* clientApplicationId;
@property(readonly, assign, nonatomic) unsigned totalGamerscore;
@property(readonly, assign, nonatomic) unsigned friendsWithApp;
@property(readonly, assign, nonatomic) NSMutableArray* userGameStats;
@property(readonly, assign, nonatomic) NSString* iTunesAppStoreUrl;
@property(readonly, assign, nonatomic) BOOL favorite;
@property(readonly, assign, nonatomic) NSString* review;
+(void)setDelegate:(id)delegate;
+(id)getFeaturedGames;
+(void)_getFeaturedGamesSuccess:(id)success;
+(void)_getFeaturedGamesFailure;
+(id)getService;
+(OFResourceDataMap*)getDataMap;
+(id)getResourceName;
+(id)getResourceDiscoveredNotification;
+(bool)canReceiveCallbacksNow;
-(BOOL)isOwnedByCurrentUser;
-(id)getGameIcon;
-(void)_getGameIconSuccess:(id)success;
-(void)_getGameIconFailure;
-(void)setName:(id)name;
-(void)setIconUrl:(id)url;
-(void)setClientApplicationId:(id)anId;
-(void)setUserGameStats:(id)stats;
-(void)setTotalGamerscore:(id)gamerscore;
-(void)setFriendsWithApp:(id)app;
-(void)setITunesAppStoreUrl:(id)url;
-(void)setFavorite:(id)favorite;
-(void)setReview:(id)review;
-(id)getLocalUsersGameStat;
-(bool)canReceiveCallbacksNow;
-(void)dealloc;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

